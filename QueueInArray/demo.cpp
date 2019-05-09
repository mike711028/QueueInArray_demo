#include <iostream>
#include "queue.h"


int main()
{
	Queue Q;

	for (int i = 0; i < 3; i++)
	{
		Q.Enqueue(i);
	}

	Q.ListArray();


	for (int i = 0; i < 3; i++)
	{
		Q.Dequeue();
	}

	Q.ListArray();




}