#include <stdio.h>
#include <stdlib.h>
#include "myFunction.h"

int main() {
	//int a = 5;
	//int b = 10;
	//int iMax = myMax(a, b);
	//int fn = factorial(a);
	//printf("The factorial value = %d \n", fn);
	//fun(b);
	int a[] = { 1, 45, 56, 4, 5, 9, 10 };
	printArray(a, sizeof(a) / sizeof(a[0]));
	selectSort(a, sizeof(a) / sizeof(a[0]));
	printArray(a, sizeof(a) / sizeof(a[0]));
	int a1 = -1;
	int a2 = 1;

	printf("a1 = %d, a2=%d \n", a1, a2);
	mySwap(&a1, &a2);
	printf("a1 = %d, a2=%d \n", a1, a2);
	return 0;
}