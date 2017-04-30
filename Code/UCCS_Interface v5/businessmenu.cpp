#include "businessmenu.h"
#include "ui_businessmenu.h"

BusinessMenu::BusinessMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusinessMenu)
{
    ui->setupUi(this);
}

BusinessMenu::~BusinessMenu()
{
    delete ui;
}

void BusinessMenu::on_pushButton_update_table_clicked()
{
    //execute query
    QSqlQuery query = QSelect("SELECT * FROM Conference");  //this needs to change once I can pass Business to this class

    //Put data in tableView
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
}

void BusinessMenu::on_tableView_clicked(const QModelIndex &index)
{
    //get data from the tableView
    int row = index.row();
    QString name = index.sibling(row, 0).data().toString();
    QString date = index.sibling(row, 1).data().toString();

    //clear the text boxes
    ui->lineEdit_name->clear();
    ui->lineEdit_date->clear();

    //put data in the text boxes
    ui->lineEdit_name->insert(name);
    ui->lineEdit_date->insert(date);
}

void BusinessMenu::on_pushButton_delete_clicked()
{
    //get data from the text boxes
    QString name;
    name = ui->lineEdit_name->text();

    //convert to string
    string nameStr = name.toLocal8Bit().constData();

    //send to Business Class
    Business temp;
    //temp.removeConference(/*business name goes here*/, nameStr);      //this also will need changing
}
