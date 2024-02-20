#include <iostream>
#include <set>

int main() {
	using namespace std;

	set<int> si{4, 6, 8, 9, 1, 4}; // set初始化: 去除重复、自动排序
	for (auto i = si.begin(); i != si.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	// 插入时，如果对象已有当前元素，就放弃，否则寻找合适位置，插入目标元素，使之有序
	si.insert(3);
	si.insert(4);
	si.insert(1);

	for (set<int>::const_iterator i = si.cbegin(); i != si.cend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}
