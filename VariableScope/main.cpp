#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void foo();

namespace my {
	int a = 30;
}


class A {
public:
	int x;
	int y;
	static int share;
};
int A::share = 100;

int main() {

	using std::cout;
	using std::cin;
	using std::endl;
	A aA, bA, cA;
	aA.share = 101;
	cout << A::share << endl;
	cout << my::a << endl;
	foo();

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
