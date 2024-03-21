#include <iostream>
int hmean(int a, int b);
int main() {
	int result;
	int Len = 5;
	int a, b;
	while (true) {
		std::cin >> a;
		std::cin >> b;
		try {
			result = hmean(a, b);
		}
		catch (const char* s) {
			std::cout << s << std::endl;
			continue;
		}
		std::cout << "The hmean of " << a << " " << b << " is " << result << std::endl;
		Len--;
		if (Len == 0) break;
	}
	return 0;
}

int hmean(int a, int b) {
	if (a == -b) {
		throw "Bad parameters a == -b ";
	}
	else {
		return 2 * a * b / (a + b);
	}
}