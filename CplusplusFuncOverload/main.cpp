#include <iostream>
#include <string>
#include "func.h"
using namespace std;




int main() {
	//int a{ 10 };
	//char b{ 'a' };
	//func(a); 
	//func(b);
	myComplex a{ 1, 2 };
	myComplex b{ 2, 3 };
	myComplex c;
	c = a + b;
	cout << "c.real:" << c.real << "  " << "c.imaging:" << c.imaging << endl;


	return 0;
}