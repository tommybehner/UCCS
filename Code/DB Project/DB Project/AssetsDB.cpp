#include "AssetsDB.h"



AssetsDB::AssetsDB()
{
}

AssetsDB::~AssetsDB()
{
}

//books a room for a special session
void AssetsDB::roomUse(string name, string date, string time)
{
	DBConnect();

	//check if room exists
	{
		string str = "SELECT Name FROM Room WHERE Name='" + name + "'";
		string out = Select(str);
		if (out != name)
		{
			cout << "Error, Room DNE\n";
			return;
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
				return;
			}
		}
	}

	//Create the session
	{
		string str = "INSERT INTO RoomUse(Name, Date, Time)\nVALUES('" + name + "', '" + date + "', '" + time +"')";
		EditRow(str);
	}
	DBDisconnect();
}

//remove room from the book
void AssetsDB::roomUseStop(string name, string date, string time)
{
	DBConnect();

	//check if room exists
	{
		string str = "SELECT Name FROM Room WHERE Name='" + name + "'";
		string out = Select(str);
		if (out != name)
		{
			cout << "Error, Room DNE\n";
			DBDisconnect();
			return;
		}
	}

	//check if room is already scheduled
	{
		string str = "SELECT Date FROM RoomUse WHERE Date='" + date + "'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM RoomUse WHERE Time ='" + time + "'";
			string out = Select(str);
			if (out == time)
			{
				string str = "DELETE FROM RoomUse WHERE Name='" + name + "'";
				EditRow(str);
				DBDisconnect();
				return;
			}
		}
	}
	cout << "Error: Room not in use\n";
	DBDisconnect();
}

//Books equipment for a session
void AssetsDB::equipmentUse(string name, string date, string time)
{
	DBConnect();

	//check if equipment exists
	{
		string str = "SELECT Name FROM Equipment WHERE Name='" + name + "'";
		string out = Select(str);
		if (out != name)
		{
			cout << "Error, Equipment DNE\n";
			return;
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
				return;
			}
		}
	}

	//Books the equipment
	{
		string str = "INSERT INTO EquipUse(Name, Date, Time)\nVALUES('" + name + "', '" + date + "', '" + time + "')";
		EditRow(str);
	}
	DBDisconnect();
}

//removes equipment from the book
void AssetsDB::equipmentUseStop(string name, string date, string time)
{
	DBConnect();

	//check if room exists
	{
		string str = "SELECT Name FROM Equipment WHERE Name='" + name + "'";
		string out = Select(str);
		if (out != name)
		{
			cout << "Error, Equipment DNE\n";
			DBDisconnect();
			return;
		}
	}

	//check if room is already scheduled
	{
		string str = "SELECT Date FROM EquipUse WHERE Date='" + date + "'";
		string out = Select(str);
		if (out == date)
		{
			string str = "SELECT Time FROM EquipUse WHERE Time ='" + time + "'";
			string out = Select(str);
			if (out == time)
			{
				string str = "DELETE FROM EquipUse WHERE Name='" + name + "'";
				EditRow(str);
				DBDisconnect();
				return;
			}
		}
	}
	cout << "Error: Equipment not in use\n";
	DBDisconnect();
}
