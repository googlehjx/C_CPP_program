#include <iostream>
#include <cstring>
#include "myString.h"

using namespace std;
int main() {

	myString ms;   // default constructor
	//cout << ms.LenOfString()<<endl;
	myString ms1("china"); // constructor with parameter
	//cout << ms1.LenOfString() << endl;
	myString ms2(ms1);   // copy constructor

	cout << "===============" << endl;
	ms = ms1;
	cout << ms << endl;


	cout<<"==============="<<endl;

	ms = ms1 + ms2;
	cout << ms << endl;

	//cin >> ms;
	//cout << ms;

	return 0;
}