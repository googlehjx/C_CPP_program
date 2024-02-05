#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 3

void printArray(const int* a, int n);
int main() {
	// a和b是两个有序的数组，从小到大排序
	int a[N] = { 1, 5, 8, 13, 19 };
	int b[M] = { 2, 9, 14 };
	int c[N + M] = { 0 };
	int iA = 0;
	int iB = 0;
	int iC = 0;
	while (iA < N && iB < M) {
		if (a[iA] < b[iB]) {
			c[iC] = a[iA];
			iA++;
			iC++;
		}
		else {
			c[iC] = b[iB];
			iB++;
			iC++;
		}
	}
	while (iA < N) {
		c[iC] = a[iA];
		iC++;
		iA++;
	}


	while (iB < M) {
		c[iC] = a[iB];
		iC++;
		iB++;
	}

	printArray(c, M + N);
}

void printArray(const int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	putchar(10);
}