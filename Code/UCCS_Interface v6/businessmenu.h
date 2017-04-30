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

public slots:
    void setName(string newName);

signals:
    void nameChanged(string newName);
    //end of infor pass

private slots:
    void on_pushButton_update_table_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_delete_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::BusinessMenu *ui;
    string name;
};

#endif // BUSINESSMENU_H
