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

void BusinessMenu::on_pushButton_update_clicked()
{

}

void BusinessMenu::on_pushButton_update_table_clicked()
{
    QSqlQuery query = QSelect("SELECT * FROM Conference");

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tableView->setModel(model);
}
