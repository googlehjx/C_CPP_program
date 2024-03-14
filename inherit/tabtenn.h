#pragma once
#include <string>
using std::string;
class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn, const string& ln, bool bt = false);
	TableTennisPlayer(const TableTennisPlayer& t);
	void name() const;
	bool getTable()const { return hasTable; }
	bool HasTable()const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
	virtual void info()const;
};

class RelatedPlayer: public TableTennisPlayer {
public:
	RelatedPlayer(unsigned int r = 0, const string& fn="", const string& ln = "", bool bt = false);
	RelatedPlayer(unsigned int r, const TableTennisPlayer& t);
	unsigned int Rating()const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
	virtual void info()const; 
private:
	unsigned int rating;
};