#include <stdio.h>

void printArray(int*, int);

int main() {
	int arr[10] = { 9, 8, 2, 4, 7, 5, 6, 3, 0, 1 };  // 没有相等的元素
	printArray(arr, 10);
	int tmp;
	for (int i = 0; i < 9; i++) {		
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	printArray(arr, 10);
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", *(a + i));
		putchar(32);
	}
	putchar(10);
}