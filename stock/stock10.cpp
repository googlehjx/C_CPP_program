#include <iostream>
#include "stock10.h"
using std::cout;
using std::endl;

Stock::Stock() {
	name = "No name";
	shares = 0;
	share_val = 0;
	set_tot();
}
Stock::Stock(const std::string& co, int n, double pr) {
	name = co;
	if (n < 0) {
		cout << " The num of stock shouldn't be negetive." << endl;
		shares = 0;
	}
	else {
		shares = n;
	}
	share_val = pr;
	set_tot();

}
Stock::Stock(const Stock& s) {
	name = s.name;
	shares = s.shares;
	share_val = s.share_val;
	set_tot();
}
Stock::~Stock() {

}
const Stock& Stock::operator=(const Stock& s) {
	this->name = s.name;
	this->shares = s.shares;
	this->share_val = s.share_val;
	this->set_tot();
	return *this;
}
void Stock::buy(long num, double pr) {
	if (num < 0) {
		cout << " the number of stocks shouldn't be negative" << endl;
		return;
	}
	shares += num;
	share_val = pr;
	set_tot();
}
void Stock::sell(long num, double price) {
	if (num<0 or num > shares) {
		cout << "Wrong number of stocks" << endl;
		return;
	}
	shares -= num;
	share_val = price;
	set_tot();
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
void Stock::show() const{
	cout << " Company name : " << name << endl;
	cout << " Stock price : " << share_val << endl;
	cout << " Stock number: " << shares << endl;
	cout << " The total value : " << total_val << endl;
}