#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g) {
	std::cin >> g.fullname;
	std::cin >> g.handicap;
	if (strlen(g.fullname) != 0) {
		return 1;
	}
	else {
		return 0;
	}
}
void handicap(golf& g, int hc) {
	g.handicap = hc;
}
void showgolf(const golf& g) {
	std::cout << "The fullname = " << g.fullname << std::endl;
	std::cout << "The handicap = " << g.handicap << std::endl;
}