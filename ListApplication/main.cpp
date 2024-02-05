#include <stdio.h>
#include <stdlib.h>
#include "Stustruct.h"

int main() {

	// 1.初始化数据库，往数据库里添加数据
	// InitSut2File();

	// 2.读数据库，构建内存数据模型
	StuNode* head = creatStuListFromFile("Stu.db");

	// 3.显示数据内容
	printStuData(head);

	// 4.查找数据

	// 5.添加数据
	// 
	// 6.保存数据


	int ch;

	while (1) {
		system("cls");
		printStuData(head);
		printf(" 0. 退出  1. 查找  2. 添加  3. 排序  4. 删除  5. 保存 6. 反转\n");
		printf(" 请输入功能对应的数字：");
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
			//printf("添加");
			addStu2Link(head);
			//printStuData(head);
			break;
		case 3:
			//printf("排序");
			sortStuLink(head);
		/*	printStuData(head);*/
			break;
		case 4:
			//printf("删除");
			deletStuLink(head);
			break;
		case 5:
			// 保存数据
			saveStuLink(head);
			break;
		case 6:
			// 链表反转
			reversStuLink(head);
			break;
		default:
			printf("错误输入.\n");
			printf("输入Enter键继续");
			getchar();
			getchar();
			break;
		}

	}

	return 0;
}