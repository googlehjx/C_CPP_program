#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template<typename T>
class stringPrint {
public:
	stringPrint(ostream& out):os(out){}
	void operator()(const T& t) {   // ÖØÔØº¯Êı·û
		os << t << " ";
	}
	ostream& os;
};

int main() {

	vector<string> vs;
	vs.push_back("C++");
	vs.push_back("Java");
	for_each(vs.begin(), vs.end(), stringPrint<string>(std::cout));

}

