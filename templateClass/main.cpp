#include <iostream>
#include "stack.h"
using namespace std;
int main() {

	myStack<int> s_int;
	int a = 1;
	int b = 2;
	cout << "a = " << a << " b = " << b << endl;
	s_int.Push(a);
	s_int.Push(b);
	s_int.show();
	s_int.Pop(a);
	s_int.Pop(b);
	s_int.show();
	cout << "a = " << a << " b = " << b << endl;

}