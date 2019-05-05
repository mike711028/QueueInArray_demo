#include "queue.h"


bool Queue::IsEmpty()
{
	if (front == -1 && rear == -1)
	{
		return true;
	}

	return false;

}