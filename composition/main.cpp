#include<iostream>
#include <valarray>
#include<string>
using std::valarray;
using std::string;
using std::cout;
using std::endl;
class myStudent {
private:
	string name;
	valarray<double> scores(4);
};
int main() {

	valarray<int> arr_int(4);
	for (auto ai : arr_int) {
		std::cout << ai << std::endl;
	}

	return 0;
}