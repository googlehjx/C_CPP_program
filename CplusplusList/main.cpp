#include <iostream>

#include "myList.h"
using namespace std;
int main() {
	myList ms;
	ms.addNumber(1);
	ms.addNumber(2);
	ms.traverseList();
	ms.reversList();
	ms.traverseList();
}