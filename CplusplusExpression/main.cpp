#include<iostream>
using namespace std;
void fun() {
	cout << "fun()" << endl;
}
int main() {
	const char* p = "hello, world";
	cout << (float*)p << endl;
	cout << (int*)"hello, world" << endl;
	void (*pf)();
	pf = fun;
	cout << &fun << endl;
	cout << fun << endl;
	cout << pf << endl;
	pf();
	return 0;
}