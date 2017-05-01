#ifndef ATTENDEEMENU_H
#define ATTENDEEMENU_H

#include <QDialog>
#include <string>
#include <QTableView>
#include "DBConnector.h"
#include "Business.h"
#include "Attendee.h"
using namespace std;

namespace Ui {
class AttendeeMenu;
}

class AttendeeMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AttendeeMenu(QWidget *parent = 0);
    ~AttendeeMenu();

    string returnName() const {return name;}

public slots:
    void setName(string);

    void updateEquipmentTable();

signals:
    void nameChanged(string newName);

private slots:
    void on_tableView_registeredsessions_doubleClicked(const QModelIndex &index);

    void on_tableView_Availablkesessions_doubleClicked(const QModelIndex &index);

private:
    Ui::AttendeeMenu *ui;
    string name;
};

#endif // ATTENDEEMENU_H
