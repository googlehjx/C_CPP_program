#include <iostream>

extern int Global;
void upDateGlobal();
void count();
using namespace std;
int main() {

	cout << "in main() Global = " << Global << endl;
	upDateGlobal();
	cout << "in main() Global = " << Global << endl;
	count();
	count();
	count();

	return 0;
}

void count() {
	static int i = 0;
	i++;
	cout << " call time: " << i << endl;
}