#include "schedule.h"

Schedule::Schedule(QObject *parent) :
    QObject(parent)
{
}

QString Schedule::conference() const
{
    return mConference;
}

QString Schedule::session() const
{
    return mSession;
}

QString Schedule::room() const
{
    return mRoom;
}

void Schedule::setConferenceName(const QString &conference)
{
    if (conference != mConference)
    {
        mConference = conference;
        emit conferenceChanged(mConference);
    }
}

void Schedule::setSessionName(const QString &session)
{
    if (session != mSession)
    {
        mSession = session;
        emit sessionChanged(mSession);
    }
}

void Schedule::setRoomName(const QString &room)
{
    if (room != mRoom)
    {
        mRoom = room;
        emit roomChanged(mRoom);
    }
}
QDateTime Schedule::startDate() const
{
    return mStartDate;
}

void Schedule::setStartDate(const QDateTime &startDate)
{
    if (startDate != mStartDate)
    {
        mStartDate = startDate;
        emit startDateChanged(mStartDate);
    }
}

QDateTime Schedule::endDate() const
{
    return mEndDate;
}

void Schedule::setEndDate(const QDateTime &endDate)
{
    if (endDate != mEndDate)
    {
        mEndDate = endDate;
        emit endDateChanged(mEndDate);
    }
}
