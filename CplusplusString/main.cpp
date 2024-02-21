#include <iostream>
#include <cstring>
#include "myString.h"

using namespace std;

void func(myString a) {

}
int main() {

	myString ms;   // default constructor
	//cout << ms.LenOfString()<<endl;
	myString ms1("china"); // constructor with parameter
	//cout << ms1.LenOfString() << endl;
	myString ms2(ms1);   // copy constructor
	cout << "===============" << endl;
	ms = ms1;  // 调用赋值运算符重载函数
	cout << ms << endl;
	cout<<"==============="<<endl;

	// ms = ms1 + ms2;  // 1. 调用加号运算符重载，并返回临时对象； 2. 调用赋值运算符重载，并返回引用
	ms.operator=(ms1.operator+(ms2));
	cout << ms << endl;

	ms = "hello china";
	cout << ms << endl;

	func(ms);
	return 0;
}