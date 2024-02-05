#include <iostream>
#include "c_stack.h"


void init(stack& st) {
	st.top = 0;
	memset(st.data, 0, 1024);
}

bool isEmpty(const stack& st) {
	return st.top == 0;
}

bool isFull(const stack& st) {
	return st.top == 1024;
}

void push(stack& st, char c) {
	st.data[st.top] = c;
	st.top++;
}

char pop(stack& st) {
	return st.data[--st.top];
}