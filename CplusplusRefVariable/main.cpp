#include <iostream>
#include <string>
using namespace std;

typedef struct DataNode {
	string name;
	float score;
}Node;

void foo(const Node* p) {
	cout << p->name << endl;
	cout << p->score << endl;
}

void func(const Node& d) {
	cout << d.name << endl;
	cout << d.score << endl;
}

int main() {

	Node n = { "Bob", 90 };
	func(n);
	Node m = { "Alex", 99 };
	foo(&m);
	cout << " ====================== " << endl;
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
