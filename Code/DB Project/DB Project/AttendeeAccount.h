#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
#include <list>
using namespace std;

class AttendeeAccount
{
public:
	AttendeeAccount();					//!Creates a new object
	~AttendeeAccount();					//!Required, do not remove
	
	void addConference(string, int);	//!add a conference to attend
	void removeConference(string);	//!remove conference attendance 
	
	void addSession(string, int);	//!add a session to attend
	void removeSession(string);	//!remove session attendance
	
	void addSpecialSession(string, int); //!add a special session to attend
	void removeSpecialSession(string);	//!remove special session attendance
	
	void viewItenerary(); //!display itenerary of attended events
	void viewInvoice();	//!display invoice for attendance

private:
	string username;
	string firstName;
	string lastName;

	struct Itenerary
	{
		list<string>myConferences;
		list<string>mySessions;
		list<string>mySpecialSessions;
	};
	
	int invoice;
};