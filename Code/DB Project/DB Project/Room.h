#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using namespace std;

class Room
{
public:
	Room();						//!Creates a new object
	~Room();					//!Required, do not remove

	void addRoom(string, int);	//!add a room to the DB
	void removeRoom(string);	//!remove a room from the DB
	void editCost(string, int);	//!change the cost of a room
	void displayRoom();			//!display all data in the room table
};

