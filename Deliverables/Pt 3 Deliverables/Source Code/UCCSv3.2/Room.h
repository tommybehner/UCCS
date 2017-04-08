// File Room.h
// Group 2

#ifndef ROOM_H
#define ROOM_H
#include "Database.h"  // base class

//!  class Room 
/*!
This class contains the functions and data members relating to the Room derived class
*/

class Room : public Database
{
public: 
	void add();	  
	void remove();
	
private:
	int MAX_capacity; /**< max capacity of the room */
	int room_id;	/**< room ID number */
	double cost;	/**< the cost of the specific room */ 
	
};

#endif //ROOM_H