#pragma once
class myString {
public:
	// 默认构造函数
	myString();
	// 带参数的构造函数
	myString(const char*);
	// 拷贝构造函数  string my1("china"); string my2(my1)
	myString(const myString&);
	// 赋值构造函数


	~myString();
	int LenOfString();

private:
	char* _str;
	int _length;
};