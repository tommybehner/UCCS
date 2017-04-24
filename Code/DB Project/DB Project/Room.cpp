#include "Room.h"

//initialize a room object
Room::Room()
{
}

//required, do not use
Room::~Room()
{
	DBDisconnect();
}

//used to add a room the the DB
void Room::addRoom(string tempname, int tempcost)
{
	DBConnect();
	string name = tempname;
	int cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if room named exists (every room name is unique)
	str = "SELECT Name FROM Room WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM Room WHERE Name = '" + name + "'";
	}
	else {//If equipment not found, creates room for the DB
		  //creates a new Room in the database
		str = "INSERT INTO Room(Name, Cost, IsAvail)\nVALUES ('" + name + "', " + strCost + ", 1);";
		EditRow(str);
	}
	DBDisconnect();
}

//used to remove a room from the DB
void Room::removeRoom(string name)
{
	string str = "DELETE FROM Room WHERE Name = '" + name + "';";
	EditRow(str);
}

//used to change the cost of a room
void Room::editCost(string name, int newCost)
{
	int cost = newCost;
	string strCost = std::to_string(newCost); //converts an int to a string

	string str = "UPDATE Room SET Cost=" + strCost + " WHERE Name = '" + name + "'";
	EditRow(str);
}

//used to disply all rooms in the DB
void Room::displayRoom()
{
	string str;
	str = "SELECT * FROM Room";
	std::cout << Select(str) << "\n";
}