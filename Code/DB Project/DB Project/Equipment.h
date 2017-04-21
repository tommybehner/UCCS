#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using namespace std;

class Equipment
{
public:
	Equipment(string, int);				//!Creates an equipment object and adds it to the DB, if not already there
	~Equipment();						//!Required, Do not use

	void removeEquipment(string);		//!Removes equipment from the DB
	void editCost(int);					//!Changes the cost for both the object and the database.
	void displayEquipment(Equipment);	//!Returns The equipment DB

private:
	string name;
	int cost;
};

