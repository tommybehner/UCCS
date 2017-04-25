#include "AccountsDB.h"

AccountsDB::AccountsDB()
{
}

AccountsDB::~AccountsDB()
{
}

int AccountsDB::nameUse(string username, string password)
{
	DBConnect();

	//check if username exists
	{
		string str = "SELECT Name FROM NameUse WHERE username='" + username + "'";
		string out = Select(str);
		if (out == username)
		{
			cout << "Error, username already exists\n";
			return 0;
		}
	}
	
	//Create the username
	{
		string str = "INSERT INTO NameUse(username, password)\nVALUES('" + username + "', '" + password + "')";
		EditRow(str);
	}
	DBDisconnect();
	return 1;
}

void AccountsDB::loginAttendee(string, string)
{
	string name;
	string password;

	cout << "Enter your UCCS account username:" << endl;
	cin >> name;
	cout << "Enter the password for your UCCS account: " << endl;
	cin >> password;
}

void AccountsDB::loginBusiness(string, string)
{

	string name;
	string password;

	cout << "Enter your UCCS account username:" << endl;
	cin >> name;
	cout << "Enter the password for your UCCS account: " << endl;
	cin >> password;

}

void AccountsDB::registerNewAttendeeAccount()
{
	string name;
	string password;
	//ofstream fout("database.txt");
	cout << "Select a username:" << endl;
	cin >> name;
	cout << "Select a password: " << endl;
	cin >> password;
	//fout << name << " " << password << endl;
}

void AccountsDB::registerNewBusinessAccount()
{
	string name;
	string password;
	//ofstream fout("database.txt");
	cout << "Select a username:" << endl;
	cin >> name;
	cout << "Select a password: " << endl;
	cin >> password;
	//fout << name << " " << password << endl;
}

void AccountsDB::deleteAccount(string, string)
{
}

