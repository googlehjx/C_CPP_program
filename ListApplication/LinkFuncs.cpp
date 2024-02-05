#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StuStruct.h"

//#define HeadInsert

void InitSut2File() {

	Stu StdDb[5] = {
		{"Jack", 'f', 98},
		{"Kevin", 'm', 99},
		{"Kim", 'm', 88},
		{"Tom", 'm', 78},
		{"Lucy", 'f', 86}
	};
	FILE* pf;
	fopen_s(&pf, "Stu.db", "w");
	fwrite(StdDb, sizeof(StdDb), 1, pf);
	fclose(pf);
	return;
}

StuNode* creatStuListFromFile(const char* FilePath) {
	FILE* pf;
	fopen_s(&pf, FilePath, "r+");
	StuNode* head = (StuNode*)malloc(sizeof(StuNode));
	head->next = NULL;
	// �ļ������˶��Stu�ṹ�壬��ÿ��������Ϊһ����¼��
	StuNode* last = head;
	while (last->next != NULL) {
		last = last->next;
	}
	StuNode* cur = (StuNode*)malloc(sizeof(StuNode));
	while (fread((void*) & cur->data, sizeof(Stu), 1, pf)) {
		cur->next = NULL;    // ����β�巨
		last->next = cur;
		last = cur;
		cur = (StuNode*)malloc(sizeof(StuNode));
	}
	free(cur);
	fclose(pf);
	return head;
}

void printStuData(StuNode* head) {
	putchar(10);
	printf("\t\t\tStudent Management System\n");
	putchar(10);
	putchar(10);
	printf("\t\t\t%-10s %6s %8s\n", "name", "gender", "Score");
	head = head->next;
	while (head) {
		printf("\t\t\t%-10s %6c %7.1f\n", head->data.name, head->data.gender, head->data.score);
		head = head->next;
	}
	putchar(10);
}

void findStuFromList(StuNode* head) {
	char target[30];
	printf("������������");
	scanf_s("%s", target, 30);
	head = head->next;
	while (head) {
		if (strcmp(head->data.name, target) == 0) {
			printf("���ҵ�ѧ�����ҵ���\n");
			printf("%-10s %6s %8s\n", "name", "gender", "Score");
			printf("%-10s %6c %7.1f\n", 
				head->data.name, head->data.gender, head->data.score);
			break;
		}
		head = head->next;
	}
	if (!head) {
		printf("δ���ҵ������ҵ�ѧ����\n");
	}
	printf("����Enter������");
	getchar();
	getchar();
}

void addStu2Link(StuNode* head) {
	//Stu* s = (Stu*)malloc(sizeof(Stu));
	StuNode* ps = (StuNode*)malloc(sizeof(StuNode));
	printf("�������ѧ������Ϣ��\n");
	printf("������");
	scanf_s("%s", ps->data.name, 30);
	putchar(10);
	getchar();
	printf("�Ա�");
	scanf_s("%c", &ps->data.gender, 2);
	putchar(10);
	printf("������");
	scanf_s("%f", &ps->data.score, 8);
	putchar(10);

	ps->next = head->next;
	head->next = ps;	
}

int calStuLen(StuNode* head) {
	head = head->next;
	int L = 0;
	while (head) {
		L++;
		head = head->next;
	}
	return L;
}

void sortStuLink(StuNode* head) {
	// ѡ�����򷨣����ȼ��������ȣ�Ȼ����ж���ѭ��
	int Len = calStuLen(head);
	if (Len < 2)
		return;
	StuNode* pre;
	StuNode* cur;
	StuNode* post;
	
	for (int i = 0; i < Len - 1; i++) {
		pre = head;
		cur = head->next;
		post = cur->next;
		for (int j = 0; j < Len - 1 - i; j++) {
			if (strcmp(cur->data.name, post->data.name) > 0) {
				pre->next = post;
				cur->next = post->next;
				post->next = cur;

				post = cur;
				cur = pre->next;
			}
			pre = pre->next;
			cur = cur->next;
			post = post->next;

		}
	}
	return;
}

void deletStuLink(StuNode* head) {
	char name[30];
	printf("����Ҫɾ����ѧ��������");
	scanf_s("%s", name, 30);
	if (!head->next) {
		printf("���ݿ�ա�\n");
		return;
	}
	StuNode* pre = head;
	StuNode* t = head->next;
	
	while (t) {
		
		if (strcmp(t->data.name, name) == 0) {
			pre->next = t->next;
			free(t);
			printf("ɾ��%s����Ϣ��\n", name);
			return;
		}
		pre = pre->next;
		t = pre->next;
	}

	printf("�����ѧ����Ϣ�������ݿ��С�\n");
	printf("����Enter������");
	getchar();
	getchar();

	return;
}

void saveStuLink(StuNode* head) {
	FILE* fp;
	fopen_s(&fp, "Stu.db", "w+");
	head = head->next;
	if (fp != NULL) {
		while (head) {
			fwrite(&head->data, sizeof(Stu), 1, fp);
			head = head->next;
		}
		fclose(fp);
	}
	return;

}

void freeNode(StuNode* node) {
	if (!node)
		return;
	freeNode(node->next);
	free(node);
}
void freeStuLink(StuNode* head) {
	StuNode* t = head;
	head = head->next;
	freeNode(head);
	free(t);
}

void reversStuLink(StuNode* head) {

#ifdef HeadInsert
	// ͷ�巨
	StuNode* cur = head->next;
	StuNode* tmp;
	head->next = NULL;
	while (cur) {
		tmp = cur->next;
		cur->next = head->next;
		head->next = cur;
		cur = tmp;
	}
#else

	// �ݹ鷨
	if (!head->next)
		return;
	head->next = rStuLink(head->next);
#endif
}


StuNode* rStuLink(StuNode * tmp) {

	if (!tmp->next)
		return tmp;
	StuNode* t = rStuLink(tmp->next);
	tmp->next->next = tmp;
	tmp->next = NULL;
	return t;
}

