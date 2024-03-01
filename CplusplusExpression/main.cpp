#include<iostream>
#include <string>
using namespace std;
void fun() {
	cout << "fun()" << endl;
}
int main() {

	string word;
	int count = 0;
	cin >> word;
	while (word != "done" ) {
		count++;
		cin >> word;
	}
	cout << "You entered " << count << " words" << endl;

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