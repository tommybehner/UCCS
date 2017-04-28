#include "AssetsDB.h"


AssetsDB::AssetsDB()
{
}

AssetsDB::~AssetsDB()
{
}

//books a room for a special session
int AssetsDB::roomUse(string roomName, string date, string time)
{
	DBConnect();

	//check if room exists
	{
		string str = "SELECT Name FROM Room WHERE Name='" + roomName + "'";
		string out = Select(str);
		if (out != roomName)
		{
			cout << "Error, Room DNE\n";
			return 0;
		}
	}

	//check if room is already scheduled
	{
		string str = "SELECT Date FROM RoomUse WHERE Date='"+date+"'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM RoomUse WHERE Time ='"+time+"'";
			string out = Select(str);
			if (out == time)
			{
				cout << "Error, Room already in use\n";
				return 0;
			}
		}
	}

	//Create the session
	{
		string str = "INSERT INTO RoomUse(Name, Date, Time)\nVALUES('" + roomName + "', '" + date + "', '" + time +"')";
		EditRow(str);
	}
	DBDisconnect();
	return 1;
}

//remove room from the book
int AssetsDB::roomUseStop(string roomName, string date, string time)
{
	DBConnect();

	//check if room exists
	{
		string str = "SELECT Name FROM Room WHERE Name='" + roomName + "'";
		string out = Select(str);
		if (out != roomName)
		{
			cout << "Error, Room DNE\n";
			DBDisconnect();
			return 0;
		}
	}

	//check if room is already scheduled
	{
		string str = "SELECT Date FROM RoomUse WHERE Date='" + date + "'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM RoomUse WHERE Date='"+date+"' AND Time ='" + time + "'";
			string out = Select(str);
			if (out == time)
			{
				string str = "DELETE FROM RoomUse WHERE Name='"+roomName+"' AND Date='"+date+"' AND Time='"+time+"'";
				EditRow(str);
				DBDisconnect();
				return 1;
			}
		}
	}
	cout << "Error: Room not in use\n";
	DBDisconnect();
	return 0;
}

//Books equipment for a session
int AssetsDB::equipmentUse(string equipName, string date, string time)
{
	DBConnect();

	//check if equipment exists
	{
		string str = "SELECT Name FROM Equipment WHERE Name='" + equipName + "'";
		string out = Select(str);
		if (out != equipName)
		{
			cout << "Error, Equipment DNE\n";
			return 0;
		}
	}

	//check if equipment is already booked
	{
		string str = "SELECT Date FROM EquipUse WHERE Date='" + date + "'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM EquipUse WHERE Time ='" + time + "'";
			string out = Select(str);
			if (out == time)
			{
				cout << "Error, Equipment already in use\n";
				return 0;
			}
		}
	}

	//Books the equipment
	{
		string str = "INSERT INTO EquipUse(Name, Date, Time)\nVALUES('" + equipName + "', '" + date + "', '" + time + "')";
		EditRow(str);
	}
	DBDisconnect();
	return 1;
}

//removes equipment from the book
int AssetsDB::equipmentUseStop(string equipName, string date, string time)
{
	DBConnect();

	//check if Equipment exists
	{
		string str = "SELECT Name FROM Equipment WHERE Name='" + equipName + "'";
		string out = Select(str);
		if (out != equipName)
		{
			cout << "Error, Equipment DNE\n";
			DBDisconnect();
			return 0;
		}
	}

	//check if Equipment is already scheduled
	{
		string str = "SELECT Date FROM EquipUse WHERE Date='" + date + "'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM EquipUse WHERE Time ='" + time + "'";
			string out = Select(str);
			if (out == time)
			{
				string str = "DELETE FROM EquipUse WHERE Name='" + equipName + "'";
				EditRow(str);
				DBDisconnect();
				return 1;
			}
		}
	}
	cout << "Error: Equipment not in use\n";
	DBDisconnect();
	return 0;
}