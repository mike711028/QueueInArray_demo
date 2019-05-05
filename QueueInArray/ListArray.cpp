#include "queue.h"



void Queue::ListArray()
{
	if (this->IsEmpty())
	{
		std::cout << "It is an empty array" << std::endl;
		return;
	}

	std::cout << "The array is [ ";

	if (front < rear)
	{
		for (int i = front; i < rear + 1; i++)
		{
			std::cout << A[i] << " ";
		}
	}
	else
	{
		for (int i = rear; i < front + 1; i++)
		{
			std::cout << A[i] << " ";
		}
	}

	std::cout << "]" << std::endl;

}