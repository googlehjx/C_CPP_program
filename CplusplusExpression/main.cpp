#include<iostream>
#include <string>
using namespace std;

void count(int n) {
	cout << "Counting Downing ... " << n << " (n at "<< &n <<")" << endl;
	if (n > 0)
		count(n - 1);
	cout << 0 << " : Kaboom!" << " (n at " << &n << ")" << endl;
}
void fun() {
	cout << "fun()" << endl;
}
typedef struct dataNode {
	int score;
	char* name;
}Node;
int main() {
	count(4);

	// �ṹ���Ը�ֵ����Ϊ���������ͺ�������ֵ
	Node n;
	n.score = 99;
	n.name = new char[30];
	strcpy_s(n.name, 30, "bob");
	Node n2 = n;
	cout << (int*)n.name << endl;
	cout << (int*)n2.name << endl;

	// ָ���ַ�����ָ������ǳ���ָ�� 
	cout << "===============" << endl;
	const char* p = "hello, world";
	cout << (float*)p << endl;
	cout << (int*)"hello, world" << endl;

	// ����ָ�룬��������������ָ�룬ֻ�ǲ��ܸ�ֵ����������ַ
	void (*pf)();
	pf = fun;
	cout <<&fun << endl;
	cout << fun << endl;
	cout << pf  << endl;
	pf();
	return 0;
}