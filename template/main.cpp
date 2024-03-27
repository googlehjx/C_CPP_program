#include <iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 1, b = 2;
	long c = 3, d = 4;
	Swap<int>(a, b);   // 提示编译器实例化模板函数，生产 Swap（int, int)
	cout << "a = " << a << " b = " << b << endl;
	Swap<long>(c, d);  // 提示编译器实例化模板函数，生产 Swap（long, long)
	cout << "c = " << c << " d = " << d << endl;
}

