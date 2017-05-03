/*A few free functions that deal with our sql database*/

#pragma once
#ifndef DBConnector
#define DBConnector
void DBConnect();					//! This function connects to the database
void DBDisconnect();				//! This function disconects the database
void EditRow(std::string);			//! This function inserts/removes/updates a row from the database
std::string Select(std::string);	//! This function fetches data from the DB
#endif