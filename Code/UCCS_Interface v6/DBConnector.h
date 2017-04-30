#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H
#include <qtsql>
#include <QDebug>
#include <QFileInfo>
#include <string>
#include <iostream>

using namespace std;

int DBConnect();
void DBDisconnect();

string Select(string);
QSqlQuery QSelect(string);
void EditRow(string);


#endif // DBCONNECTOR_H
