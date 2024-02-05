#include <stdio.h>

void printArray(int*, int);

int main() {
	int arr[10] = { 9, 8, 2, 4, 7, 100, 6, 3, 0, 1 };  // 没有相等的元素
	printArray(arr, 10);
	int tmp;
	int index;
	for (int i = 0; i < 9; i++) {
		tmp = arr[i];
		index = i;
		for (int j = i + 1; j < 10; j++) {
			if (tmp > arr[j]) {
				tmp = arr[j];
				index = j;			
			}
		}
		if (index != i) {
			arr[index] = arr[i];
			arr[i] = tmp;
		}
		printArray(arr, 10);
	}
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", *(a + i));
		putchar(32);
	}
	putchar(10);
}