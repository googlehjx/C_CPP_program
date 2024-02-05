#include <stdio.h>

int main() {
	printf("输入两个整形数据：");
	putchar(10);
	int data1;
	int data2;
	scanf("%d %d", &data1, &data2);
	// scanf("%d", &data2);
	printf("你输入的是：%d和%d", data1, data2);
	putchar(10);

}