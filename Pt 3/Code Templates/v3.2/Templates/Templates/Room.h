// File Room.h
// Group 2

#ifndef ROOM_H
#define ROOM_H
#include "Database.h"  // base class

class Room : public Database
{
public: 
	void add();
	void remove();

private:
	int MAX_capacity;
};

#endif //ROOM_H