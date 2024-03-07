#include <iostream>

namespace {
	int count = 100;
}
namespace Jill {
	int count = 9;
	int number;
}

namespace Hill {
	using Jill::count;
	int color;
	int height;
	void show_count();
}
using namespace std;
int main() {

	cout << " count = " << Jill::count << endl;
	cout << " count = " << Hill::count << endl;
	using Hill::show_count;
	show_count();
	return 0;


}

namespace Hill{
	void show_count() {
		count++;
		std::cout << " Hill::count = " << count << std::endl;
	}
}