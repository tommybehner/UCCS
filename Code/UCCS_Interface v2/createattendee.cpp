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
    QString username, password;
    username = ui->lineEdit_AUsername->text();
    password = ui->lineEdit_APass->text();

}
