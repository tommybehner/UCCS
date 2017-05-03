#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using namespace std;

class Equipment
{
public:
	Equipment();						//!Creates an equipment object
	~Equipment();						//!Required, Do not use

	void addEquipment(string, int);		//!adds an equipment to the DB
	void removeEquipment(string);		//!Removes equipment from the DB
	void editCost(string, int);			//!Changes the cost for both the object and the database.
	void displayEquipment();			//!Returns The equipment DB
};