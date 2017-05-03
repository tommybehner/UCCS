#include "login.h"
#include "ui_login.h"

//constructor
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    if(!connectionOpen())
        ui->label_DBstatus->setText("Connection to the UCCS database: FAILED");
    else
        ui->label_DBstatus->setText("Connection to the UCCS database: SUCCESSFUL");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_attendeeLogin_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    if(!connectionOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

    connectionOpen();   //!opens database connection
    QSqlQuery query;
    query.prepare("SELECT * FROM Attendee WHERE Name='"+username+"' AND Password='"+password+"'");  //!prepare username and password database query

    if(query.exec())
    {
        int count = 0;
        while(query.next())
        {
            count++;
        }
        if(count==1)
        {
            ui->label_attend_login_status->setText("Username and password correct");
            connectionClose();
            this->hide();
            AttendeeMenu attendee_menu;
            attendee_menu.setModal(true);
            attendee_menu.exec();
        }
            if(count>1)
            ui->label_attend_login_status->setText("Duplicate username and password");
            if(count<1)
            ui->label_attend_login_status->setText("Username and password incorrect");
    }
}

void Login::on_pushButton_loginBusiness_clicked()
{
    QString username, password;
    username = ui->lineEdit_business_username->text();
    password = ui->lineEdit_business_password->text();

    if(!connectionOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }
    connectionOpen();   //!opens database connection
    QSqlQuery query;
    query.prepare("SELECT * FROM Business WHERE Name='"+username+"' AND Password='"+password+"'");  //!prepare username and password database query
    if(query.exec())
    {
        int count = 0;
        while(query.next())
        {
            count++;
        }
        if(count==1)
        {
            ui->label_business_login_status->setText("Username and password correct");
            connectionClose();
            this->hide();
            BusinessMenu business_menu;
            business_menu.setModal(true);
            business_menu.exec();
        }
        if(count>1)
            ui->label_business_login_status->setText("Duplicate username and password");
        if(count<1)
            ui->label_business_login_status->setText("Username and password incorrect");
    }
}

void Login::on_pushButton_createAttendeeAccount_clicked()
{
    connectionClose();
    this->hide();
    CreateAttendee create_attendee;
    create_attendee.setModal(true);
    create_attendee.exec();
}

void Login::on_pushButton_createBusinessAccount_clicked()
{
    connectionClose();
    this->hide();
    CreateBusiness create_business;
    create_business.setModal(true);
    create_business.exec();
}
