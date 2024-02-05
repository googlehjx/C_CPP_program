#include <stdlib.h>
#include <stdio.h>
#include "others.h"



int main() {
	//using namespace my;
	char p[] = "hello world";
	const char* pstr = "china";
	printf("string %s stored in %p\n", p, p);
	printf("string %s stored in %p\n", pstr, pstr);
	printf("a = %d\n", my::a);
	printf("a stored in %p\n", &my::a);
	int a = 1;
	{
		int a = 2;
		printf("a = %d\n", a);
		printf("local a stroed in %p\n", &a);
	}
	printf("a = %d\n", a);
	printf("local a stroed in %p\n", &a);
}
