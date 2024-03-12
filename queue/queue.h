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
	int qs;          // �����г���
	int length;       // Ŀǰ�Ŷ�����
	PERSON* head;    // ����ͷ��
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);

};