#include <iostream>
#include <string>
#include "Equipment.h"
#include "Room.h"
#include "AssetsDB.h"
#include "session.h"
#include "Conference.h"
#include "Business.h"
#include "Attendee.h"
using namespace std;

void main() {
	//temp interface for conference class
	/*
	{
		int x;
		do
		{
			cout << "Welcome #business.\n"
				<< "Would you like to:\n"
				<< "1. Create a conference\n"
				<< "2. Remove a conference\n"
				<< "3. Edit a conference"
				<< "4. Display your conferences"
				<< "5. Exit the program\n";
			cin >> x;

			switch (x)
			{
			default:
				break;

			case 1:
			{
				//create the conference
				Conference conf;
				string confName;
				string confDate;
				int check;
				cout << "Please enter a name for your conference and a date (such as 4/20/2017)\n";
				cin >> confName >> confDate;
				conf.addConference(confName, confDate);

				//Create sessions
				Session sess;
				string sessName;
				string sessTime;
				cout << "Please enter the name of the session\n";
				sess.addSession(confName, sessName, confDate, sessTime);

				break;
			}

			case 2:
			{

				break;
			}

			case 3:
			{

				break;
			}

			case 4:
			{

				break;
			}
			}

		} while (x =! 5);
	}
	*/

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

	//temp interface for AttendeeAccount class

	{
		int choice = 0;

		do
		{
			cout << "This is the UCCS Attendee attendance modification page\n"
				<< "Would you like to:\n"
				<< "1. Exit Program\n"
				<< "2. Display all data\n"
				<< "3. Add a Conference to attend\n"
				<< "4. Remove Conference attendance (withdraw)\n"
				<< "5. Add a Session to attend\n"
				<< "6. Remove Session attendance (withdraw)\n"
				<< "7. Add a Special Session to attend\n"
				<< "8. Remove Special Session attendance (withdraw)\n";
			cin >> choice;
			cout << "\n";
			switch (choice)
			{
			case 1:
				break;

			case 2:
			{
			//	Schedule temp;
			//	temp.displayConferences();
				break;
			}
			case 3:
			{
				string name;
				int num;
				cout << "Please enter a conference name\n";  //maybe switch to ID system?
				cin >> name;
				cout << "Please enter the date of the conference\n";
				cin>>num;
				Conference newConf;
				newConf.addConference(name);
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
};