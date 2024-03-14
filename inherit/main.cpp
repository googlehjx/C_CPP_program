#include <iostream>
#include "tabtenn.h"

int main(int argc, char* argv[]) {

	using std::cout;
	using std::endl;
	TableTennisPlayer tp = { "Jim", "Green", true };
	RelatedPlayer rp = { 99, "Bob", "Delun", false };
	RelatedPlayer frp = { 100,rp };
	tp.name();
	cout << endl;
	rp.name();
	cout << endl;

	TableTennisPlayer* p_tp;
	p_tp = &tp;
	p_tp->info();
	p_tp = &rp;
	p_tp->info();
	

	return 0;
}