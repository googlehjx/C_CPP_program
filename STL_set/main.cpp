#include <iostream>
#include <set>

int main() {
	using namespace std;

	set<int> si{4, 6, 8, 9, 1, 4}; // set��ʼ��: ȥ���ظ����Զ�����
	for (auto i = si.begin(); i != si.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;

	// ����ʱ������������е�ǰԪ�أ��ͷ���������Ѱ�Һ���λ�ã�����Ŀ��Ԫ�أ�ʹ֮����
	si.insert(3);
	si.insert(4);
	si.insert(1);

	for (set<int>::const_iterator i = si.cbegin(); i != si.cend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}
