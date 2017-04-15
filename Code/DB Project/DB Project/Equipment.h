#pragma once
#include <string>
using namespace std;

class Equipment
{
public:
	Equipment(string, int);			//!Creates an equipment object and adds it to the DB, if not already there
	~Equipment();					//!Required, Do not use

	void removeEqipment(string);	//!Removes equipment from the DB

	void editCost(int);				//!Changes the cost for both the object and the database.
	int getCost();					//!Simply return the variable cost

private:
	string name;
	int cost;
};

