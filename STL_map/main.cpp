#include <iostream>
#include <map>

using namespace std;
typedef map<string, int> myMap;
int main() {

	// ����map����
	map<string, int> mp;

	// �����Ƿ�Ϊ��
	if (mp.empty()) {
		cout << "map is empty." << endl;
	}

	mp.insert(pair<string, int>("hello", 100));
	mp.insert(pair<string, int>("bob", 200));
	mp["jim"] = 300;  // �±긳ֵ��
	mp["greem"] = 400;


	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << " " << endl;
	}
	cout << endl;

	map<string, int> mp2;
	mp2 = mp; // ��һ��map����ֵ����һ��map�������ݸ��ƣ�mp�����ݱ��ֲ���

	mp["jack"] = 500;  // �޸�mp��ֵ�����ı�mp2�����ݣ���ȿ���
	
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