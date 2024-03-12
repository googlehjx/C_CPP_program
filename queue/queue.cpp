#include "queue.h"
#include <iostream>

Queue::Queue(int s) {
	qs = s;
	length = 0;
	head = new PERSON { 0, nullptr }; // 队列头部为空节点
}
Queue::~Queue() {
	if (head->next) {
		deleteItem(head->next);
	}
	delete head;
}
void Queue::deleteItem(PERSON* p) {

	while (p->next != nullptr) {
		PERSON* tmp = p->next;
		delete p;
		p = tmp;
	}
	delete p;
}

bool Queue::isempty() const{
	return length == 0;
}

bool Queue::isfull()const {
	return length == qs;
}

bool Queue::enqueue(const Item& item) {
	if (isfull()) return false;
	PERSON* pN = new PERSON{ item, nullptr };
	PERSON* p = head;
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next = pN;
	length++;
	return true;

}
bool Queue::dequeue(Item& item) {
	if (isempty()) return false;
	PERSON* p = head->next;
	head->next = p->next;
	item = p->item;
	delete p;
	return true;
}
void Queue::show()const {
	PERSON* p = head->next;
	cout << "Content: " << endl;
	while (p != nullptr) {
		cout << p->item << " ";
		p = p->next;
	}
	cout << endl;
}