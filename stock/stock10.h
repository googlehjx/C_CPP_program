#pragma once
#ifndef _STOCK_H_
#define _STOCK_H_
#include <string>

class Stock {
private:
	std::string name;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string& co, int shares = 0, double share_val=0);
	Stock(const Stock& s);
	~Stock();
	const Stock& operator=(const Stock& s);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};


#endif // !_STOCK_H_
