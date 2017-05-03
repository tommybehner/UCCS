#include "businessmenu.h"
#include "ui_businessmenu.h"

BusinessMenu::BusinessMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusinessMenu)
{
    ui->setupUi(this);
    name = "";
}

BusinessMenu::~BusinessMenu()
{
    delete ui;
}

void BusinessMenu::setName(string newName)
{
    if (newName != name)
    {
        name = newName;
        emit nameChanged(name);
    }
}

void BusinessMenu::on_pushButton_update_table_clicked()
{
    //narrow conferences down to conferences related to business
    QSqlQuery str = QSelect("SELECT ConferenceName FROM Business_Conference WHERE BusinessName='"+name+"'");
    string confNames = "SELECT * FROM Conference WHERE Name=";

    //read data one at a time
     while(str.next())
    {
        //begining quotation
        confNames = confNames + "'";

        //get name data
        QString newString;
        newString = str.value(0).toString();

        //insert name data
        string temp = newString.toLocal8Bit().constData();
        confNames = confNames + temp;

        //end quote
        confNames = confNames + "' OR Name= ";
    }
    //remove last end quote
    for(int i = 0; i < 10; i++)
        confNames.pop_back();

    //execute query
    QSqlQuery query = QSelect(confNames);

    //Put data in tableView
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
    DBDisconnect();
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

    //send to Business Class for removal
    Business temp;
    temp.removeConference(name.toLocal8Bit().constData(), nameStr);

    //update table

}

void BusinessMenu::on_pushButton_save_clicked()
{
    //get data from the text boxes
    QString name, date;
    name = ui->lineEdit_name->text();
    date = ui->lineEdit_date->text();

    //convert to string
    string nameStr = name.toLocal8Bit().constData();
    string dateStr = date.toLocal8Bit().constData();

    //send to Business Class for insertain
    Business temp;
    temp.addConference(name.toLocal8Bit().constData(), nameStr, dateStr);

    //update table
}
