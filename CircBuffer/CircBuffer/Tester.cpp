// CircBuffer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CircBuffer.h"
#include <thread>

#define DATASIZE 19
char data[DATASIZE + 1] = "abcdefghijklmnopqrs";//19 letters
char data2[DATASIZE + 1] = "1234567890123456789";//19 numbers
void writer(CircBuffer* cb)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));//1s wait

	int i = 0;
	while (true)
	{
		cb->write(data[i%DATASIZE]);
		if(i < DATASIZE/2)
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));//1s wait
		else
			std::this_thread::sleep_for(std::chrono::milliseconds(500));//0.5s wait

		i++;
	}
}

void writer2(CircBuffer* cb)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(500));//0.5s wait

	int i = 0;
	while (true)
	{
		cb->write(data2[i%DATASIZE]);
		if (i < DATASIZE / 2)
			std::this_thread::sleep_for(std::chrono::milliseconds(800));//1s wait
		else
			std::this_thread::sleep_for(std::chrono::milliseconds(400));//0.5s wait

		i++;
	}
}

void reader(CircBuffer* cb)
{

	int i = 0;
	while (true)
	{
		cb->read();//don't read into anything cause why lol
		if (i < DATASIZE/2)
			std::this_thread::sleep_for(std::chrono::milliseconds(500));//1s wait
		else
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));//0.5s wait

		i++;
	}
}

int main()
{
	CircBuffer cb;

	//create threads to perform read/write cycle
	std::thread writer(writer, &cb);
	std::thread writer2(writer2, &cb);
	std::thread reader(reader, &cb);
	
	//let them run independently
	writer.detach();
	writer2.detach();
	reader.detach();

	while (true) {};//do nothing forever

	/*
	CircBuffer cb;
	cb.displayBuf();

	cb.write('a');
	cb.write('b');
	cb.read();
	cb.write('c');
	cb.write('d');
	cb.write('e');
	cb.write('f');
	cb.read();
	cb.read();
	cb.write('g');
	cb.write('h');
	cb.write('i');
	cb.write('j');
	cb.write('k');//this doesn't go through because it's full
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();//doesn't read because it's empty

	cb.write('a');
	cb.write('b');
	cb.read();
	cb.write('c');
	cb.write('d');
	cb.write('e');
	cb.write('f');
	cb.read();
	cb.read();
	cb.write('g');
	cb.write('h');
	cb.write('i');
	cb.write('j');
	cb.write('k');//this doesn't go through because it's full
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();
	cb.read();//doesn't read because it's empty
	*/
}

