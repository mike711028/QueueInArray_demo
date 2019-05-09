#pragma once
#include <iostream>

const int MAX_SIZE = 5;


class Queue
{
private:
	int A[MAX_SIZE];
	int front;
	int rear;

public:

	// defaut Queue, set front & rear to -1
	Queue();

	~Queue();

	bool IsEmpty();

	void Enqueue(int key);

	void Dequeue();

	void ListArray();

	


	


};