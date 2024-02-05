#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

typedef struct _node {        // ����ڵ�����
	int data;
	_node* Next;
}Node;

// ��������������head
Node* creatList() {
	
	Node* p = (Node*)malloc(sizeof(Node));
	if (p) 
	{ p->Next = NULL; }
	return p;
}
// β���뷨�������
void InsertDataFromBack(Node* pHead, int data) {
	Node* t = (Node*)malloc(sizeof(Node));
	if (t) {
		t->data = data;
		t->Next = NULL;
		while (pHead->Next) {
			pHead = pHead->Next;
		}
		pHead->Next = t;
	}
}
// ͷ����
void InsertDataFromFront(Node* head, int data) {
	Node* t = (Node*)malloc(sizeof(Node));
	if (t) {
		t->data = data;
		t->Next = head->Next;
		head->Next = t;
	}
}

// ������ң�����ֵ�����NULL����������û��Ŀ������
// ���򣬴��ڣ��ҷ��ص�ָ��ָ��ýڵ�

Node* FindData(Node* head, int data) {
	head = head->Next;
	while (head) {
		if (head->data == data) {
			break;
		}
		head = head->Next;
	}
	return head;  
}

// ɾ���ҵ���Ԫ��,����ȷ��pFindDataָ��������ĳ���ڵ�
void DeleteNodeOfList(Node* head, Node* pFindData) {
	while (head->Next != pFindData) {
		head = head->Next;
	}
	head->Next = pFindData->Next;
	pFindData->Next = nullptr;
	free(pFindData);
	pFindData = nullptr;
}

// �������������
void TraverseList(Node* pHead) {
	pHead = pHead->Next;
	while (pHead) {
		printf("%d ", pHead->data);
		pHead = pHead->Next;
	}
	putchar(10);
}

void ReversPrint(Node* head) {
	if (!head) {
		return;
	}
	ReversPrint(head->Next);
	printf("%d ", head->data);
}
void ReversTraverseList(Node* head) {
	ReversPrint(head->Next);
	putchar(10);
}

// ����������
int LenthOfList(Node* head) {
	int len = 0;
	head = head->Next;
	while (head) {
		len++;
		head = head->Next;
	}
	return len;
}

void swap_node(Node* head, Node* p, Node* q) {
	Node* parentOfp;
	parentOfp = head;
	while (parentOfp->Next != p) {
		parentOfp = parentOfp->Next;
	}
	Node* t = q->Next;
	parentOfp->Next = q;
	q->Next = p;
	p->Next = t;
}

void BubleSortOfList(Node* head) {
	int len = LenthOfList(head);
	//assert(len >= 2);
	for (int i = 0; i < len - 1; i++) {
		Node* prep = head;
		Node* p = head-> Next;
		Node* q = p->Next;
		Node* t;
		for (int j = 0; j < len - 1 - i; j++) {
			if (p->data > q->data) {
				// �������ڵ㽻��
				//swap_node(head, p, q);
				//q = p->Next;
				//continue;

				// ���Ż��ķ���
				prep->Next = q;
				p->Next = q->Next;
				q->Next = p;
				t = p;
				p = q;
				q = t;
			}
			prep = prep->Next;
			p = p->Next;
			q = p->Next;
		}
	}
}

void ReversLink(Node* head) {
	// ��һ���и�����curָ��������ĵ�һ��Ԫ�ؽڵ㣬headָ�������
	Node* cur = head->Next;
	head->Next = NULL;

	// ���cur��Ϊ�գ���cur����ĵ�һ��Ԫ�ص�����������t��ͬʱcurָ����һ��Node;
	// ��������t Nodeͷ���뵽head�����ϣ�ֱ��curΪ�գ���������β����
	while (cur) {

		Node* t = cur;
		cur = cur->Next;

		// ��tͷ���뵽head��
		t->Next = head->Next;
		head->Next = t;
	}

}

void DestroyList(Node* head) {
	Node* t;
	while (head)
	{
		t = head->Next;
		free(head);
		head = t;
	}
}
int main() {
	int dataNumber;
	Node* head = creatList();

	//InsertDataFromFront(head, 4);
	//InsertDataFromFront(head, 5);
	//InsertDataFromBack(head, 3);
	//InsertDataFromBack(head, 2);
	//InsertDataFromBack(head, 1);
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		InsertDataFromFront(head, rand() % 100);
	}
	int len = LenthOfList(head);
	printf("The length of The list = %d\n", len);
	TraverseList(head);
	printf("After sorted:\n");
	BubleSortOfList(head);
	TraverseList(head);
	printf("after reversed.\n");
	ReversLink(head);
	TraverseList(head);

	printf("Length of the destroyed link = %d\n", LenthOfList(head));
	ReversTraverseList(head);
#if 0
	int targetData = 5;
	Node* tarFound = FindData(head, targetData);
	if (tarFound) {
		printf("Found the target: %d.\n", targetData);
		//printf("Delete the target Node of data.\n");
		printf("Double the data of the target node.\n");
		tarFound->data *= 2;
		//DeleteNodeOfList(head, tarFound);
		TraverseList(head);
		//printf("Now the length of List = %d.\n", LenthOfList(head));
	}
	else {
		printf("Not Found %d.\n", targetData);
	}
#endif

}

int main1() {

	Node a, b, c, d, e;        // ����ڵ�ʵ�壬����ֵ
	Node* head{ NULL };
	a.data = 1;
	b.data = 2;
	c.data = 3;
	d.data = 4;
	e.data = 5;

	head = &a;                  // �������ӹ�ϵ
	a.Next = &b;
	b.Next = &c;
	c.Next = &d;
	d.Next = &e;

	e.Next = NULL;               // ����������

	Node* pT = head;
	while(pT) {
		printf("%d ", pT->data);
		pT = pT->Next;
	}
	putchar(10);

	printf("ͨ������������ʾ��������:\n");
	TraverseList(head);
	return 0;
}