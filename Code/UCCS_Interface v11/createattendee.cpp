#include "createattendee.h"
#include "ui_createattendee.h"

CreateAttendee::CreateAttendee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAttendee)
{
    ui->setupUi(this);
}

CreateAttendee::~CreateAttendee()
{
    delete ui;
}

void CreateAttendee::on_pushButton_Cancel_clicked()
{
    this->hide();
    Login *new_window=new Login;
    new_window->show();
}

void CreateAttendee::on_pushButton_Submit_clicked()
{
    //get data from the UI
    QString username, password, first, last, email;
    username = ui->lineEdit_AUsername->text();
    password = ui->lineEdit_APass->text();
    first = ui->lineEdit_AFirst->text();
    last = ui->lineEdit_ALast->text();
    email = ui->lineEdit_AEmail->text();

    //convert QString to string
    string usernameStr = username.toLocal8Bit().constData();
    string passwordStr = password.toLocal8Bit().constData();
    string firstStr = first.toLocal8Bit().constData();
    string lastStr = last.toLocal8Bit().constData();
    string emailStr = email.toLocal8Bit().constData();

    //pass info to Attendee Class
    int check;
    Attendee newAttendee;
    check = newAttendee.addAttendee(usernameStr, passwordStr, firstStr, lastStr, emailStr);

    //check if successful
    if (check == 1)
    {
        qDebug()<<("Could not add new attendee account");
    }
    else
    {
        this->hide();
        AttendeeMenu attendee_menu;
        attendee_menu.setModal(true);
        attendee_menu.exec();
    }
}
