#include "queue.h"

Queue::Queue(int s) {
	qs = s;
	length = 0;
	head = new PERSON { 0, nullptr }; // 队列头部为空节点
}
Queue::~Queue() {
	delete[] head;
}