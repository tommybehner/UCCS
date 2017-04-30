#ifndef CREATEATTENDEE_H
#define CREATEATTENDEE_H

#include <QDialog>
#include "login.h"
#include "ui_login.h"

namespace Ui {
class CreateAttendee;
}

class CreateAttendee : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAttendee(QWidget *parent = 0);
    ~CreateAttendee();

private slots:
    void on_pushButton_Cancel_clicked();

    void on_pushButton_Submit_clicked();

private:
    Ui::CreateAttendee *ui;
};

#endif // CREATEATTENDEE_H
