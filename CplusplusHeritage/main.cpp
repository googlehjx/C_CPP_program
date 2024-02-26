#include <iostream>
using namespace std;

class Base {

public:

	void fun1() {
		cout << "Base::fun1" << endl;
	}
	void fun2() {
		cout << "Base::fun2" << endl;
	}
	virtual void vfunc1() {
		cout << "Base::vfunc1" << endl;
	}
	virtual void vfunc2() {
		cout << "Base::vfunc2" << endl;
	}
};

class Derive : public Base {
public:
	virtual void vfunc1() {
		cout << "Derive::vfunc1" << endl;
	}
	void fun1() {
		cout << "Derive::fun1" << endl;
	}
};

int main() {

	Base b;
	b.vfunc1();
	b.fun1();

	Derive d;
	d.vfunc1();

	cout << "===================" << endl;

	// Base指针，赋值不同子类的对象地址时，调用虚函数实现“多态”，也就是同样的调用语句，实现不同的效果
	// 原因简单说，是因为包含虚函数的类在构建对象时，会隐含生产一个虚函数表地址，指向所属类的虚函数表，
	// 表里的每个入口对应那个子类对虚函数的实现，这个在运行时绑定的，所以较“动态绑定”
	Base* pb;
	pb = new Base;
	pb->vfunc1();
	pb->fun1();
	delete pb;
	cout << "----------------------" << endl;
	pb = new Derive;
	pb->vfunc1();
	pb->fun1();
	delete pb;


	return 0;
}