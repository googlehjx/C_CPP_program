#include <stdio.h>

typedef int(T)[4];
void printArray1D(int*, int);
int main() {
	T b[3] = { {0, 1,  2,  3},
			   {4, 5,  6,  7},
		       {8, 9, 10, 11} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", b[i][j]);
		}
		putchar(10);
	}

	printf("The address of array2D: %p\n", b);
	printf("The address of array2D: %p\n", b+1);
	printf("The address of first ele: %p\n", b[0]);
	printf("The address of second ele: %p\n", b[1]);
		
	
	

	return 0;
}
void printArray1D(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	putchar(10);
	
}