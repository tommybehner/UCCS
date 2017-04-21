#include <string>
#include "Room.h"
#include "Equipment.h"
#pragma once


class AssetsDB
{
public:
	AssetsDB(string, int, int);
	~AssetsDB();

	void removeScheduleRoom();
	void removeScheduleEquipment();

private:
	string name;
	int date;
	int time;
};