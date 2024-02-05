#include <iostream>
#include <cstdlib>
#include "date.h"
using namespace std;

myClass::Date::Date() :year{ 2024 }, month{ 2 }, day{ 4 } {
	id = new char[20];
	const char* pid = "xxxx";
	memcpy(id, pid, sizeof(pid));
}
myClass::Date::~Date() {
	delete[] id;
}
void myClass::Date::init() {
	cin >> year;
	cin >> month;
	cin >> day;
	cin >> id;
}
void myClass::Date::print() {
	cout << "Year: " << year << " Month: " 
		<< month << " Day: " << day <<" id: "<<id << endl;
}



