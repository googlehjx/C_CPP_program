#pragma once
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


	~myString();
	int LenOfString();
	void print();

private:
	char* _str;
	int _length;
};