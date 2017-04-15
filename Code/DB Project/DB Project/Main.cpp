#include <iostream>
#include <string>
#include "Equipment.h"
#include "DBConnector.h"
using namespace std;

void main() {
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
			string str;
			str = "SELECT * FROM Equipment";
			std::cout << Select(str) << "\n";
			break;
		}
		case 3:
		{
			string name;
			int num;
			cout << "Please enter a name and number\n";
			cin >> name >> num;
			Equipment newEquip(name, num);
			cout << "\n";
			break;
		}
		case 4:
		{
			string name;
			cout << "Insert the name of the equipment you would like to remove.\n";
			cin >> name;
			cout << "\n";
			Equipment temp(name, 0);
			temp.removeEqipment(name);
			break;
		}
		}
	} while (choice != 1);
};