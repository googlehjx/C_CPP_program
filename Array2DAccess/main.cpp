#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4
int main() {
	int a[N] = { 1, 2, 3 };
	for (int i = 0; i < N; i++) {
		printf("%d ", *(a+i)); // һά�����������ǳ���ָ�룬��ÿ��һ����������һ��Ԫ��ռ�ڴ�Ĵ�С
	}
	putchar(10);

	int b[N][M] = { {0, 1, 2, 3},
					{4, 5, 6, 7},
					{8, 9, 10, 11} };
	for (int i = 0; i < N; i++) {
		int* pt = b[i];
		printf("%3d=======\n", *(pt));
		for (int j = 0; j < M; j++) {
			printf("%3d", *(pt + j));
		}
		putchar(10);
	}
	printf("=============");
	printf("%p \n", b);
	printf("%p \n", *b);
	printf("%x \n", **b);

	int (*T)[M];
	T = &b[0];
	printf("*****************\n");
	printf("%p %p", T, T + 1);

}