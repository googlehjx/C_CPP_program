#include <iostream>
#include <valarray>
#include "stack.h"
#include "student.h"
using namespace std;
int main() {

	myStack<int> s_int;
	int a = 1;
	int b = 2;
	cout << "a = " << a << " b = " << b << endl;
	s_int.Push(a);
	s_int.Push(b);
	s_int.show();
	myStack<int> s_int2(s_int);
	cout << " invoke copy constructor" << endl;
	s_int2.show();
	s_int.Pop(a);
	s_int.Pop(b);
	s_int.show();
	cout << "a = " << a << " b = " << b << endl;

	valarray<double>s{ 99, 87 };
	myStudent ms;
	myStudent msa{ "jack",  s};
	cout << "=======================" << endl;
	cout << ms << endl;
	cout << msa << endl;

	valarray<double> tmpa(2);
	tmpa[0] = 99.1;
	tmpa[1] = 99.8;
	myStudent msp("hejinxin", tmpa);
	cout << "========================" << endl;
	cout << msp << endl;
	myStack<myStudent> mst;
	mst.Push(ms);
	mst.Push(msa);
	mst.Push(msp);
	mst.show();

}