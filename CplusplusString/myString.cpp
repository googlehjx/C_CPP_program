#include <iostream>

#include "myString.h"

myString::myString() {
	_str = new char[1];
	*_str = '\0';
	std::cout << "myString constructor" << std::endl;
}

myString::~myString() {
	std::cout << "myString deconstructor" << std::endl;
	delete[]_str;
}