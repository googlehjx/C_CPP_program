#pragma once

#include <iostream>
#include "c_stack.h"
struct stack {
	int top;
	char data[1024];
};

void init(stack& st);
bool isEmpty(const stack& st);
bool isFull(const stack& st);
void push(stack& st, char c);
char pop(stack& st);
