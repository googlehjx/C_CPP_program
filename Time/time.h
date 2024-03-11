#pragma once

class Time {
private:
	int hour;
	int minute;
public:
	Time();
	Time(int hr, int min = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t)const;
	Time operator+(const Time& t)const;
	void Show()const;
};