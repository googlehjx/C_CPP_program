#include <iostream>

extern int Global;
int File_var;

void upDateGlobal() {
	Global++;
	std::cout << " In upDateGlobal() Global = " << Global << std::endl;
}