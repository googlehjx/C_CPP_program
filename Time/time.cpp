#include "time.h"
#include <iostream>

Time::Time() {
	hour = 0;
	minute = 0;
}
Time::Time(int h, int m) {
	hour = h;
	minute = m;
}
Time::Time(const Time& t) {
	hour = t.hour;
	minute = t.minute;
}

void Time::AddMin(int m) {
	hour += m / 60;
	minute = m % 60;
	hour = hour % 24;
}


void Time::AddHr(int h) {
	hour += h;
	hour = hour % 24;
}
void Time::Reset(int h, int m) {
	hour = h + m/60;
	hour %= 24;
	minute = m%60;
}
Time Time::Sum(const Time& t)const {
	Time tm;
	tm.hour = hour + t.hour;
	tm.minute = minute + t.minute;
	tm.hour = tm.hour + tm.minute / 60;
	tm.minute = tm.minute % 60;
	tm.hour = tm.hour % 24;
	return tm;
}

Time Time::operator+(const Time& t)const {
	Time tm;
	tm.hour = hour + t.hour;
	tm.minute = minute + t.minute;
	tm.hour = tm.hour + tm.minute / 60;
	tm.minute = tm.minute % 60;
	tm.hour = tm.hour % 24;
	return tm;
}
Time Time::operator*(double alpha) const{
	Time result;
	result.minute = int(minute * alpha);
	result.hour = int(hour * alpha);
	result.hour = result.hour + result.minute / 60;
	result.minute = result.minute % 60;
	result.hour = result.hour % 24;
	return result;
}
Time operator*(double alpha, const Time& t) {
	return t * alpha;
}
void Time::Show()const {
	std::cout << "Hour = " << hour << std::endl;
	std::cout << "Minute = " << minute << std::endl;
}