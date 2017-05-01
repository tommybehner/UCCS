#include "login.h"
#include "ui_login.h"

//constructor
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    if(DBConnect() == 0)
        ui->label_DBstatus->setText("Connection to the UCCS database FAILED");
    else
        ui->label_DBstatus->setText("Connection to the UCCS database SUCCESSFUL");
    DBDisconnect();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_attendeeLogin_clicked()
{
    //get data from the UI
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    //convert QString to string
    string usernameStr = username.toLocal8Bit().constData();
    string passwordStr = password.toLocal8Bit().constData();

    //send the query to DBConnector
    string str = "SELECT Name FROM Attendee WHERE Name='"+usernameStr+"' AND Password='"+passwordStr+"'";  //!prepare username and password database query
    string output = Select(str);

    //check output to see if usernam and password exists
    if(output == usernameStr)
    {
        ui->label_attend_login_status->setText("Username and password correct");
        this->hide();
        AttendeeMenu a, b;
        QObject::connect(&a, SIGNAL(nameChanged(string)),
                         &b, SLOT(setName(string)));
        a.setName(usernameStr);

        a.updateEquipmentTable();

        //load next interface
        a.setModal(true);
        a.exec();
    }
    else
        ui->label_attend_login_status->setText("Username and password incorrect");
}

void Login::on_pushButton_loginBusiness_clicked()
{
    //get data from the UI
    QString username, password;
    username = ui->lineEdit_business_username->text();
    password = ui->lineEdit_business_password->text();

    //convert QString to string
    string usernameStr = username.toLocal8Bit().constData();
    string passwordStr = password.toLocal8Bit().constData();

    //connectionOpen();   //!opens database connection
    string query = "SELECT * FROM Business WHERE Name='"+usernameStr+"' AND Password='"+passwordStr+"'";  //!prepare username and password database query
    string output = Select(query);

    //Manage output
    if(output == usernameStr)
    {
        //hide the interface
        ui->label_business_login_status->setText("Username and password correct");
        this->hide();

        //pass the business name to businessmenu
        BusinessMenu a, b;
        QObject::connect(&a, SIGNAL(nameChanged(string)),
                         &b, SLOT(setName(string)));
        a.setName(usernameStr);

        a.updateConferenceTable();

        //load next interface
        a.setModal(true);
        a.exec();
    }
    else
        ui->label_business_login_status->setText("Username and password incorrect");
}

void Login::on_pushButton_createAttendeeAccount_clicked()
{
    this->hide();
    CreateAttendee create_attendee;
    create_attendee.setModal(true);
    create_attendee.exec();
}

void Login::on_pushButton_createBusinessAccount_clicked()
{
    this->hide();
    CreateBusiness create_business;
    create_business.setModal(true);
    create_business.exec();
}
