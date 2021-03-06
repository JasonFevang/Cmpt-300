#include "stdafx.h"
#include "CircBuffer.h"
#define debug true

byte CircBuffer::read()
{
	std::unique_lock<std::mutex> lk(m);//so it can be unlocked and locked again
	
	byte returnVal = 0;
	if (head == tail)//empty, wait for it to be not empty
	{
		cv.wait(lk, [this] {return head != tail; });
	}
	returnVal = buf[tail];
	tail = (tail + 1) % SIZE;

#if debug
	displayBuf();
#endif
	cv.notify_all();//notify waiting writer that it's done
	return returnVal;
}

void CircBuffer::write(byte inByte)
{
	std::unique_lock<std::mutex> lk(m);//so it can be unlocked and locked again
	cv.notify_all();
	if (head == (tail + SIZE - 1) % SIZE)//full. Equivalent to head == tail - 1, but works with modular arithmetic
	{
		cv.wait(lk, [this] { return head != (tail + SIZE - 1) % SIZE; });
	}
	buf[head] = inByte;
	head = (head + 1) % SIZE;
#if debug
	displayBuf();
#endif
	cv.notify_all();
	return;
}

void CircBuffer::displayBuf()
{
	for (int i = 0; i < SIZE; i++)
	{
		if (head > tail)//case 1
		{
			if (i >= tail && i < head)
			{
				printf("%c", buf[i]);
			} 
			else
				printf("_");
		}
		else if (head < tail)//case 2
		{
			if (i >= tail || i < head)
			{
				printf("%c", buf[i]);
			}
			else
				printf("_");
		}
		else
			printf("_");
	}
	printf("\n");
}