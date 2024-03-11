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
void Time::Show()const {
	std::cout << "Hour = " << hour << std::endl;
	std::cout << "Minute = " << minute << std::endl;
}