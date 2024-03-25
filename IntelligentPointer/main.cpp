#include <iostream>
#include <memory>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Report {
public:
	Report(const string& s):str(s) {
		std::cout << str <<" Constructed"<< endl;
	}
	~Report() {
		cout << str<<" Destroyed." << endl;
	}
private:
	string str;
};

int main() {

	{
		string s("unique_ptr");
		std::unique_ptr<Report> upd(new Report(s));
	}
	cout << "=========================" << endl;
	{
		std::shared_ptr<Report> spd(new Report("shared_ptr"));
	}
	cout << "===========================" << endl;
	return 0;
}