#include <iostream>
#include <cstring>
#include "myString.h"

using namespace std;

myString& func(myString &a /* myString a */) {
	// ʵ�δ��ݾ���ʱ�����ÿ������캯�������β�Ϊ���ã���Ҫ���ù��캯����������ʱ����
	// �����ض������õĻ��������ù��캯��
	// ��Ҫ�ر�ע�⣬���ض������ã��Ǹ��������Ǹú����ľֲ���������������������ͱ������ˣ��޴������ˡ�
	return a;
}
/*
�����
0000003B9D8FF848 myString constructor with parameter
0000003B9D8FF848 myString deconstructor
���棺������Ϊ�����ͷ��ض����������ʱ����
*/

myString func1(myString& a /* myString a */) {
	// ʵ�δ��ݾ���ʱ�����ÿ������캯�������β�Ϊ���ã���Ҫ���ù��캯����������ʱ����
	// �����ض���Ļ�������Ҫ���ÿ������캯��
	// ��func���������һ�����ض���һ�����ض�������
	return a;
}

/*
000000F08AEFF758 myString constructor with parameter
000000F08AEFF848 copy constructor
000000F08AEFF848 myString deconstructor
000000F08AEFF758 myString deconstructor
����������ֵΪ��������ù��캯��������ʱ���󣬷��ص����ú�����ջ��

*/

int main3() {

	myString ms("china");
	//func(ms);
	func1(ms);
	return 0;
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