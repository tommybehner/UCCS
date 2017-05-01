#ifndef BUSINESSMENU_H
#define BUSINESSMENU_H

#include <QDialog>
#include <string>
#include <QTableView>
#include "DBConnector.h"
#include "Business.h"

namespace Ui {
class BusinessMenu;
}

class BusinessMenu : public QDialog
{
    Q_OBJECT

public:
    explicit BusinessMenu(QWidget *parent = 0);
    ~BusinessMenu();

    //the following are needed to pass information
    string returnName() const {return name;}
    string returnCName() const {return Cname;}
    string returnSName() const {return Sname;}

public slots:
    void setName(string);
    void setCName(string);
    void setSName(string);

    void updateConferenceTable();
    void updateSessionTable();
    void updateEquipmentTable();

signals:
    void nameChanged(string newName);
    void CnameChanged(string newCName);
    void SnameChanged(string newSName);
    //end of infor pass

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_delete_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_save_session_clicked();

    void on_pushButton_delete_session_clicked();

    void on_tableView_session_clicked(const QModelIndex &index);

    void on_tableView_equipmentAvailable_doubleClicked(const QModelIndex &index);

    void on_tableView_equipmentUsed_doubleClicked(const QModelIndex &index);

private:
    Ui::BusinessMenu *ui;
    string name;
    string Cname;
    string Sname;
};

#endif // BUSINESSMENU_H
