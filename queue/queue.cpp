#include "queue.h"

Queue::Queue(int s) {
	qs = s;
	length = 0;
	head = new PERSON { 0, nullptr }; // ����ͷ��Ϊ�սڵ�
}
Queue::~Queue() {
	delete[] head;
}