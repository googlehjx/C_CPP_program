#include <stdio.h>
#include <stdlib.h>
#include "Stustruct.h"

int main() {

	// 1.��ʼ�����ݿ⣬�����ݿ����������
	// InitSut2File();

	// 2.�����ݿ⣬�����ڴ�����ģ��
	StuNode* head = creatStuListFromFile("Stu.db");

	// 3.��ʾ��������
	printStuData(head);

	// 4.��������

	// 5.�������
	// 
	// 6.��������


	int ch;

	while (1) {
		system("cls");
		printStuData(head);
		printf(" 0. �˳�  1. ����  2. ���  3. ����  4. ɾ��  5. ���� 6. ��ת\n");
		printf(" �����빦�ܶ�Ӧ�����֣�");
		scanf_s("%d", &ch);

		switch (ch) {
		case 0:
			saveStuLink(head);
			freeStuLink(head);
			exit(1);
			break;
		case 1:
			findStuFromList(head);
			break;
		case 2:
			//printf("���");
			addStu2Link(head);
			//printStuData(head);
			break;
		case 3:
			//printf("����");
			sortStuLink(head);
		/*	printStuData(head);*/
			break;
		case 4:
			//printf("ɾ��");
			deletStuLink(head);
			break;
		case 5:
			// ��������
			saveStuLink(head);
			break;
		case 6:
			// ����ת
			reversStuLink(head);
			break;
		default:
			printf("��������.\n");
			printf("����Enter������");
			getchar();
			getchar();
			break;
		}

	}

	return 0;
}