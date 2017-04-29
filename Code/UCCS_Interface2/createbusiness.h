#ifndef CREATEBUSINESS_H
#define CREATEBUSINESS_H

#include <QDialog>
#include "login.h"
#include "ui_login.h"

namespace Ui {
class CreateBusiness;
}

class CreateBusiness : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBusiness(QWidget *parent = 0);
    ~CreateBusiness();

private slots:
    void on_pushButton_BCancel_clicked();

private:
    Ui::CreateBusiness *ui;
};

#endif // CREATEBUSINESS_H
