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

	void addManager(string, string);
	void removeManager(string);

	void addEquipment(string, int);
	void removeEquipment(string, string);

	void addRoom(string, int);
	void removeRoom(string, string);

	void displayEquipment();
	void displayRoom();
};

