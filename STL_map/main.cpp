#include <iostream>
#include <map>

using namespace std;
typedef map<string, int> myMap;
int main() {

	// 构造map对象
	map<string, int> mp;

	// 测试是否为空
	if (mp.empty()) {
		cout << "map is empty." << endl;
	}

	mp.insert(pair<string, int>("hello", 100));
	mp.insert(pair<string, int>("bob", 200));
	mp["jim"] = 300;  // 下标赋值法
	mp["greem"] = 400;


	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << " " << endl;
	}
	cout << endl;

	map<string, int> mp2;
	mp2 = mp; // 将一个map对象赋值给另一个map对象，内容复制，mp的内容保持不变

	mp["jack"] = 500;  // 修改mp的值，不改变mp2的内容，深度拷贝
	
	for (map<string, int>::iterator it = mp2.begin(); it != mp2.end(); it++) {
		cout << it->first << " " << it->second << " " << endl;
	}
	cout << endl;

	mp.insert(myMap::value_type("lucy", 600));
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << " " << endl;
	}

	// mp.insert(pair<string, int>("abcd", 100));
	// mp.insert(map<string, int>::value_type("abcd", 100));

}