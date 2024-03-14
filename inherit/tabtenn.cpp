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