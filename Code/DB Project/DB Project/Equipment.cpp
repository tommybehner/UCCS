#include "Equipment.h"
#include "DBConnector.h"
#include <iostream>
#include <string>

//Creates an equipment object and adds it to the DB, if not already there
//string = desired name of equipment
//cost = desired cost of equipment
Equipment::Equipment(string tempname, int tempcost)
{
	DBConnect();
	name = tempname;
	cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if equipment named exists (every equipment name is unique)
	str = "SELECT Name FROM Equipment WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM Equipment WHERE Name = '" + name + "'";
		cost = atoi(str.c_str());
	}else {//If equipment not found, creates equipment for the DB
		//creates a new eqipment in the database
		str = "INSERT INTO Equipment(Name, Cost)\nVALUES ('" + name + "', " + strCost + ");";
		EditRow(str);
	}
	DBDisconnect();
}

//!Disconstructs the equipment object, not manually used
Equipment::~Equipment()
{
	DBDisconnect();
}

//Used to remove Equipment from the DB
//name = name of equipment to be removed
void Equipment::removeEquipment(string name)
{
	string str = "DELETE FROM Equipment WHERE Name = '" + name + "';";
	EditRow(str);
}

//Input = object.editCost(desired_cost)
//Changes the cost for both the object and the database.
//int = desired cost
void Equipment::editCost(int newCost)
{
	cost = newCost;
	string strCost = std::to_string(newCost);

	string str = "UPDATE Equipment SET Cost=" + strCost + " WHERE Name = '" + name + "'";
	EditRow(str);
}


void Equipment::displayEquipment(Equipment temp)
{
	temp.removeEquipment(temp.name);
	string str;
	str = "SELECT * FROM Equipment";
	std::cout << Select(str) << "\n";
}
