#include "Business.h"



Business::Business()
{
}


Business::~Business()
{
}

int Business::addBusiness(string businessName, string password, string organization, string email)
{
	//check if business exists
	{
		string str = "SELECT Name FROM Business WHERE Name='" + businessName + "'";
		if (Select(str) != "")
            return 1;
	}

	//add business to the DB
	{
        string str = "INSERT INTO Business(Name, Password, Organization, Email)\nVALUES('"+businessName+"', '"+password+"', '"+organization+"', '"+email+"')";
		EditRow(str);
	}
    return 0;
}

void Business::removeBusiness(string businessName)
{
	//check if business exists

	//remove all related conference
	{
		string str = "SELECT BusinessName FROM Business_Conference WHERE BusinessName='" + businessName + "' GROUP BY BusinessName";
		string check = Select(str);
		while (check != "")
		{
			//remove session from Business_Conference
			{
				string str2 = "DELETE FROM Business_Conference WHERE BusinessName='" + businessName + "' AND ConferenceName='" + check + "'";
				EditRow(str2);
			}

			//remove conference from DB
			{
				Conference temp;
				temp.removeConference(check);

				str = "SELECT BusinessName FROM Business_Conference WHERE BusinessName='" + businessName + "' GROUP BY BusinessName";
				check = Select(str);
			}
		}
	}

	//remove business from DB
	{
		string str = "DELETE FROM Business WHERE Name='" + businessName + "'";
		EditRow(str);
	}
}

void Business::addConference(string businessName, string conferenceName, string date)
{
	int check;

	//add entry in Conference Table
	{
		Conference accessor;
		check = accessor.addConference(conferenceName, date);
	}

	//relate Session with Conference
	if (check == 1)
	{
		string str = "INSERT INTO Business_Conference(BusinessName, ConferenceName)\nVALUES('" + businessName + "', '" + conferenceName + "')";
		EditRow(str);
	}
}

void Business::removeConference(string businessName, string conferenceName)
{
	//remove relation between EquipUse and Session
	string str = "DELETE FROM Business_Conference WHERE BusinessName='" + businessName + "' AND ConferenceName='" + conferenceName + "')";
	EditRow(str);

	//remove entry from Session table
	Conference accessor;
	accessor.removeConference(conferenceName);
}

void Business::displayConference(string businessName)
{
	string str = "SELECT ConferenceName FROM Business_Conference WHERE BusinessName='" + businessName + "'";
	string out = Select(str);
	cout << out;
}
