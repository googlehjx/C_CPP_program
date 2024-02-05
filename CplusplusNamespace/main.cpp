#include <iostream>
#include "func.h"
#include "toFun.h"
#include "mediaPipe.h"

int a;
int b; 

namespace local_variable {
	int a;
	int b;
}

int main() {
	using namespace myFunc;
	using namespace std;
	foo();
	fun();
	yourFunc::foo();
	yourFunc::fun();

	local_variable::a = 3;
	local_variable::b = 4;

	cout << "全局变量: " << endl;
	cout << ::a << endl;
	cout << ::b << endl;
	cout << "局部变量: " << endl;
	cout << local_variable::a << endl;
	cout << local_variable::b << endl;

	MediaPipe::calculator cal = MediaPipe::calculator();
	cal.initial(89, "jxhe");
	cal.print();




}