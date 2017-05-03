#include "DBConnector.h"

int DBConnect()
{
    QSqlDatabase DB=QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName("C:/Users/Jacob Forte/Desktop/Local Projects/ConsoleApplication1/ConsoleApplication1/SQLDB.db");

    if (DB.open() == 1)
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
    if(DBConnect() == 0)
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
QSqlQuery QSelect(QString Qstr)
{
    //open DB
    if(DBConnect() == 0)
    {
        qDebug()<<"Failed to open the database";
        //return;
    }

    QSqlQuery query;
    query.prepare(Qstr);  //!prepare username and password database query

    DBDisconnect();
    return query;
}

void EditRow(string str)
{
    //open DB
    if(DBConnect() == 0)
    {
        qDebug()<<"Failed to open the database";
        return;
    }



    DBDisconnect();
}
