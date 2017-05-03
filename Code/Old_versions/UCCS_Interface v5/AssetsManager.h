#pragma once
#include <string>
#include "Equipment.h"
#include "Room.h"
using namespace std;

class AssetsManager
{
public:
	AssetsManager();
	~AssetsManager();

	void addManager(string, string);		//!creates a new Manager account
	void removeManager(string);				//!removes a manager account

	void addEquipment(string, int);			//!Adds equipment from to the Equipment table
	void removeEquipment(string, string);	//!Removes equipment from to the Equipment table and swaps with another equipment for all sessions that use it

	void addRoom(string, int);				//!Adds room to the room table
	void removeRoom(string);				//!Removes Room from the room table Should not need to be used often

	void displayEquipment();				//!Displays all equipment
	void displayRoom();						//!Displays all rooms
};