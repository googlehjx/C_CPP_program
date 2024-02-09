#include <iostream>
#include <cstring>
#include "myString.h"

using namespace std;
int main() {
	myString ms;
	cout << ms.LenOfString()<<endl;
	myString ms1("china");
	cout << ms1.LenOfString() << endl;
	myString ms2(ms1);   // copy constructor

	cout << "===============" << endl;
	ms = ms1;
	ms.print();
	myString ms3;  // copy constructor
	ms3 = ms1;

	cout<<"==============="<<endl;

	ms = ms1 + ms2;
	ms.print();
	ms1.print();

	return 0;
}