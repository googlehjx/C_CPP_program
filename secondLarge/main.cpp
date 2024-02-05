#include <stdio.h>

int main() {
	int arr[10] = { 1, 8, 2, 4, 7, 5, 6, 3, 0, 9 };  // 没有相等的元素
	int first = arr[0];
	int second = arr[1];
	int tmp;
	if (first < second) {
		tmp = second;
		second = first;
		first = tmp;
	}
	for (int i = 2; i < 10; i++) {
		tmp = arr[i];
		if (tmp > first) {
			second = first;
			first = tmp;
		}
		else if (tmp < first && tmp > second) {
			second = tmp;
		}
		else {
			;
		}
	}
	printf("firt = %d, second = %d \n", first, second);
}