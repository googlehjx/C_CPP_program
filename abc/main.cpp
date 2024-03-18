#include <iostream>

using namespace std;
class Base {
public:
	Base(int a):_a(a){
		cout << "Base(): " << a<<endl;
	}
protected:
	int _a;
};
class Derive :public Base {
public:
	Derive(int a, int d):Base(a),_d(d){ 
		cout << "Derive()" << endl;
	}
	void show()const {
		cout << "a = " << _a << " d = " << _d << endl;
	}
private:
	int _d;
};



int main() {
	// 抽象基类用例
	Derive d(1,2);
	d.show();
	d._a;
	return 0;
}