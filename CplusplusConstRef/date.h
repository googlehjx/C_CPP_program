#pragma once
#include <iostream>



namespace myClass {
	class Date {

	private:
		int year;
		int month;
		int day;
		char* id;

	public:
		Date();
		virtual ~Date();
		void print();
		void init();
	};

}