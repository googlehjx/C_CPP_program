#include <iostream>
#include <vector>


using namespace std;
int main() {
	cout << "Enter an int: " << endl;
	int number;
	cin >> number;
	int* pA = new int[number];
	for (int i = 0; i < number; i++) {
		int tmp;
		cin >> tmp;
		*(pA + i) = tmp;
	}
	for (int i = 0; i < number; i++) {
		cout << *(pA + i) << " ";
	}
	cout << endl;
	delete [] pA;
	cout << "========================" << endl;
	vector<int> vc_int(3);
	vc_int[0] = 11;
	vc_int[1] = 22;
	vc_int[2] = 33;
	for (auto i : vc_int) {
		cout << i << " ";
	}
	cout << endl;
	cout << "=====================================" << endl;
	vector<int> vi;
	cout << "vi.size() = " << vi.size() << endl;
	cout << "vi.capacity() = " << vi.capacity() << endl;
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	cout << "vi.size() = " << vi.size() << endl;
	cout << "vi.capacity() = " << vi.capacity() << endl;
	vi.push_back(4);
	cout << "vi.capacity() = " << vi.capacity() << endl;
	//vi.clear();

	cout << "=====================================" << endl;
	cout << "vi.size() = " << vi.size() << endl;
	cout << "vi.capacity() = " << vi.capacity() << endl;
	for (auto i = vi.begin(); i != vi.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	vector<int>::iterator it = vi.begin();
	//cout << *it << endl;
	cout << vi.front() << endl;
	cout << vi.back() << endl;
	cout << "C++11 �µĵ����ķ�����" << endl;
	for (auto i : vi) {
		cout << i << " ";
	}
	cout << endl;
	cout << "pop_back�ӿڣ�" << endl;
	vi.pop_back();   // ��vectorĩβ��Ԫ�ض���

	for (auto i : vi) {
		cout << i << " ";
	}

	cout << endl;
	vector<int>::iterator pt = vi.begin();

	vi.erase(pt+1, pt+2);

	for (auto i : vi) {
		cout << i << " ";
	}

	cout << endl;
	
	return 0;
}