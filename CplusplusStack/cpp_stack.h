#pragma once

class Stack {
private:
	int top;
	char* data;
public:
	Stack();
	~Stack();
	void init();
	bool isFull();
	bool isEmpty();
	void push(char c);
	char pop();
};
