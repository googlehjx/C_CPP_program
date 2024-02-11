#pragma once
#include <iostream>
using namespace std;
class myString {
public:
	// Ĭ�Ϲ��캯��
	myString();
	// �������Ĺ��캯��
	myString(const char*);
	// �������캯��  string my1("china"); string my2(my1)
	myString(const myString&);
	// ��ֵ���������
	myString& operator=(const myString& m);
	myString& operator=(const char* ps);
	// �Ӻ����������
	myString operator+(const myString& m);
	// ���<<���������
	friend ostream& operator<<(ostream& out, const myString& m);
	// ����>>���������
	friend istream& operator>>(istream& in, myString& m);


	~myString();
	int LenOfString();
	void print();

private:
	char* _str;
	int _length;
};