#include <stdio.h>
#include <stdlib.h>

struct score{
	int a;
	double b;
};
int a = 2;
int main() {
	int arr[5] = { 0, 1, 2, 3, 4 };
	score sr = { 1, 2.0 };
	void* pArr = (void*)arr;
	int* pAny = (int*)malloc(sizeof(int));

	
	printf("Adress of array: %p \n",  &arr[4]);
	printf("Address of struct : %p\n", &sr);
	printf("Address of Malloc space: %p\n", pAny);
	printf("Address of global variable: %p\n", &a);

}