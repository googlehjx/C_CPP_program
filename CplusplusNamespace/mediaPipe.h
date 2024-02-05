#pragma once
#include <string>
#include <iostream>

namespace MediaPipe {
	class calculator {
	public:
		calculator();
		virtual ~calculator();
		void initial(int a, std::string name);
		void print();
	private:
		int score;
		std::string name;
	};
}
