#include "createbusiness.h"
#include "ui_createbusiness.h"

CreateBusiness::CreateBusiness(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBusiness)
{
    ui->setupUi(this);
}

CreateBusiness::~CreateBusiness()
{
    delete ui;
}

void CreateBusiness::on_pushButton_BCancel_clicked()
{
    this->hide();
    Login *new_window=new Login;
    new_window->show();
}

void CreateBusiness::on_pushButton_Submit_clicked()
{
    //get data from the UI
    QString username, password, organization, email;
    username = ui->lineEdit_BUsername->text();
    password = ui->lineEdit_BPass->text();
    organization = ui->lineEdit_BFirst->text();
    email = ui->lineEdit_BEmail->text();

    //convert QString to string
    string usernameStr = username.toLocal8Bit().constData();
    string passwordStr = password.toLocal8Bit().constData();
    string organizationStr = organization.toLocal8Bit().constData();
    string emailStr = email.toLocal8Bit().constData();

    //pass info to BusinessClass
    int check;
    Business newBusiness;
    check = newBusiness.addBusiness(usernameStr, passwordStr, organizationStr, emailStr);

    //check if successful
    if (check == 1)
    {
        qDebug()<<("Could not add new business account");
    }
    else
    {
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
}
