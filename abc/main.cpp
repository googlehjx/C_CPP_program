#include <iostream>

using namespace std;
class Base {
public:
	Base(int a):_a(a){
		cout << "Base(): a = " << a<<endl;
		label = new char[1] {'\0'};
	}
	~Base() {
		cout << "~Base() delete []label" << endl;
		delete[]label;
	}
	virtual void show()const {
		cout << " From Base";
		cout << " a = " << _a << endl;
	}
protected:
	int _a;
private:
	char* label;
};
class Derive :public Base {
public:
	Derive(int a, int d):Base(a),_d(d){ 
		cout << "Derive()" <<"a = "<<_a<<" d = "<<_d<< endl;
		style = new char[1] {'\0'};
	}
	~Derive() {
		cout << "~Derive() delete []style" << endl;
	}
	void show()const {
		cout << " From Derive::";
		cout << " a = " << _a << " d = " << _d << endl;
	}
private:
	int _d;
	char* style;
};



int main() {
	// �����������
	Derive d(1,2);
	Base a(3);
	cout << " ============" << endl;
	d.show();
	cout << " ============" << endl;
	Base* pb = &a;
	pb->show();
	pb = &d;
	pb->show();    // show�����麯������Derive�����ַ����Baseָ�룬������Base�����show����
	               // 
	/*
		Base(): a = 1
		Derive()a = 1 d = 2
		Base(): a = 3
		 ============
		 From Derive:: a = 1 d = 2
		 ============
		 From Base a = 3
		 From Base a = 1
		~Base() delete []label
		~Derive() delete []style
		~Base() delete []label
	*/

	// �����show��Ϊvirtual����ͬ���麯���ܼ̳�

	/*
		Base(): a = 1
		Derive()a = 1 d = 2
		Base(): a = 3
		 ============
		 From Derive:: a = 1 d = 2
		 ============
		 From Base a = 3
		 From Derive:: a = 1 d = 2
		~Base() delete []label
		~Derive() delete []style
		~Base() delete []label
	*/
	return 0;
}