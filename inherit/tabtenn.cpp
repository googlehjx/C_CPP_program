#include <iostream>
#include "tabtenn.h"

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) :
	firstname(fn), lastname(ln), hasTable(ht) {
	firstname = fn;
	lastname = ln;
	hasTable = ht;
}
TableTennisPlayer::TableTennisPlayer(const TableTennisPlayer& t) {
	firstname = t.firstname;
	lastname = t.lastname;
	hasTable = t.hasTable;
}

void TableTennisPlayer::name() const {
	std::cout << lastname << ", " << firstname;
}

void TableTennisPlayer::info() const {
	name();
	if (hasTable) {
		std::cout << " has a table." << std::endl;
	}
	else {
		std::cout << " doesn't have a table." << std::endl;
	}
}
RelatedPlayer::RelatedPlayer(unsigned int r, const string p, const string& fn,
	const string& ln, bool bt): TableTennisPlayer(fn, ln, bt), pd(p) { 
	// 子类构造函数不能访问父类私有变量，
	// 通过在初始化列表方式显示调用父类构造函数，初始化属于父类的成员变量
	// 还有一个逻辑上的原因是，只有对象以及构建，才能进入构造函数体内，而
	// 子类对象是包含父类对象的全部属性，而此时还没调用父类的构造函数                                                    
	
	rating = r;
}
RelatedPlayer::RelatedPlayer(unsigned int r, const string p, const TableTennisPlayer& t):
	TableTennisPlayer(t), pd(p){
	
	rating = r;
}

void RelatedPlayer::info() const {
	name();
	std::cout << " has a rating of " << rating << ". And he ";
	if (getTable()) {
		std::cout << " has a table." << std::endl;
	}
	else {
		std::cout << " doesn't have a table." << std::endl;
	}
}