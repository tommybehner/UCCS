#include "AssetsManager.h"



AssetsManager::AssetsManager()
{
}


AssetsManager::~AssetsManager()
{
}

void AssetsManager::addManager(string userName, string password)
{
	//check if account exists

	//add manager to AssetsManager table
	string str = "INSERT INTO AssetsManager(Name, Password)\nVALUES('" + userName + "', '" + password + "')";
	EditRow(str);
}

void AssetsManager::removeManager(string userName)
{
	//check if account exists

	//remove manager from AssetsManager table
	string str = "DELETE FROM AssetsManager WHERE Name='" + userName + "'";
	EditRow(str);
}

void AssetsManager::addEquipment(string equipName, int cost)
{
	//check if equipment exists
	{
		string str = "SELECT FROM Equipment WHERE Name = '" + equipName + "'";
		if (Select(str) == equipName)
		{
			cout << "Equipment already exists\n";
			return;
		}
	}

	//add equipment
	Equipment newEquip;
	newEquip.addEquipment(equipName, cost);
}

void AssetsManager::removeEquipment(string oldEquip, string replacementEquip)
{
	//check if replcement equipment exists
	{
		string str = "SELECT FROM Equipment WHERE Name = '" + replacementEquip + "'";
		if (Select(str) != replacementEquip)
		{
			cout << "Replacement equipment DNE\n";
			return;
		}
	}

	//check if replacement equipment is used
	{
		string str = "SELECT EquipName FROM Session_Eqipment WHERE EquipName='" + replacementEquip + "'";
		if (Select(str) != "")
		{
			cout << "Replacement Equipment already in use\nPlease use unused equipment";
			return;
		}
	}

	//replace equipment from session_equipuse
	{
		string str = "UPDATE Session_Equipment\nSET EquipName = '" + replacementEquip + "'\nWHERE EquipName='" + oldEquip + "'";
		EditRow(str);
		//check if succesful
	}

	//replace equipment from EquipUse table
	{
		string str = "UPDATE EquipUse\nSET EquipName = '" + oldEquip + "'\nWHERE EquipName='" + replacementEquip + "'";
		EditRow(str);
		//check if successful
	}

	//remove Equipment from the Equipment table
	{
		string str = "DELETE FROM Equipment WHERE Name='"+oldEquip+"'";
		EditRow(str);
	}
}

void AssetsManager::addRoom(string roomName, int cost)
{
	//check if room exists
	{
		string str = "SELECT FROM Room WHERE Name = '" + roomName + "'";
		if (Select(str) == roomName)
		{
			cout << "Room already exists\n";
			return;
		}
	}

	//add room to Room table
	Room newRoom;
	newRoom.addRoom(roomName, cost);
}

void AssetsManager::removeRoom(string roomName)
{
	//Check if room exists
	{
		string str = "SELECT FROM Room WHERE Name='"+roomName+"'";
		if (Select(str) != roomName)
		{
			cout << "Room DNE";
			return;
		}
	}

	//Check if room is used
	{
		string str = "SELECT Name FROM RoomUse WHERE NAME='" + roomName + "'";
		if (Select(str) != "")
		{
			cout << "Room is in use";
			return;
		}
	}

	//remove room from DB
	{
		string str = "DELETE FROM Room WHERE Name='" + roomName + "'";
		EditRow(str);
	}
}

void AssetsManager::displayEquipment()
{
	Equipment temp;
	temp.displayEquipment();
}

void AssetsManager::displayRoom()
{
	Room temp;
	temp.displayRoom();
}
