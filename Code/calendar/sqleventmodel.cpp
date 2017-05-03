#include "sqleventmodel.h"

#include <QDebug>
#include <QFileInfo>
#include <QSqlError>
#include <QSqlQuery>

SqlEventModel::SqlEventModel()
{
    createConnection();
}

QList<QObject*> SqlEventModel::eventsForDate(const QDate &date)
{
    const QString queryStr = QString::fromLatin1("SELECT * FROM Calendar WHERE '%1' >= startDate AND '%1' <= endDate").arg(date.toString("yyyy-MM-dd"));
    QSqlQuery query(queryStr);
    if (!query.exec())
        qFatal("Query failed");

    QList<QObject*> events;
    while (query.next())
    {
        Schedule *schedule = new Schedule(this);
        schedule->setConferenceName(query.value("conference").toString());
        schedule->setSessionName(query.value("session").toString());
        schedule->setRoomName(query.value("room").toString());

        QDateTime startDate;
        startDate.setDate(query.value("startDate").toDate());
        startDate.setTime(QTime(0, 0).addSecs(query.value("startTime").toInt()));
        schedule->setStartDate(startDate);

        QDateTime endDate;
        endDate.setDate(query.value("endDate").toDate());
        endDate.setTime(QTime(0, 0).addSecs(query.value("endTime").toInt()));
        schedule->setEndDate(endDate);

        events.append(schedule);
    }

    return events;
}

/*
    Defines a helper function to open a connection to an
    in-memory SQLITE database and to create a test table.
*/
void SqlEventModel::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(":memory:");
    if (!db.open())
    {
        qFatal("Cannot open database");
        return;
    }

    QSqlQuery query;
    // We store the time as seconds because it's easier to query.
    query.exec("create table Calendar (conference TEXT, session TEXT, room TEXT, startDate DATE, startTime INT, endDate DATE, endTime INT)");
    query.exec("insert into Calendar values('Johnny Rando''s Conf', 'Session A', 'Lincoln Room', '2017-05-01', 36000, '2017-05-01', 39600)");
    query.exec("insert into Calendar values('My Super Sweet Conference', 'Session B', 'Washington Room', '2017-05-01', 57600, '2017-05-01', 61200)");
    query.exec("insert into Calendar values('UCCS Introduction Conference', 'Session C', 'Roosevelt Room', '2017-05-15', 57600, '2017-05-15', 63000)");
    query.exec("insert into Calendar values('CompuCon 2017','Meet and Greet','Main Hall', '2017-05-24', 32400, '2017-05-24', 57600)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Session A', 'Lincoln Room', '2017-05-24', 36000, '2017-05-24', 39600)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Session B', 'Roosevelt Room', '2017-05-24', 36000, '2017-05-24', 39600)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Session C', 'Washington Room', '2017-05-24', 43200, '2017-05-24', 50600)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Session D', 'Lincoln Room', '2017-05-24', 43200, '2017-05-24', 49000)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Session E', 'Washington Room', '2017-05-25', 36000, '2017-05-25', 39600)");
    query.exec("insert into Calendar values('CompuCon 2017', 'Special Session','Roosevelt Room', '2017-05-25', 43200, '2017-05-25', 61200)");

    return;
}
