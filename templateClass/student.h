#pragma once
#include <string>
#include <valarray>
#include<iostream>
using std::ostream;
using std::valarray;
using std::string;
class myStudent {
public:
	myStudent();
	myStudent(string n, valarray<double> s);
	friend ostream& operator<<(ostream &oi, const myStudent& m);
	void setInfo(const string n, valarray<double> s);
private:
	std::string name;
	valarray<double> scores;

};
