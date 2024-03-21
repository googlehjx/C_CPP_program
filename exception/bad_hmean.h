#include <iostream>
using namespace std;
class bad_hmean {
private:
	int _a, _b;
public:
	bad_hmean(int a = 0, int b = 0):_a(a), _b(b){}
	void message() {
		cout << "hmean(" << _a << ", " << _b << "): "
			<< "invalid arguments: a = -b" << endl;
	}
};