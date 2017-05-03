#ifndef BUSINESSMENU_H
#define BUSINESSMENU_H

#include <QDialog>
#include <string>
#include <QTableView>
#include "DBConnector.h"
#include <qtsql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class BusinessMenu;
}

class BusinessMenu : public QDialog
{
    Q_OBJECT

public:
    explicit BusinessMenu(QWidget *parent = 0);
    ~BusinessMenu();

private slots:
    void on_pushButton_update_clicked();

    void on_pushButton_update_table_clicked();

private:
    Ui::BusinessMenu *ui;
};

#endif // BUSINESSMENU_H
