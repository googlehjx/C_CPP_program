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
};

int main() {

	Base b;
	b.vfunc1();
	b.fun1();

	Derive d;
	d.vfunc1();

	cout << "===================" << endl;
	Base* pb;
	pb = new Base;
	pb->vfunc1();
	delete pb;
	pb = new Derive;
	pb->vfunc1();
	delete pb;


	return 0;
}