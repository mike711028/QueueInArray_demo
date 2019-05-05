#include <iostream>
#include "queue.h"


int main()
{
	Queue Q;

	for (int i = 0; i < 5; i++)
	{
		Q.Enqueue(i);
	}
	
	Q.Enqueue(100);

	Q.ListArray();




}