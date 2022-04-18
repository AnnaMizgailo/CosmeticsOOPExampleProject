#pragma once
#include <iostream>
#include <string>

class Queue{
private:
	string item;
public:
	void enqueue(int item);
	int dequeue();
	int size();
	bool empty();
	void clear();


};

