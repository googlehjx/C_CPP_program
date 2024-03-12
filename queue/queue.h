#pragma once
typedef int Item;
typedef struct MyStruct
{
	Item item;
	MyStruct* next;
}PERSON;

class Queue {
	enum{Q_SIZE=10};
private:
	int qs;          // 最大队列长度
	int length;       // 目前排队人数
	PERSON* head;    // 队列头部
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);

};