#include <iostream>


struct Stu {
	 std::string name;
	 mutable int score;
};

int main() {
	volatile int a = 10;  // ���ö�a���������Ż���ÿ�η��ʶ����ڴ��ȡ
	const Stu s{ "bob", 90 };
	s.score = 99;
	std::cout << "s.name = " << s.name << std::endl;
	std::cout << "s.score = " << s.score << std::endl;
	return 0;
}