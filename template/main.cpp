#include <iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
// ����ģ������

template<typename T1, typename T2>
void Swap(T1& a, T1& b) {
	//T2 tmp = 1L;
	cout << "Swap<typename T1, typename T2>" << endl;
	//cout << tmp << endl;
}

int main() {
	int a = 1, b = 2;
	long c = 3, d = 4;
	Swap<int>(a, b);   // ��ʾ������ʵ����ģ�庯�������� Swap��int, int)
	cout << "a = " << a << " b = " << b << endl;
	Swap<long>(c, d);  // ��ʾ������ʵ����ģ�庯�������� Swap��long, long)
	cout << "c = " << c << " d = " << d << endl;

	Swap<int, long>(a, b);
}

