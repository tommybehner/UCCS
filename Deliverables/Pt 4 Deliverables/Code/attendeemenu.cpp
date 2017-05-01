#include "attendeemenu.h"
#include "ui_attendeemenu.h"

AttendeeMenu::AttendeeMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AttendeeMenu)
{
    ui->setupUi(this);
    name = "";
}

AttendeeMenu::~AttendeeMenu()
{
    delete ui;
}

void AttendeeMenu::setName(string newName)
{
    if (newName != name)
    {
        name = newName;
        emit nameChanged(name);
    }
}

void AttendeeMenu::updateEquipmentTable()
{
    //fills in used table
    {
        //narrow conferences down to conferences related to business
        QSqlQuery str = QSelect("SELECT Conference FROM Attendee_Conference WHERE AttendeeName='"+name+"'");
        string sessNames = "SELECT * FROM Conference WHERE Name=";



        //read data one at a time
        int count = 0;
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
            QSqlQuery query = QSelect("SELECT Bob FROM Session");
            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
            ui->tableView_registeredsessions->setModel(model);
        }
        else
        {
            //remove last end quote
            for(int i = 0; i < 10; i++)
                sessNames.pop_back();

            //execute query
            QSqlQuery query = QSelect(sessNames);

            //Put data in tableView
            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
            ui->tableView_registeredsessions->setModel(model);
        }
        DBDisconnect();
    }

    //fills in available table
    {
        //narrow conferences down to conferences related to business
        QSqlQuery str = QSelect("SELECT Conference FROM Attendee_Conference WHERE AttendeeName='"+name+"'");
        string sessNames = "SELECT * FROM Conference WHERE Name!=";

        //read data one at a time
        int count = 0;
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
            sessNames = sessNames + "' AND Name!= ";
            count++;
        }

        //remove last end quote
        for(int i = 0; i < 12; i++)
            sessNames.pop_back();

        //execute query
        QSqlQuery query = QSelect(sessNames);

        //Put data in tableView
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->tableView_Availablkesessions->setModel(model);
        DBDisconnect();
    }
}

//left
void AttendeeMenu::on_tableView_registeredsessions_doubleClicked(const QModelIndex &index)
{
    //get data from tableView_equipmentAvailable
    int row = index.row();
    QString Qname = index.sibling(row, 0).data().toString();
    QString Qcost = index.sibling(row, 1).data().toString();

    Attendee temp;
    temp.unregisterConference(name, Qname.toLocal8Bit().constData());

    //update tables
    this->setName(name);

    this->updateEquipmentTable();
}

//right
void AttendeeMenu::on_tableView_Availablkesessions_doubleClicked(const QModelIndex &index)
{
    //get data from tableView_equipmentAvailable
    int row = index.row();
    QString Qname = index.sibling(row, 0).data().toString();
    QString QDate = index.sibling(row, 1).data().toString();

    Attendee temp;
    temp.registerConference(name, Qname.toLocal8Bit().constData());

    //update tables
    this->setName(name);

    this->updateEquipmentTable();
}
