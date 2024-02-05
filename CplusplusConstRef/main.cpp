#include <iostream>
#include "date.h"
using namespace std;

int main() {	

	myClass::Date d;
	d.print();

	myClass::Date e;
	e.init();
	e.print();

	cout << "sizeof(Date) =  " << sizeof(d) << endl;
}