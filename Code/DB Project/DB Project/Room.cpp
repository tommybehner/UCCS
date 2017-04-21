#include "Room.h"
#include "DBConnector.h"
#include <iostream>

Room::Room(string tempname, int tempcost)
{
	DBConnect();
	name = tempname;
	cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if equipment named exists (every equipment name is unique)
	str = "SELECT Name FROM Room WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM Room WHERE Name = '" + name + "'";
		cost = atoi(str.c_str());
	}
	else {//If equipment not found, creates equipment for the DB
		  //creates a new Room in the database
		str = "INSERT INTO Room(Name, Cost)\nVALUES ('" + name + "', " + strCost + ");";
		EditRow(str);
	}
	DBDisconnect();
}

Room::~Room()
{
	DBDisconnect();
}

void Room::removeRoom(string name)
{
	string str = "DELETE FROM Room WHERE Name = '" + name + "';";
	EditRow(str);
}

void Room::editCost(int newCost)
{
	cost = newCost;
	string strCost = std::to_string(newCost);

	string str = "UPDATE Room SET Cost=" + strCost + " WHERE Name = '" + name + "'";
	EditRow(str);
}

void Room::displayRoom(Room temp)
{
	temp.removeRoom(temp.name);
	string str;
	str = "SELECT * FROM Room";
	std::cout << Select(str) << "\n";
}