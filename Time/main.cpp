#include <iostream>
#include "time.h"

int main() {
	using std::cout;
	using std::endl;
	Time t1(23, 34);
	Time t2(3, 45);
	Time ts = t1.Sum(t2);
	t1.Show();
	t2.Show();
	ts.Show();
	ts.Reset(25, 33);
	ts.Show();


}