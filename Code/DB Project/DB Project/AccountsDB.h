#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using std::string;
using namespace std;

class AccountsDB
{
public:
	AccountsDB();
	~AccountsDB();

	int nameUse(string, string);
	void loginAttendee(string, string);	//!log into UCCS with attendee username and password
	void loginBusiness(string, string);	//!log into UCCS with business username and password
	
	void registerNewAttendeeAccount();	//!add a new attendee account to the DB
	void registerNewBusinessAccount();	//!add a new business account to the DB
	
	void deleteAccount(string, string);	//!delete user account from DB, requires password




	
};