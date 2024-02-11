#include <iostream>
#include <cstring>
#include "myString.h"

using namespace std;
int main() {
#if 0
	myString ms;   // default constructor
	//cout << ms.LenOfString()<<endl;
	myString ms1("china"); // constructor with parameter
	//cout << ms1.LenOfString() << endl;
	myString ms2(ms1);   // copy constructor

	cout << "===============" << endl;
	ms = ms1;
	ms.print();


	cout<<"==============="<<endl;

	ms = ms1 + ms2;
	ms.print();
	ms1.print();
	cout << ms << endl;
#endif
	myString ms;
	cin >> ms;
	cout << ms;

	return 0;
}