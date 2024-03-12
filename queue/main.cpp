#include <iostream>
#include "queue.h"

int main() {
	Queue q;
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
	q.show();
	Item t;
	q.dequeue(t);
	q.show();
	cout << t << endl;
	{
		Queue qn;
		qn.show();
	}
	cout << "end" << endl;

	return 0;
}