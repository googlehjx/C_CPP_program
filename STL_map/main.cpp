#include <iostream>
#include <map>

using namespace std;
int main() {

	// ����map����
	map<string, int> mp;

	// �����Ƿ�Ϊ��
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