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

//not used
void Business::editConference(string businessName, string conferenceName, string date)
{
    //update sessions
    QSqlQuery Qoutput = QSelect("SELECT SessionName FROM Conference_Session WHERE ConferenceName = '"+conferenceName+"'");

    while (Qoutput.next())
    {
        QString QsessionName;
        QsessionName = Qoutput.value(0).toString();
        string sessionName = QsessionName.toLocal8Bit().constData();

        QSqlQuery Qoutput2 = QSelect("SELECT Room, Time FROM Session WHERE Name='"+sessionName+"'");

        while(Qoutput2.next())
        {
            QString Qroom;
            Qroom = Qoutput.value(0).toString();

            Qoutput2.next();
            QString Qtime;
            Qtime = Qoutput.value(0).toString();

            string room = Qroom.toLocal8Bit().constData();
            string time = Qtime.toLocal8Bit().constData();

            Conference temp;
            temp.editSession(conferenceName, sessionName, room, date, time);
        }
    }
    //update Conference
    string str = "UPDATE Conference SET Name='"+conferenceName+"', Date='"+date+"' WHERE ";
    EditRow(str);

    //update Business_Conference
    str = "UPDATE Business_Conference SET BusinessName = '"+businessName+"', ConferenceName = '"+conferenceName+"' WHERE BusinessName='"+businessName+"'";
    EditRow(str);
}

void Business::displayConference(string businessName)
{
	string str = "SELECT ConferenceName FROM Business_Conference WHERE BusinessName='" + businessName + "'";
	string out = Select(str);
	cout << out;
}
