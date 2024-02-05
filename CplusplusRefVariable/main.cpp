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

	// 以下四个值相同
	cout << rpa << endl;   // 指针变量pa的引用，它的值与pa相同
	cout << pa << endl;    // 指向变量a的指针，它的值为a的地址
	cout << &a << endl;    // int 变量
	cout << &ra << endl;   // int 变量的引用

	cout << "数组引用：" << endl;

	int arr[10] = { 1, 2, 3 };


	int (&rarr)[10] = arr;
	for (int i = 0; i < 10; i++) {
		cout << rarr[i] << " = " << arr[i] << endl;
	}

	int a_i = 5;
	const double& d_i = a_i;


}
