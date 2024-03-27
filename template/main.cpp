#include <iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
// 函数模板重载

template<typename T1, typename T2>
void Swap(T1& a, T1& b) {
	//T2 tmp = 1L;
	cout << "Swap<typename T1, typename T2>" << endl;
	//cout << tmp << endl;
}

int main() {
	int a = 1, b = 2;
	long c = 3, d = 4;
	Swap<int>(a, b);   // 提示编译器实例化模板函数，生产 Swap（int, int)
	cout << "a = " << a << " b = " << b << endl;
	Swap<long>(c, d);  // 提示编译器实例化模板函数，生产 Swap（long, long)
	cout << "c = " << c << " d = " << d << endl;

	Swap<int, long>(a, b);
}

