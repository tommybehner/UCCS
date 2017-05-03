#pragma once
#include <string>
#include "DBConnector.h"
#include "Conference.h"
using namespace std;

class Business
{
public:
	Business();
	~Business();

	void addBusiness(string, string);				//!add a business to the DB
	void removeBusiness(string);					//!remove a business and all related data

	void addConference(string, string, string);		//!adds a conference and relates it to the business
	void removeConference(string, string);			//!removes the conference from the DB

	void displayConference(string);					//!Displays conferences related to Business
};