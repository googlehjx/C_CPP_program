#include <iostream>
#include "time.h"

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	Time t1(23, 34);
	Time t2(3, 45);
	Time ts = t1+t2;
	cout << "t1: ";
	t1.Show();
	cout << "t2: ";
	t2.Show();
	cout << "ts: ";
	ts.Show();
	ts.Reset(25, 33);
	cout << "ts reset: ";
	ts.Show();
	cout << "====================" << endl;
	Time tmul = t1 * 3.4;
	tmul.Show();
	Time tmul2 = 3.4 * t1;
	tmul2.Show();
	cout << "输入/输出运算符重载" << endl;
	cout << tmul2;
	Time tmp;
	cin>> tmp;
	cout<< tmp;
	// 转换函数
	cout << double(tmp) << endl;


}