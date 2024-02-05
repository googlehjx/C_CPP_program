#include <iostream>

#include "cpp_stack.h"

const int TOP_N = 8;
Stack::Stack() {
	top = 0;
	data = new char[TOP_N];
}

Stack::~Stack() {
	delete[] data;
}

void Stack::init() {
	top = 0;
	memset(data, 0, TOP_N);
}
bool Stack::isFull() {
	return top == TOP_N;
}
bool Stack::isEmpty() {
	return top == 0;
}
void Stack::push(char c) {
	if (!isFull()) {
		data[top] = c;
		top++;
		return;
	}
	std::cout << " the Stack is full." << std::endl;
	return;
}
char Stack::pop() {
	if (!isEmpty()) {
		--top;
		return data[top];
	}
	std::cout << " the Stack is empty." << std::endl;
	return '\n';
}