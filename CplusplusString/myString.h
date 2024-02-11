#pragma once
#include <iostream>
using namespace std;
class myString {
public:
	// 默认构造函数
	myString();
	// 带参数的构造函数
	myString(const char*);
	// 拷贝构造函数  string my1("china"); string my2(my1)
	myString(const myString&);
	// 赋值运算符重载
	myString& operator=(const myString& m);
	myString& operator=(const char* ps);
	// 加号运算符重载
	myString operator+(const myString& m);
	// 输出<<运算符重载
	friend ostream& operator<<(ostream& out, const myString& m);
	// 输入>>运算符重载
	friend istream& operator>>(istream& in, myString& m);


	~myString();
	int LenOfString();
	void print();

private:
	char* _str;
	int _length;
};