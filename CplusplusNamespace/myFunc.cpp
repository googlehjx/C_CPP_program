#include <iostream>
#include "func.h"

int myFunc::foo() {
	std::cout << "myFunc::foo" << std::endl;
	return 0;
}

void myFunc::fun() {
	std::cout << "myFunc::fun" << std::endl;
}