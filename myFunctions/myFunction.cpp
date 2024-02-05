#include <stdio.h>
#include <stdlib.h>
int myMax(int i, int j) {
	return i > j ? i : j;
}
int factorial(int n) {
	if (n < 0) {
		printf("Error\n");
		exit(-1);
	}
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n-1);
	}
}

void fun(int n) {
	if (n > 0)
		fun(n / 2);
	printf("%d\n", n);
}

int smallElement(int * arr, int start, int end) {
	int small = start;
	for (int i = start + 1; i < end; i++) {
		if (arr[i] < arr[small]) {
			small = i;
		}
	}
	return small;
}

void selectSort(int* arr, int n) {
	// ѡ������
	// ���ȣ�ȷ����Ҫѭ��n-1�Σ�ÿ��ѡ��ӵ�ǰ�±굽��ĩβ����������С��ֵ��
	// Ȼ���û��������
	// ���i++
	for (int i = 0; i < n - 1; i++) {
		int idx = i;  // �α�ִ�е�ǰѭ��������ߣ��ں����Ĳ����У�
		              // ������ָ��ǰѭ��i������ĩβ�е���Сֵ�����±�
		idx = smallElement(arr, i, n);
		if (idx != i) {
			// mySwap(arr, idx, i);
			int tmp = arr[idx];
			arr[idx] = arr[i];
			arr[i] = tmp;
		}
	}
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", *(a + i));
	}
	putchar(10);
}

void mySwap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}