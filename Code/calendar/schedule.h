#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <QDateTime>
#include <QObject>
#include <QString>
#include <QList>
#include <QObject>

class Schedule : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString conference READ conference WRITE setConferenceName NOTIFY conferenceChanged)
    Q_PROPERTY(QString session READ session WRITE setSessionName NOTIFY sessionChanged)
    Q_PROPERTY(QString room READ room WRITE setRoomName NOTIFY roomChanged)
    Q_PROPERTY(QDateTime startDate READ startDate WRITE setStartDate NOTIFY startDateChanged)
    Q_PROPERTY(QDateTime endDate READ endDate WRITE setEndDate NOTIFY endDateChanged)
public:
    explicit Schedule(QObject *parent = 0);

    QString conference() const;
    void setConferenceName(const QString &conference);

    QString session() const;
    void setSessionName(const QString &session);

    QString room() const;
    void setRoomName(const QString &room);

    QDateTime startDate() const;
    void setStartDate(const QDateTime &startDate);

    QDateTime endDate() const;
    void setEndDate(const QDateTime &endDate);

signals:
    void conferenceChanged(const QString &conference);
    void sessionChanged(const QString &session);
    void roomChanged(const QString &room);
    void startDateChanged(const QDateTime &startDate);
    void endDateChanged(const QDateTime &endDate);

private:
    QString mConference;
    QString mSession;
    QString mRoom;
    QDateTime mStartDate;
    QDateTime mEndDate;
};

#endif
