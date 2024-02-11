#include <iostream>
#include <cstdlib>
#include <cstring>
#include "myString.h"
using namespace std;

myString::myString() {
	_str = new char[1];
	*_str = '\0';
	_length = 1;
	std::cout << "myString constructor" << std::endl;
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
	_length = len + 1;

	std::cout << "myString constructor with parameter" << std::endl;
}

myString::myString(const myString& m) {
	_str = new char[m._length];
	strcpy(_str, m._str); 
	_length = m._length;
	std::cout << "copy constructor" << std::endl;

}
myString::~myString() {
	std::cout << "myString deconstructor" << std::endl;
	delete[]_str;
}

int myString::LenOfString() {
	return _length;
}

void myString::print() {
	std::cout << _str << std::endl;
}

myString& myString::operator=(const myString& m) {
	_length = m._length;
	_str = new char[_length];
	strcpy(_str, m._str);
	return *this;
}

myString& myString::operator=(const char* ps) {
	int len = strlen(ps) + 1;
	delete _str;
	_str = new char[len];
	strcpy(_str, ps);
	return *this;
}

myString myString::operator+(const myString& m) {
	myString ms;
	int len = this->_length + m._length - 1;
	ms._length = len;
	ms._str = new char[len];
	strcpy(ms._str, this->_str);
	strcpy(ms._str + this->_length - 1, m._str);
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
