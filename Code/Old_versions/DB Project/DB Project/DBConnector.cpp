#include <iostream>
#include <string>
#include "DBConnector.h"
#include "sqlite3.h"
#define DB "SQLDB.db"
sqlite3 *dbfile;
bool isOpen = false;

//This function connects to the database
void DBConnect()
{
	if (sqlite3_open(DB, &dbfile) == SQLITE_OK)
	{
		isOpen = true;
		return;
	}
	std::cout << "Could not connect to DB";
	exit(1);
}

// This function disconects the database
void DBDisconnect()
{
	sqlite3_close(dbfile);
	return;
}

//This function inserts/removes a row from the database
//It requires proper sql query to function
void EditRow(std::string string)
{
	int result;
	char *str = &string[0];
	char *query = str;
	sqlite3_stmt *statement;

	if (sqlite3_prepare(dbfile, query, -1, &statement, 0) == SQLITE_OK)
	{
		int res = sqlite3_step(statement);
		result = res;
		sqlite3_finalize(statement);
	}
}

//! This function fetches data from the DB
//! Requires a proper query
std::string Select(std::string string)
{
	DBConnect();
	char *str = &string[0];
	char *query = str;
	sqlite3_stmt *statement;
	std::string output = "";

	if (sqlite3_prepare(dbfile, query, -1, &statement, 0) == SQLITE_OK)
	{
		int ctotal = sqlite3_column_count(statement);
		int res = 0;

		while (1)
		{
			res = sqlite3_step(statement);

			if (res == SQLITE_ROW)
			{
				if (output != "")
					output += "\n";

				for (int i = 0; i < ctotal; i++)
				{
					if (i > 0)
						output += " ";

					std::string s = (char*)sqlite3_column_text(statement, i);
					// print or format the output as you want
					output += s;
				}
			}
			if (res == SQLITE_DONE || res == SQLITE_ERROR)
			{
				//Without this function, the program crashes if select returns nothing
				if (ctotal > 1)
					output += "\n";
				return output;
			}
		}
	}
}
