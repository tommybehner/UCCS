#pragma once
#include <string>
#include "DBConnector.h"
#include "session.h"
using namespace std;

class Conference
{
public:
	Conference();
	~Conference();

	int addConference(string, string);
	void removeConference(string);

	void addSession(string, string, string, string);
	void removeSession(string, string);

	void displaySessions(string);
};