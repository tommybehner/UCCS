#include "attendeemenu.h"
#include "ui_attendeemenu.h"

AttendeeMenu::AttendeeMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AttendeeMenu)
{
    ui->setupUi(this);
}

AttendeeMenu::~AttendeeMenu()
{
    delete ui;
}
