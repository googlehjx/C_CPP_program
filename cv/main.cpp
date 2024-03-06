#include <iostream>


struct Stu {
	 std::string name;
	 mutable int score;
};

int main() {
	volatile int a = 10;  // 不用对a变量缓存优化，每次访问都从内存读取
	const Stu s{ "bob", 90 };
	s.score = 99;
	std::cout << "s.name = " << s.name << std::endl;
	std::cout << "s.score = " << s.score << std::endl;
	return 0;
}