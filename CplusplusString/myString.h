#pragma once
class myString {
public:
	// Ĭ�Ϲ��캯��
	myString();
	// �������Ĺ��캯��
	myString(const char*);
	// �������캯��  string my1("china"); string my2(my1)
	myString(const myString&);
	// ��ֵ���캯��


	~myString();
	int LenOfString();

private:
	char* _str;
	int _length;
};