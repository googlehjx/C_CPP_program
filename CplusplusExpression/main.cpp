#include<iostream>
#include <string>
using namespace std;
void fun() {
	cout << "fun()" << endl;
}
typedef struct dataNode {
	int score;
	const char* name;
}Node;
int main() {

	Node n = { 90, "bob" };
	Node n2 = n;
	cout << (int*)n.name << endl;
	cout << (int*)n2.name << endl;

	//string word;
	//int count = 0;
	//cin >> word;
	//while (word != "done" ) {
	//	count++;
	//	cin >> word;
	//}
	//cout << "You entered " << count << " words" << endl;

	cout << """""""""""" << endl;
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