#include "Conference.h"

Conference::Conference()
{
}


Conference::~Conference()
{
}

void Conference::addConference(string conferenceName, string date)
{
	//check if conference exists
	{
		string str = "SELECT Name FROM Conference WHERE Name='" + conferenceName + "'";
		if (Select(str) != "")
			return;
	}

	//add conference to the DB
	{
		string str = "INSERT INTO Conference(Name, Date)\nVALUES('" + conferenceName + "', '" + date + "')";
		EditRow(str);
	}

	//relate conference to business
}

void Conference::removeConference(string conferenceName)
{
	//remove all related sessions
	{
		string str = "SELECT SessionName FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' GROUP BY ConferenceName";
		string check = Select(str);
		while (check != "")
		{
			//remove session from DB
			Session temp;
			temp.removeSession(check);

			str = "SELECT SessionName FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' GROUP BY ConferenceName";
			check = Select(str);
		}
	}

	//remove conference from DB
	{
		string str = "DELETE FROM Conference WHERE Name='" + conferenceName + "'";
		EditRow(str);
	}
}

void Conference::addSession(string conferenceName, string sessionName, string roomName, string time)
{
	string date;
	int check;
	//determin, date
	{
		string str = "SELECT Date FROM Conference WHERE Name='" + conferenceName + "'";
		date = Select(str);
	}

	//add entry in Session Table
	{
		Session accessor;
		check = accessor.addSession(sessionName, roomName, date, time);
	}

	//relate Session with Conference
	if (check == 1)
	{
		string str = "INSERT INTO Conference_Session(ConferenceName, SessionName)\nVALUES('" + conferenceName + "', '" + sessionName + "')";
		EditRow(str);
	}
}

void Conference::removeSession(string conferenceName, string sessionName)
{
	//remove relation between EquipUse and Session
	string str = "DELETE FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' AND SessionName='" + sessionName + "')";
	EditRow(str);

	//remove entry from Session table
	Session accessor;
	accessor.removeSession(sessionName);
}