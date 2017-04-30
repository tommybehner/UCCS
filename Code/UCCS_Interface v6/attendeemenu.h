#ifndef ATTENDEEMENU_H
#define ATTENDEEMENU_H

#include <QDialog>

namespace Ui {
class AttendeeMenu;
}

class AttendeeMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AttendeeMenu(QWidget *parent = 0);
    ~AttendeeMenu();

private:
    Ui::AttendeeMenu *ui;
};

#endif // ATTENDEEMENU_H
