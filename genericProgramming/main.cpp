#include<iostream>
#include <algorithm>
#include <vector>
int main() {
	using namespace std;
	vector<double> vd{ 6,2,3,4,5 };
	sort(vd.begin(), vd.end());
	for (auto i : vd) {
		cout << i << " ";
	}
	cout << endl;

	vector<double>::iterator pt = find(vd.begin(), vd.end(), 2);
	if(pt != vd.end()){
		cout << *pt << endl;
	}
	vector<double> vd2{ 6,5,4,3,2,1 };
	vector<double> vd3(6);
	// 确保三个vector对象的长度匹配
	transform(vd.begin(), vd.end(), vd2.begin(), vd3.begin(), plus<double>());
	for (auto& i : vd3) {
		cout << i << " ";
	}
	cout << endl;
	
}