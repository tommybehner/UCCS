// File Database.h
// Group 2

#ifndef DATABASE_H
#define DATABASE_H
#include <string>
using std::string;

class Database  // base class
{
public:
	// virtual functions for derived classes
	virtual void add() = 0;
	virtual void remove() = 0;

	// member functions
	bool is_inUse();
	bool is_notAvail();

protected:		// These items may need shifted around if base class changes (if inheritance/polymorphism no longer needed)
	bool inUse;
	bool notAvail;
	string timestamp;
};

#endif //DATABASE_H