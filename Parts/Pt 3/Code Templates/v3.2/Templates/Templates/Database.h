// File Database.h
// Group 2

#ifndef DATABASE_H
#define DATABASE_H
#include <string>
using std::string;

//!  class Database
/*!
 *This class contains the functions and data members relating to the base class Database
*/
class Database  // base class
{
public:
	// virtual functions for derived classes
	virtual void add() = 0;
	virtual void remove() = 0;

	// member functions
	bool is_inUse();	/**< This sets the equipment to InUse, making it unavailable to be used*/
	bool is_Avail(); /**< This sets the equipment to Available, making it available to be used*/

protected:		// These items may need shifted around if base class changes (if inheritance/polymorphism no longer needed)
	bool inUse;
	bool notAvail;
	string timestamp;
};

#endif //DATABASE_H