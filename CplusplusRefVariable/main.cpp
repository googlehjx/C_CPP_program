#include <iostream>
#include <string>
using namespace std;


int main() {
	int a = 10;
	int& ra = a;
	int* pa = &a;
	int* (&rpa) = pa;
	cout << "ra: " << ra << endl;
	cout << "*rpa: " << *rpa << endl;

	// �����ĸ�ֵ��ͬ
	cout << rpa << endl;   // ָ�����pa�����ã�����ֵ��pa��ͬ
	cout << pa << endl;    // ָ�����a��ָ�룬����ֵΪa�ĵ�ַ
	cout << &a << endl;    // int ����
	cout << &ra << endl;   // int ����������

	cout << "�������ã�" << endl;

	int arr[10] = { 1, 2, 3 };


	int (&rarr)[10] = arr;
	for (int i = 0; i < 10; i++) {
		cout << rarr[i] << " = " << arr[i] << endl;
	}

	int a_i = 5;
	const double& d_i = a_i;


}
