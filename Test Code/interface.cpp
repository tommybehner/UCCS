// File interface.cpp
// Thomas Behner
// Group 2

// This is a test for the INTERFACE class
//
// What this still needs:
// -Account types
// -Special access to special sessions
// -The ability to correct mistyped passwords
// -Security?  (This is for looks/demo purposes, so not sure if necessary)

#include <fstream>
#include <string>
#include <iostream>
#include <conio.h>  // For getch(), passwords 'n' such
using namespace std;

const int SIZE = 100;	// More than required is okay, less is BAD!
string Usernames[SIZE]; // From the database
string Password[SIZE];	// From the database

// This function can add users to the database
// It is currently unused in this test, but works
/*
void register_new_user()
{
	string name;
	string password;
	ofstream fout("database.txt");
	cout << "Select a username:" << endl;
	cin >> name;
	cout << "Select a password: " << endl;
	cin >> password;
	fout << name << " " << password << endl;
}
*/

int GetNameIndex(string query, int size)
{
	for (int i = 0; i<size; i++) // We don't want to read garbage, so we limit our loop to the database size.
	{
		if (query == Usernames[i]) 
			return i; // Return the index
	}
	return -1; // Error code
}

bool PasswordMatches(int index, string passwd)
{
	return (passwd == Password[index]);
}


int main()
{
	//Read the database;
	ifstream fin("database.txt");
	int i = 0;

	while (!fin.eof())
	{
		fin >> Usernames[i] >> Password[i];
		i++; //This represents the number of lines we could extract from the database
	}

	// Now the rest of the program
	string usrname, passwd;
	cout << "Username:";
	cin >> usrname;

	int index = GetNameIndex(usrname, i); // Note that I now send the database size to this function.

	cout << "Password:";
	char ch;
	ch = _getch();
					 // Character 13 is enter 
					 //(8 is backspace, need to tool around to implement this.  
	while (ch != 13) //As is, you cannot correct mistyped passwords!)
	{
		passwd.push_back(ch);
		cout << '*';	// Only shows asterisks.  Note that this is only for show.  NOT SECURE!!!
		ch = _getch();
	}
	cout << endl;

	if (!PasswordMatches(index, passwd))
	{
		cout << "Access denied"<<endl;
		return 0;
	}
	else
		cout << "Welcome to the UCCS" << endl;

	return 0;
}