#include <iostream>
#include <vector>


using namespace std;
int main() {

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

	for (auto i = vi.begin(); i != vi.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}