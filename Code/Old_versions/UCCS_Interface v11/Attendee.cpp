#include "Attendee.h"



Attendee::Attendee()
{
}


Attendee::~Attendee()
{
}

int Attendee::addAttendee(string attendeeName, string password, string first, string last, string email)
{
	//check if Attendee exists
	{
		string str = "SELECT Name FROM Attendee WHERE Name='" + attendeeName + "'";
		if (Select(str) != "")
            return 1;
	}

	//add Attendee to the DB
	{
        string str = "INSERT INTO Attendee(Name, Password, First, Last, Email)\nVALUES('"+attendeeName+"', '"+password+"', '"+first+"', '"+last+"', '"+email+"')";
		EditRow(str);
        return 0;
	}
}

void Attendee::removeAttendee(string attendeeName)
{
	//check if attendee exists

	//remove all related Conferences
	{
		string str = "SELECT AttendeeName FROM Attendee_Conference WHERE AttendeeName='" + attendeeName + "' GROUP BY AttendeeName";
		string check = Select(str);
		while (check != "")
		{
			//remove conference from Attendee_Conference
			string str2 = "DELETE FROM Attendee_Conference WHERE AttendeeName='" + attendeeName + "' AND ConferenceName='" + check + "'";
			EditRow(str2);
		}
	}

	//remove Attendee from DB
	{
		string str = "DELETE FROM Attendee WHERE Name='" + attendeeName + "'";
		EditRow(str);
	}
}

void Attendee::registerConference(string attendeeName, string conferenceName)
{
	//relate Attendee with Conference
	string str = "INSERT INTO Attendee_Conference(AttendeeName, ConferenceName)\nVALUES('" + attendeeName + "', '" + conferenceName + "')";
	EditRow(str);
}

void Attendee::unregisterConference(string attendeeName, string conferenceName)
{
	//remove relation between Attendee and Conference
	string str = "DELETE FROM Attendee_Conference WHERE AttendeeName='" + attendeeName + "' AND ConferenceName='" + conferenceName + "')";
	EditRow(str);
}

void Attendee::displayRegistrations(string attendeeName)
{
	string str = "SELECT ConferenceName FROM Attendee_Conference WHERE AttendeeName='" + attendeeName + "'";
	string out = Select(str);
	cout << out;
}
