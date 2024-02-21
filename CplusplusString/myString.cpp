#include <iostream>
#include <cstdlib>
#include <cstring>
#include "myString.h"
using namespace std;

myString::myString() {
	_str = new char[1];
	*_str = '\0';
	_length = 0;
	std::cout <<this<< " myString constructor" << std::endl;
}

myString::myString(const char* p) {
	int len=0;
	if (p == nullptr) {
		_str = new char[1];
		*_str = '\0';
	}
	else {
		len = strlen(p);
		_str = new char[len + 1];
		strcpy(_str, p);
	}
	_length = len;

	std::cout << this<<" myString constructor with parameter" << std::endl;
}

myString::myString(const myString& m) {
	_str = new char[m._length+1];
	strcpy(_str, m._str); 
	_length = m._length;
	std::cout << this<<" copy constructor" << std::endl;

}
myString::~myString() {
	std::cout << this<<" myString deconstructor" << std::endl;
	delete[]_str;
}

int myString::LenOfString() {
	return _length;
}

void myString::print() {
	std::cout << _str << std::endl;
}

myString& myString::operator=(const myString& m) {
	if (this == &m)
		return *this;
	_length = m._length;
	delete []_str;
	_str = new char[_length+1];
	strcpy(_str, m._str);
	return *this;
}

myString& myString::operator=(const char* ps) {
	int len = strlen(ps);
	delete []_str;
	_length = len;
	_str = new char[len+1];	
	strcpy(_str, ps);
	return *this;
}

myString myString::operator+(const myString& m) {
	myString ms;
	int len = this->_length + m._length;
	ms._length = len;
	ms._str = new char[len+1];
	strcpy(ms._str, this->_str);
	strcpy(ms._str + this->_length, m._str);
	return ms;
}

ostream& operator<<(ostream& out, const myString& m) {
	out << m._str;
	return out;
}

istream& operator>>(istream& in, myString& m) {
	char tmp[1024];
	in >> tmp;
	m = tmp;
	return in;
}
