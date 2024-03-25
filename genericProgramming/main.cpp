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
	
}