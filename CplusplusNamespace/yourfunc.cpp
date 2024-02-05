#include <iostream>
#include "toFun.h"

int yourFunc::foo() {
	std::cout << "yourFunc::foo" << std::endl;
	return 0;
}

void yourFunc::fun() {
	std::cout << "yourFunc::fun" << std::endl;
}

