#include <iostream>
#include <vector>


using namespace std;
int main() {

	vector<int> vi;
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	for (auto i = vi.begin(); i != vi.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}