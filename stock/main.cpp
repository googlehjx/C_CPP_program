#include <iostream>
#include "stock10.h"
using std::cout;
using std::endl;
int main() {
	Stock s1;
	s1.show();
	Stock s2 = { "qiandu.com Ltd.", 100, 32.9 };
	s2.show();
	Stock s3 = s1;
	s3.show();
	s3 = s2;
	s3.show();
	cout << " =============================== " << endl;
	const Stock cs;
	cs.show();
}