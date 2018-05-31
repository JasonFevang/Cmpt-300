#include <mutex>
#include <condition_variable>

typedef unsigned char byte;
#define SIZE 8

class CircBuffer {
private:
	
	std::mutex m;
	std::condition_variable cv;
	
	byte buf[SIZE];
	
	int head;
	int tail;

public:
	//default constructor
	CircBuffer()
	{
		head = 0;
		tail = 0;
	}

	void write(byte inByte);
	byte read();
	void displayBuf();
};