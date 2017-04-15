#pragma once
#include <string>
using namespace std;

class Room
{
public:
	Room();
	~Room();

	void editCost();

	int getID();
	int getname();
	int getCost();

private:
	int ID;
	int name;
	int cost;
};

