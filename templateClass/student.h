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
private:
	std::string name;
	valarray<double> scores;

};

myStudent::myStudent():name("none"), scores(){
	
}
myStudent::myStudent(string n, valarray<double> s) :name(n), scores(s) {}
ostream& operator<<(ostream &oi, const myStudent& m) {
	oi << "name: " << m.name << "; scores: ";
	for (auto d : m.scores) {
		oi << d << " ";
	}
	return oi;
}