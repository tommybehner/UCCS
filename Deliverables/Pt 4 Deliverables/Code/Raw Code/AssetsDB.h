#pragma once
#include <string>
#include "DBConnector.h"
#include <iostream>
using namespace std;

class AssetsDB
{
public:
	AssetsDB();
	~AssetsDB();
	 
	int roomUse(string, string, string);			//!Asigns a room to a time and date
	int roomUseStop(string, string, string);		//!Removes the time and date from a room
	int equipmentUse(string, string, string);		//!Asigns an equipment to a time and date
	int equipmentUseStop(string, string, string);	//!Removes the time and date from an equipment
};