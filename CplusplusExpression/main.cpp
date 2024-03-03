#include<iostream>
#include <string>
using namespace std;
void fun() {
	cout << "fun()" << endl;
}
typedef struct dataNode {
	int score;
	char* name;
}Node;
int main() {

	// 结构可以赋值、作为函数参数和函数返回值
	Node n;
	n.score = 99;
	n.name = new char[30];
	strcpy_s(n.name, 30, "bob");
	Node n2 = n;
	cout << (int*)n.name << endl;
	cout << (int*)n2.name << endl;

	// 指向字符串的指针必须是常数指针 
	cout << "===============" << endl;
	const char* p = "hello, world";
	cout << (float*)p << endl;
	cout << (int*)"hello, world" << endl;

	// 函数指针，函数名代表函数指针，只是不能赋值其他函数地址
	void (*pf)();
	pf = fun;
	cout <<&fun << endl;
	cout << fun << endl;
	cout << pf  << endl;
	pf();
	return 0;
}