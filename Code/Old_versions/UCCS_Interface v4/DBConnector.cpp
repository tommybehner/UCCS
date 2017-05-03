#include "DBConnector.h"

int DBConnect()
{
    QSqlDatabase DB=QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName("C:/Users/Jacob Forte/Desktop/Local/SQLDB.db");
    DB.open();

    if (DB.isOpen() == true)
    {
        qDebug()<<("Connection to the UCCS database: SUCCESS");
        return 1;
    }
    qDebug()<<("Connection to the UCCS database: FAILED");
    return 0;
}

void DBDisconnect()
{

}

string Select(string str)
{
    //open DB
    if(DBConnect()== 0)
    {
        qDebug()<<"Failed to open the database";
        return "";
    }

    //convert string to QString
    QString Qstr = QString::fromStdString(str);

    //prepare query
    QSqlQuery query;
    query.prepare(Qstr);  //!prepare username and password database query

    //execute query
    query.exec();

    //create string and Qstring for output
    QString Qoutput = "lol";
    string output = "";

    //create output string
    while (query.next()) {
        Qoutput = query.value(0).toString();
        output = output + Qoutput.toLocal8Bit().constData();
    }

    DBDisconnect();
    return output;
}

//not tested
QSqlQuery QSelect(string str)
{
    //open DB
    if(DBConnect() == 0)
    {
        qDebug()<<"Failed to open the database";
    }

    //convert string to QString
    QString Qstr = QString::fromStdString(str);

    //prepare query
    QSqlQuery query;
    query.prepare(Qstr);

    //execute query
    query.exec();

    //does nothing else with the query. passes QSqlQuery for advanced formating
    return query;
}

void EditRow(string str)
{
    //open DB
    QSqlDatabase DB;
    if(!DB.isOpen())
    {
        qDebug()<<"Failed to open the database";
    }

    //convert string to QString
    QString Qstr = QString::fromStdString(str);

    //execute the query
    QSqlQuery query;
    query.prepare(Qstr);
    query.exec();

    DBDisconnect();
}
