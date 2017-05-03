#include "Conference.h"

Conference::Conference()
{
}


Conference::~Conference()
{
}

int Conference::addConference(string conferenceName, string date)
{
	//check if conference exists
	{
		string str = "SELECT Name FROM Conference WHERE Name='" + conferenceName + "'";
		if (Select(str) != "")
			return 0;
	}

	//add conference to the DB
	{
		string str = "INSERT INTO Conference(Name, Date)\nVALUES('" + conferenceName + "', '" + date + "')";
		EditRow(str);
	}
	return 1;
}

void Conference::removeConference(string conferenceName)
{
	//check if conference exists

	//remove all related sessions
	{
		string str = "SELECT SessionName FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' GROUP BY ConferenceName";
		string check = Select(str);
		while (check != "")
		{
			//remove session from Conference_Session
			{
				string str2 = "DELETE FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' AND SessionName='" + check + "'";
				EditRow(str2);
			}

			//remove session from Session
			{
				Session temp;
				temp.removeSession(check);
				cout << check;

				str = "SELECT SessionName FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' GROUP BY ConferenceName";
				check = Select(str);
			}
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
	//remove relation between Conference and Session
	string str = "DELETE FROM Conference_Session WHERE ConferenceName='" + conferenceName + "' AND SessionName='" + sessionName + "')";
	EditRow(str);

	//remove entry from Session table
	Session accessor;
	accessor.removeSession(sessionName);
}

void Conference::displaySessions(string conferenceName)
{
	string str = "SELECT SessionName FROM Conference_Session WHERE ConferenceName='" + conferenceName + "'";
	string out = Select(str);
	cout << out;
}