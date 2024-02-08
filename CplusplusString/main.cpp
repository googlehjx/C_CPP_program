#include <iostream>

#include "myString.h"

using namespace std;
int main() {
	myString ms;
	cout << ms.LenOfString()<<endl;
	ms.print();
	myString ms1("china");
	cout << ms1.LenOfString() << endl;
	ms1.print();
	myString ms2(ms1);
	ms2.print();
	return 0;
}