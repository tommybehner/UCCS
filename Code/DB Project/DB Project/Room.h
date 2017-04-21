#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using namespace std;

class Room
{
public:
	Room(string, int);			//!Creates a new object and room in the DB
	~Room();					//!Required, do not remove

	void removeRoom(string);	//!remove a room from the DB
	void editCost(int);			//!change the cost of a room
	void displayRoom(Room);		//!display all data in the room table

private:
	string name;	//the name of the room
	int cost;		//the cost of the room
};

