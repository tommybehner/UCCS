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

	//remove relation from conference and business

	//remove conference from DB
	{
		string str = "DELETE FROM Conference WHERE Name='" + conferenceName + "'";
		EditRow(str);
	}
}