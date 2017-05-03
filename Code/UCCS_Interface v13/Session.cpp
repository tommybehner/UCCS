#include "session.h"

Session::Session()
{
}

Session::~Session()
{
}

int Session::addSession(string sessionName, string roomName, string date, string time)
{
	//book the room and check if room is available
	{
		int check;
		AssetsDB accessor;
		check = accessor.roomUse(roomName, date, time);
		if (check == 0)	//if roomUse returns 0
        {
			return 0;
        }
	}
	
	//Add session to the DB
	{
		string str = "INSERT INTO Session(Name, Room, Date, Time)\nVALUES('" + sessionName + "', '" + roomName + "', '" + date + "', '" + time + "')";
		EditRow(str);
	}
	return 1;
}

void Session::removeSession(string sessionName)
{
	string roomName;
	string date;
	string time;
	//determin roomName, date and time
	{
		string str = "SELECT Room FROM Session WHERE Name='" + sessionName + "'";
		roomName = Select(str);
		str = "SELECT Date FROM Session WHERE Name='" + sessionName + "'";
		date = Select(str);
		str = "SELECT Time FROM Session WHERE Name='" + sessionName + "'";
		time = Select(str);
		
	}

	//unbook the room and check if session actuly exists
	{
		//remove room from roomUse
		int check;
		AssetsDB accessor;
		check = accessor.roomUseStop(roomName, date, time);
		if (check == 0)
        {
            return;
        }
	}

	//remove Equipment from the session
	{
		string str = "SELECT EquipName FROM Session_EquipUse WHERE SessionName='" + sessionName + "' GROUP BY SessionName";
		string check = Select(str);
		while (check != "") 
		{
			str = "DELETE FROM Session_EquipUse WHERE SessionName='"+sessionName+"' AND EquipName='"+check+"'";
			EditRow(str);

			AssetsDB equip;
			equip.equipmentUseStop(check, date, time);

			str = "SELECT EquipName FROM Session_EquipUse WHERE SessionName='" + sessionName + "' GROUP BY SessionName";
			check = Select(str);
		}
	}

	//remove session from the DB
	{
		string str = "DELETE FROM Session WHERE Name='" + sessionName + "'";
		EditRow(str);
	}
}

//books an equipment
void Session::bookEquipment(string sessionName, string equipment)
{
	string date;
	string time;
	//determin, date and time
	{
		string str = "SELECT Date FROM Session WHERE Name='" + sessionName + "'";
		date = Select(str);
		str = "SELECT Time FROM Session WHERE Name='" + sessionName + "'";
		time = Select(str);
	}

	//add entry in EquipUse Table
	AssetsDB accessor;
	int check;
	check = accessor.equipmentUse(equipment, date, time);

	//relate EquipUse with session
	if (check == 1)
    {
		string str = "INSERT INTO Session_EquipUse(SessionName, EquipName)\nVALUES('"+sessionName+"', '"+equipment+"')";
		EditRow(str);
	}
}

//unbooks an equipment
void Session::unbookEquipment(string sessionName, string equipment)
{
	string date;
	string time;
	//determin, date and time
	{
		string str = "SELECT Date FROM Session WHERE Name='" + sessionName + "'";
		date = Select(str);
		str = "SELECT Time FROM Session WHERE Name='" + sessionName + "'";
		time = Select(str);
	}

	//remove entry from equipUse table
	AssetsDB accessor;
	accessor.equipmentUseStop(equipment, date, time);

	//remove relation between EquipUse and Session
    string str = "DELETE FROM Session_EquipUse WHERE SessionName='" + sessionName + "' AND EquipName='" + equipment + "'";
	EditRow(str);
    qDebug()<<(QString::fromStdString(str));
}

//not used
void Session::editEquipment(string sessionName, string equipmentName, string date, string time, string cost)
{
    //update Equipment
    string str = "UPDATE Equipment SET Name = '"+equipmentName+"', Cost = '"+cost+"'";
    EditRow(str);

    //update EquipUse
    str = "UPDATE EquipUse SET Name='"+equipmentName+"', Date='"+date+"'";
    EditRow(str);

    //update Session_EquipUse
}

//displays all equipment related to the session
void Session::displayEquipment(string sessionName)
{
	string str = "SELECT EquipName FROM Session_EquipUse WHERE SessionName='" + sessionName + "'";
	string out = Select(str);
	cout << out;
}
