#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// 仿函数，本质是定义一个类模板，实例化后生产一个对象，表现出函数的特性
// 接受实参，运行，返回结果
template<typename T>
class stringPrint {
public:
	stringPrint(ostream& out):os(out){}
	void operator()(const T& t) {   // 重载函数符
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

