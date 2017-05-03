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
    int count = 0;
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
        count++;
    }
     if (count == 0)
     {
         qDebug()<<("No conferences under Business_Conference");
         return;
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
    QString Qname = index.sibling(row, 0).data().toString();
    QString Qdate = index.sibling(row, 1).data().toString();

    string name = Qname.toLocal8Bit().constData();
    string date = Qdate.toLocal8Bit().constData();

    //clear the text boxes
    ui->lineEdit_name->clear();
    ui->lineEdit_date->clear();
    ui->lineEdit_name_session->clear();
    ui->lineEdit_room_session->clear();
    ui->lineEdit_time_session->clear();

    //put data in the text boxes
    ui->lineEdit_name->insert(Qname);
    ui->lineEdit_date->insert(Qdate);

    //narrow session down to session related to conference
    QSqlQuery str = QSelect("SELECT SessionName FROM Conference_Session WHERE ConferenceName='"+name+"'");
    string sessNames = "SELECT * FROM Session WHERE Name=";

    int count = 0;
    //read data one at a time
     while(str.next())
    {
        //begining quotation
        sessNames = sessNames + "'";

        //get name data
        QString newString;
        newString = str.value(0).toString();

        //insert name data
        string temp = newString.toLocal8Bit().constData();
        sessNames = sessNames + temp;

        //end quote
        sessNames = sessNames + "' OR Name= ";
        count++;
    }

    if (count == 0)
    {
        qDebug()<<("No session for selected conference");
        QSqlQueryModel *model = new QSqlQueryModel();
        model->clear();
        ui->tableView_session->setModel(model);
        return;
    }

    //remove last end quote
    for(int i = 0; i < 10; i++)
        sessNames.pop_back();

    //execute query
    QSqlQuery query = QSelect(sessNames);

    //Put data in tableView_session
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView_session->setModel(model);
    DBDisconnect();
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
    QString Cname, date;
    Cname = ui->lineEdit_name->text();
    date = ui->lineEdit_date->text();

    //convert to string
    string nameStr = Cname.toLocal8Bit().constData();
    string dateStr = date.toLocal8Bit().constData();

    /* not currently usedd
    //check if new entry or editing old
    string str = "SLECT Name FROM Business WHERE Name='"+nameStr+"'";
    if (str == nameStr)
    {
        //Business
    }*/

    //send to Business Class for insertain
    Business temp;
    temp.addConference(name, nameStr, dateStr);

    //update table
}

void BusinessMenu::on_pushButton_save_session_clicked()
{
    //get data from the text boxes
    QString Cname, name, room, time;
    Cname = ui->lineEdit_name->text();
    name = ui->lineEdit_name_session->text();
    room = ui->lineEdit_room_session->text();
    time = ui->lineEdit_time_session->text();

    //convert to string
    string CnameStr = Cname.toLocal8Bit().constData();
    string nameStr = name.toLocal8Bit().constData();
    string roomStr = room.toLocal8Bit().constData();
    string timeStr = time.toLocal8Bit().constData();

    /* not currently usedd
    //check if new entry or editing old
    string str = "SLECT Name FROM Business WHERE Name='"+nameStr+"'";
    if (str == nameStr)
    {
        //Business
    }*/

    //send to Conference Class for insertain

    Conference temp;
    temp.addSession(CnameStr, nameStr, roomStr, timeStr);

    //update table
}

void BusinessMenu::on_pushButton_delete_session_clicked()
{
    //get data from the text boxes
    QString Cname, name;
    Cname = ui->lineEdit_name->text();
    name = ui->lineEdit_name_session->text();

    //convert to string
    string CnameStr = Cname.toLocal8Bit().constData();
    string nameStr = name.toLocal8Bit().constData();

    //send to Business Class for removal
    Conference temp;
    temp.removeSession(CnameStr, nameStr);

    //update table
}

void BusinessMenu::on_tableView_session_clicked(const QModelIndex &index)
{
    //get data from the tableView
    int row = index.row();
    QString Qname = index.sibling(row, 0).data().toString();
    QString Qroom = index.sibling(row, 1).data().toString();
    QString Qtime = index.sibling(row, 3).data().toString();

    //clear the text boxes
    ui->lineEdit_name_session->clear();
    ui->lineEdit_room_session->clear();
    ui->lineEdit_time_session->clear();

    //put data in the text boxes
    ui->lineEdit_name_session->insert(Qname);
    ui->lineEdit_room_session->insert(Qroom);
    ui->lineEdit_time_session->insert(Qtime);
}
