#include "queue.h"



void Queue::Dequeue()
{
	// empty array
	if (front == -1)
	{
		std::cout << "ERROR: Queue underflow" << std::endl;
		return;
	}
	std::cout << "The element delete from the queue is " << A[front] << std::endl;

	// there is only one element in the array
	// after deleting it, the array becomes empty
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		// the front is at the last element in the array
		if (front == MAX_SIZE - 1)
		{
			front = 0;
		}

		// other case just move forward one element;
		front++;
	}


}