#include <iostream>
#include "student.h"
myStudent::myStudent() :name("none"), scores() {

}
myStudent::myStudent(string n, valarray<double> s) :name(n), scores(s) {}
ostream& operator<<(ostream& oi, const myStudent& m) {
	oi << "name: " << m.name << "; scores: ";
	for (auto d : m.scores) {
		oi << d << " ";
	}
	return oi;
}

void myStudent::setInfo(const string n, valarray<double> s) {
	name = n;
	scores = s;
}