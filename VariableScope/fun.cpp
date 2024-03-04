#include <iostream>
namespace my {
	extern int a;
}

void foo() {
	my::a = 40;
	std::cout << "my::a = " << my::a << std::endl;
}