#pragma once
#include <iostream>
using std::cout;
using std::endl;
typedef int Item;


class Queue {
	enum{Q_SIZE=10};
private:
	typedef struct MyStruct
	{
		Item item;
		MyStruct* next;
	}PERSON;
	const int qs;          // 最大队列长度
	int length;       // 目前排队人数
	PERSON* head;    // 队列头部
	void deleteItem(PERSON* p);
	Queue(const Queue& t):qs(0){}
	Queue& operator=(const Queue& t) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
	void show()const;

};