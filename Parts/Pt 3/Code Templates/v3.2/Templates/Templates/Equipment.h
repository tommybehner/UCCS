// File Equipment.h
// Group 2

#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include "Database.h"  // base class

//!  class Equipment
/*!
 *This class contains the functions and data members relating to the Equipment derived class
*/

class Equipment : public Database
{
public:
	void add();		/**< Used to add equipment to the Database*/
	void remove();	/**< Used to remove equipment to the Database*/
	
	private:
	
};

#endif //EQUIPMENT_H