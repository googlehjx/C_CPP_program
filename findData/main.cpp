#include <stdio.h>

void printArray(int*, int);
void sortSelect(int*, int);
void findData(int*, int, int);


int main() {
	int arr[10] = { 9, 8, 2, 4, 7, 100, 6, 3, 0, 1 };  // 没有相等的元素
	// 0, 1, 2, 3, 4, 6, 7, 8, 9, 100;
	// left = 0; right = 9; mid = 4;
	printArray(arr, 10);
	sortSelect(arr, 10);
	printArray(arr, 10);
	findData(arr, 10, 7);
	
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", *(a + i));
		putchar(32);
	}
	putchar(10);
}

void sortSelect(int* a, int n) {
	int tmp;
	int index;
	for (int i = 0; i < n-1; i++) {
		tmp = a[i];
		index = i;
		for (int j = i + 1; j < n; j++) {
			if (tmp > a[j]) {
				tmp = a[j];
				index = j;
			}
		}
		if (index != i) {
			a[index] = a[i];
			a[i] = tmp;
		}
		//printArray(a, 10);
	}
}

void findData(int* a, int n, int target) {
	// 输入的数组是已从小到大排序好的
	int left = 0;
	int right = n - 1;
	int mid = (left + right) / 2;
	int flag = -1;
	//while (target >= a[left] && target <= a[right]) {
	while(left <= right){
	
		if (a[mid] == target) {
			flag = mid;
			break;
		}
		else if (a[mid] > target) {
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else {
			left = mid + 1;
			mid = (left + right) / 2;
		}
	}
	if (flag != -1) {
		printf("We found the target number at %d of array\n", flag);
	}
	else {
		printf("Not found\n");
	}
}