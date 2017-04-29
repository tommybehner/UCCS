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

	int addConference(string, string);					//!Adds a conference with name and date to the DB
	void removeConference(string);						//!Removes a conference and its related sessions

	void addSession(string, string, string, string);	//!Adds a session with conferencename, name, room, and time and relates it to the conference
	void removeSession(string, string);					//removes the session from the db and removes all relations

	void displaySessions(string);						//!display all sessions related to Conference
};