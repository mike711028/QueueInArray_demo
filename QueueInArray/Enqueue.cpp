#include "queue.h"
// array -> zero-based index

void Queue::Enqueue(int key)
{
	// full array
	// case 1: the front is in the first element while the rear is in the last element
	// case 2: the rear is hehind the front   |   | rear  | front  |    |   |
	if(rear == MAX_SIZE - 1 && front == 0 || front == rear + 1)
	{
		std::cout << "ERROR: Full Array" << std::endl;
		return;
	}

	// the array is empty 
	if (this->IsEmpty())
	{
		// set both of them into the first element
		rear = 0;
		front = 0;
	}
	// rear is in the last element but the array is not empty 
	// set rear back into 0
	else if (rear == MAX_SIZE - 1)
	{
		rear = 0;
	}
	// other case: increment of rear
	else
	{
		rear++;
	}

	// assign rear into index of array
	A[rear] = key;
	

}