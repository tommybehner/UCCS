#ifndef LOGIN_H
#define LOGIN_H

#include <QPixmap>
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "createattendee.h"
#include "createbusiness.h"
#include "attendeemenu.h"
#include "businessmenu.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
public:
    QSqlDatabase uccs_db;

    void connectionClose()
    {
        uccs_db.close();
        uccs_db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connectionOpen()
    {
        uccs_db=QSqlDatabase::addDatabase("QSQLITE");
        uccs_db.setDatabaseName("C:/Users/Tommy B/Desktop/Qt_projects/UCCS_Interface2/SQLDB.db");

        if(!uccs_db.open())
        {
           qDebug()<<("Connection to the UCCS database: FAILED");
           return false;
        }
        else
        {
           qDebug()<<("Connection to the UCCS database: SUCCESSFUL");
           return true;
        }

    }
public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_attendeeLogin_clicked();

    void on_pushButton_loginBusiness_clicked();

    void on_pushButton_createAttendeeAccount_clicked();

    void on_pushButton_createBusinessAccount_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
