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
	ms = ms1;  // ���ø�ֵ��������غ���
	cout << ms << endl;
	cout<<"==============="<<endl;

	// ms = ms1 + ms2;  // 1. ���üӺ���������أ���������ʱ���� 2. ���ø�ֵ��������أ�����������
	ms.operator=(ms1.operator+(ms2));
	cout << ms << endl;

	ms = "hello china";
	cout << ms << endl;

	func(ms);
	return 0;
}