#pragma once
#include <iostream>
using std::ostream;
using std::istream;
class Time {
private:
	int hour;
	int minute;
public:
	Time();
	Time(int hr, int min = 0);
	Time(const Time& t);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t)const;
	Time operator+(const Time& t)const;
	Time operator*(double alpha)const;
	friend Time operator*(double alpha, const Time& t);
	friend ostream& operator<<(ostream &os, const Time& t);
	friend istream& operator>>(istream& is, Time& t);
	void Show()const;
	operator double() const; // ×ª»»º¯Êý
};