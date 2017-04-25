#include "AttendeeAccount.h"

//Creates an attendee "itenerary" object
//string = desired name of conference/session
//cost =  cost of attendance
AttendeeAccount::AttendeeAccount()
{
	invoice = 0;
}

AttendeeAccount::~AttendeeAccount()
{
}


/*HERE I WANT TO FEED THE CONFERENCE NAME INTO ATTENDEE ITENERARY STRUCT */
void AttendeeAccount::addConference(string temp_confname, int tempcost)
{
	DBConnect();
	string name = temp_confname;
	int cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if conference named exists (every conference name is unique)
	str = "SELECT Name FROM Conference WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM Conference WHERE Name = '" + name + "'";
	}
	else {//If conference not found, report back
		cout << "Conference not found" << endl;
	}
	DBDisconnect();
}


void AttendeeAccount::removeConference(string)
{

}

/*HERE I WANT TO FEED THE SESSION NAME INTO ATTENDEE ITENERARY STRUCT */
void AttendeeAccount::addSession(string temp_sessname, int tempcost)
{
	DBConnect();
	string name = temp_sessname;
	int cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if session named exists (every session name is unique)
	str = "SELECT Name FROM Session WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM Session WHERE Name = '" + name + "'";
	}
	else {//If session not found, report back
		cout << "Session not found" << endl;
	}
	DBDisconnect();
}

void AttendeeAccount::removeSession(string)
{
}

/*HERE I WANT TO FEED THE SPECIAL SESSION NAME INTO ATTENDEE ITENERARY STRUCT */
void AttendeeAccount::addSpecialSession(string temp_specsessname, int tempcost)
{
	DBConnect();
	string name = temp_specsessname;
	int cost = tempcost;
	string strCost = std::to_string(cost);
	string str;

	//checks if special session named exists (every special session name is unique)
	str = "SELECT Name FROM SpecialSession WHERE Name = '" + name + "'";
	if (name == Select(str))
	{
		str = "SELECT cost FROM SpecialSession WHERE Name = '" + name + "'";
	}
	else {//If special session not found, report back
		cout << "Special Session not found" << endl;
	}
	DBDisconnect();
}

void AttendeeAccount::removeSpecialSession(string)
{
}

/*display struct list members*/
void AttendeeAccount::viewItenerary()
{

}

void AttendeeAccount::viewInvoice()
{
	//for now, just display total.  implement itemized list in the future.
	cout << "Total cost of attendance of UCCS events: $" << invoice << endl;
}
