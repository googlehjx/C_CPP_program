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
	// 选择排序
	// 首先，确定需要循环n-1次，每次选择从当前下标到最末尾的数列中最小的值，
	// 然后，置换到最左侧
	// 最后，i++
	for (int i = 0; i < n - 1; i++) {
		int idx = i;  // 游标执行当前循环的最左边，在后续的操作中，
		              // 它最终指向当前循环i到数组末尾中的最小值所在下标
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