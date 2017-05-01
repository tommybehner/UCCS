/********************************************************************************
** Form generated from reading UI file 'attendeemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDEEMENU_H
#define UI_ATTENDEEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AttendeeMenu
{
public:
    QTableView *tableView_registeredsessions;
    QTableView *tableView_Availablkesessions;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *AttendeeMenu)
    {
        if (AttendeeMenu->objectName().isEmpty())
            AttendeeMenu->setObjectName(QStringLiteral("AttendeeMenu"));
        AttendeeMenu->resize(993, 789);
        tableView_registeredsessions = new QTableView(AttendeeMenu);
        tableView_registeredsessions->setObjectName(QStringLiteral("tableView_registeredsessions"));
        tableView_registeredsessions->setGeometry(QRect(80, 120, 291, 491));
        tableView_Availablkesessions = new QTableView(AttendeeMenu);
        tableView_Availablkesessions->setObjectName(QStringLiteral("tableView_Availablkesessions"));
        tableView_Availablkesessions->setGeometry(QRect(370, 120, 301, 491));
        label = new QLabel(AttendeeMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 90, 101, 16));
        label_2 = new QLabel(AttendeeMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 90, 101, 16));

        retranslateUi(AttendeeMenu);

        QMetaObject::connectSlotsByName(AttendeeMenu);
    } // setupUi

    void retranslateUi(QDialog *AttendeeMenu)
    {
        AttendeeMenu->setWindowTitle(QApplication::translate("AttendeeMenu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AttendeeMenu", "Registered Sessions", Q_NULLPTR));
        label_2->setText(QApplication::translate("AttendeeMenu", "Available Sessions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AttendeeMenu: public Ui_AttendeeMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDEEMENU_H
