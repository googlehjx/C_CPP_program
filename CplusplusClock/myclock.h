#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
class myClock {

public:
	myClock() {
		time_t t = time(NULL);
		struct tm ti;
		localtime_s(&ti, &t);
		hour = ti.tm_hour;
		min = ti.tm_min;
		sec = ti.tm_sec;
	}
	// 没有指针默认析构函数、拷贝构造函数、赋值等号运算符等
	void run() {
		
		while (true)
		{
			system("cls");			
			show();
			Sleep(1000);
		}
	}
	void show() {
		sec++;
		if (sec == 60) {
			sec = 0;
			min++;
			if (min == 60) {
				hour++;
				if (hour ==24){
					hour = 0;
				}
			}
		}
		cout << setw(2) << setfill('0') << hour << ":";
		cout << setw(2) << setfill('0') << min << ":";
		cout << setw(2) << setfill('0') << sec << endl;
	}
	~myClock(){}

private:
	int hour;
	int min;
	int sec;
};
