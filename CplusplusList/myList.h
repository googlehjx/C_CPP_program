#pragma once
#include <iostream>

typedef struct dataNode {
	int data;
	dataNode* p_Next;
}Node;

class myList {
public:
	myList();
	~myList();
	bool isEmpyt();
	int lenOfList();
	void addNumber(int a);
	int popNumber();
	void traverseList();
	void reversList();
private:
	Node* head;
	void deleteList(Node*);
	Node* reverAuz(Node*);
};
