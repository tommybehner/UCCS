#ifndef BUSINESSMENU_H
#define BUSINESSMENU_H

#include <QDialog>

namespace Ui {
class BusinessMenu;
}

class BusinessMenu : public QDialog
{
    Q_OBJECT

public:
    explicit BusinessMenu(QWidget *parent = 0);
    ~BusinessMenu();

private:
    Ui::BusinessMenu *ui;
};

#endif // BUSINESSMENU_H
