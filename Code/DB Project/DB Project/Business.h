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

	void addBusiness(string, string);
	void removeBusiness(string);

	void addConference(string, string, string);
	void removeConference(string, string);

	void displayConference(string);
};