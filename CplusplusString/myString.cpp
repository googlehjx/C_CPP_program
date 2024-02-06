#include <iostream>
#include <cstdlib>
#include <cstring>
#include "myString.h"

myString::myString() {
	_str = new char[1];
	*_str = '\0';
	std::cout << "myString constructor" << std::endl;
}

myString::myString(const char* p) {
	int len = strlen(p);
	if (p == nullptr) {
		_str = new char[1];
		*_str = '\0';
	}
	else {
		_str = new char[len + 1];
		strcpy(_str, p);
	}

	std::cout << "myString constructor with parameter" << std::endl;
}

myString::myString(const myString& m) {
	_str = new char[strlen(m._str)+1];
	strcpy(_str, m._str); 
	std::cout << "copy constructor" << std::endl;

}
myString::~myString() {
	std::cout << "myString deconstructor" << std::endl;
	delete[]_str;
}

