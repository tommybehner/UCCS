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
	 
	int roomUse(string, string, string);
	int roomUseStop(string, string, string);
	int equipmentUse(string, string, string);
	int equipmentUseStop(string, string, string);
};