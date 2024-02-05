#include <stdio.h>
#include <stdlib.h>

#define N 4

typedef struct _stack {
	char data[N];
	int top;
}Stack;

bool isEmpty(Stack* pS) {
	return pS->top == 0;
}

bool isFull(Stack* pS) {
	return pS->top == N;
}

void push(Stack* pS, char ch) {
	if (!isFull(pS)) {
		pS->data[pS->top] = ch;
		pS->top++;		
	}
	else {
		printf("The stack is full, so you cannot push any more data.\n");
		exit(-1);
	}
}

char pop(Stack* pS) {
	if (!isEmpty(pS)) {
		pS->top--;
		return pS->data[pS->top];
	}
	else {
		printf("The stack is Empty, so you cannot pop any data.\n");
		exit(-1);
	}
}

int main() {
	Stack s{ {0},0 };
	push(&s, 'c');
	push(&s, 'h');
	push(&s, 'i');
	push(&s, 'n');
	push(&s, 'a');
	printf("%c", pop(&s));
	putchar(10);
	
	return 0;
}