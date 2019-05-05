#include "queue.h"

Queue::Queue()
{
	this->front = -1;
	this->rear = -1;
}

Queue::~Queue()
{
	std::cout << "Deconstructor is processing" << std::endl;
}
