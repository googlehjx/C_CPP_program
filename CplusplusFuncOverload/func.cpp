#include "func.h"
#include <iostream>
using namespace std;


void func(int a) {

	cout << "func(int)" << endl;
}

void func(char a) {
	cout << "func(char)" << endl;
}

myComplex operator+(myComplex a, myComplex b) {
	myComplex c;
	c.real = a.real + b.real;
	c.imaging = a.imaging + b.imaging;
	return c;
}

