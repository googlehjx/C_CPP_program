#include <iostream>
#include <map>

using namespace std;
int main() {

	// 构造map对象
	map<string, int> mp;

	// 测试是否为空
	if (mp.empty()) {
		cout << "map is empty." << endl;
	}

	mp.insert(pair<string, int>("hello", 100));
	mp.insert(pair<string, int>("bob", 200));

	map<string, int>::iterator it = mp.begin();
	for (; it != mp.end(); it++) {
		cout << it->first << " " << it->second << " " << endl;
	}
	cout << endl;
	

}