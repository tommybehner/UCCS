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
#include "DBConnector.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT
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
