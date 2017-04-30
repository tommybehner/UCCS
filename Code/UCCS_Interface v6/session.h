#pragma once
#include <string>
#include "AssetsDB.h"
#include "DBConnector.h"
#include <iostream>

class Session
{
public:
	Session();
	~Session();

	int addSession(string, string, string, string);		//!Add a session to the DB and books the room
	void removeSession(string);								//!Remove a session from the DB and unbooks the room

	void bookEquipment(string, string);		//!Book equipment for the session
	void unbookEquipment(string, string);	//!Unbooks an equipment

	void displayEquipment(string);							//!displays all equipment in the DB related to a specified session
};