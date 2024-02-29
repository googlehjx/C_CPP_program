#include <iostream>
#include <cstring>
#include "myString.h"
#include <string>
#include <stdio.h>
using namespace std;
void print_hex(const char* buffer, int len) {
	int i;
	printf("******************start code**********************************\n");
	for (i = 0; i < strlen(buffer); i++) {
		printf("0x%02X ", (unsigned char)buffer[i]);
	}
	printf("\n");
	printf("********************end code************************************\n");
}

int main() {

	string s;
	s = R"&(这)&";  // Windows的code page: 936 也及时GBK编码，那么“这”的编码为0Xe2d5，占16bit，2个字节
	cout << s << endl;
	cout << s.size() << endl;
	print_hex(s.c_str(), strlen(s.c_str()));
	return 0;
}

myString& func(myString &a /* myString a */) {
	// 实参传递尽量时，调用拷贝构造函数；若形参为引用，则不要调用构造函数来生成临时对象，
	// 但返回对象引用的话，不调用构造函数
	// 需要特别注意，返回对象引用，那个对象不能是该函数的局部变量，否则函数结束对象就被析构了，无从引用了。
	return a;
}
/*
输出：
0000003B9D8FF848 myString constructor with parameter
0000003B9D8FF848 myString deconstructor
表面：引用作为参数和返回都不会产生临时对象
*/

myString func1(myString& a /* myString a */) {
	// 实参传递尽量时，调用拷贝构造函数；若形参为引用，则不要调用构造函数来生成临时对象，
	// 但返回对象的话，还需要调用拷贝构造函数
	// 与func的区别就是一个返回对象，一个返回对象引用
	return a;
}

/*
000000F08AEFF758 myString constructor with parameter
000000F08AEFF848 copy constructor
000000F08AEFF848 myString deconstructor
000000F08AEFF758 myString deconstructor
表明：返回值为对象，则调用构造函数生成临时对象，返回到调用函数的栈上

*/

int main3() {

	myString ms("china");
	//func(ms);
	func1(ms);
	return 0;
}





int main2() {

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