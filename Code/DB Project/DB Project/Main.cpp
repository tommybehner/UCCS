#include <iostream>
#include <string>
#include "Equipment.h"
#include "Room.h"
#include "AssetsDB.h"
//#include "DBConnector.h"
using namespace std;

void main() {
	AssetsDB temp;
	temp.roomUseStop("Jefferson", "4/20/2017", "3");


	//temp interface for room class
	/*
	{
		int choice = 0;

		do
		{
			cout << "This is the room database.\n"
				<< "Would you like to:\n"
				<< "1. Exit Program\n"
				<< "2. Display all data\n"
				<< "3. Add Room to the DB\n"
				<< "4. Remove Room from the DB\n";
			cin >> choice;
			cout << "\n";
			switch (choice)
			{
			case 1:
				break;

			case 2:
			{
				Room temp;
				temp.displayRoom();
				break;
			}
			case 3:
			{
				string name;
				int num;
				cout << "Please enter a name and cost\n";
				cin >> name >> num;
				Room newRoom;
				newRoom.addRoom(name, num);
				cout << "\n";
				break;
			}
			case 4:
			{
				string name;
				cout << "Insert the name of the room you would like to remove.\n";
				cin >> name;
				cout << "\n";
				Room temp;
				temp.removeRoom(name);
				break;
			}
			}
		} while (choice != 1);
	}
	*/
	//the following is a temp interface for the equipment class
	/*
	{
		int choice = 0;

		do
		{
			cout << "This is the equipment database.\n"
				<< "Would you like to:\n"
				<< "1. Exit Program\n"
				<< "2. Display all data\n"
				<< "3. Add Equipment to the DB\n"
				<< "4. Remove Equipment from the DB\n";
			cin >> choice;
			cout << "\n";
			switch (choice)
			{
			case 1:
				break;

			case 2:
			{
				Equipment temp;
				temp.displayEquipment();
				break;
			}
			case 3:
			{
				string name;
				int num;
				cout << "Please enter a name and number\n";
				cin >> name >> num;
				Equipment newEquip;
				newEquip.addEquipment(name, num);
				cout << "\n";
				break;
			}
			case 4:
			{
				string name;
				cout << "Insert the name of the equipment you would like to remove.\n";
				cin >> name;
				cout << "\n";
				Equipment temp;
				temp.removeEquipment(name);
				break;
			}
			}
		} while (choice != 1);
	}
	*/
};