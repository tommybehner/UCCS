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
	 
	void roomUse(string, string, string);
	void roomUseStop(string, string, string);
	void equipmentUse(string, string, string);
	void equipmentUseStop(string, string, string);
};