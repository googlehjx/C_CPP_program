#include <iostream>
#include "myList.h"
using namespace std;
int main() {
	{
		myList m;
	}
	cout << "======" << endl;
	myList ms;
	ms.addNumber(1);
	ms.addNumber(2);
	ms.addNumber(3);
	ms.addNumber(4);
	ms.addNumber(5);
	ms.addNumber(6);
	ms.addNumber(7);
	ms.traverseList();
	ms.popNumber();
	ms.popNumber();
	ms.reversList();
	ms.traverseList();

	//while (ms.lenOfList() != 0) {
	//	cout << ms.popNumber() << " ";
	//}
	cout << endl;
	cout << "Now the length = " << ms.lenOfList() << endl;
	ms.emptyList();
	cout << "Now the length = " << ms.lenOfList() << endl;
	cout << "======" << endl;
	ms.traverseList();
	cout << "======" << endl;
}