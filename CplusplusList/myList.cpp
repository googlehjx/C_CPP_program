#include <iostream>

#include "myList.h"

myList::myList() {
	head = new Node{ 0, nullptr };
}
myList::~myList() {
	deleteList(head);
}

int myList::lenOfList() {
	Node* t=head->p_Next;
	int Len = 0;
	while (t != nullptr) {
		Len++;
		t = t->p_Next;
	}
	return Len;	
}

void myList::addNumber(int a) {  // ǰ�巨
	Node* t = new Node{ a, nullptr };
	t->p_Next = head->p_Next;
	head->p_Next = t;
}

int myList::popNumber() {
	Node* pre = head;
	Node* cur = pre->p_Next;

	while (cur->p_Next != nullptr) {
		pre = cur;
		cur = cur->p_Next;
	}
	int dt = cur->data;
	delete cur;
	pre->p_Next = nullptr;
	return dt;
}
void myList::traverseList() {
	Node* t = head->p_Next;
	while (t != nullptr) {
		std::cout << t->data << " ";
		t = t->p_Next;
	}
	std::cout << std::endl;
}
void myList::reversList() {
	if (lenOfList() < 1)return;
	else {
		head->p_Next = reverAuz(head->p_Next);
	}
}

void myList::deleteList(Node* head) {
	if (head == nullptr)return;
	Node* t=nullptr;
	if (head->p_Next != nullptr) {
		t = head;
		deleteList(t->p_Next);
	}
	delete head;
	return;
}

Node* myList::reverAuz(Node* cur) {  // �ݹ鷨
	Node* t;
	if (cur->p_Next != nullptr) {
		t = reverAuz(cur->p_Next);
		cur->p_Next->p_Next = cur;
		cur->p_Next = nullptr;
		return t;
	}
	else
		return cur;

}