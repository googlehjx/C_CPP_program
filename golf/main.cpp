#include <iostream>
#include "golf.h"
int main() {

	golf Ann = {"Bob", 89};
	golf Bob;
	setgolf(Bob, "Real Bob", 99);
	showgolf(Ann);
	showgolf(Bob);
	handicap(Ann, 90);
	std::cout << " ------------------- " << std::endl;
	showgolf(Ann);

}