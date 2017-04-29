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
