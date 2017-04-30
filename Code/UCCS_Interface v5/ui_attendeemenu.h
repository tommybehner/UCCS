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

QT_BEGIN_NAMESPACE

class Ui_AttendeeMenu
{
public:

    void setupUi(QDialog *AttendeeMenu)
    {
        if (AttendeeMenu->objectName().isEmpty())
            AttendeeMenu->setObjectName(QStringLiteral("AttendeeMenu"));
        AttendeeMenu->resize(640, 480);

        retranslateUi(AttendeeMenu);

        QMetaObject::connectSlotsByName(AttendeeMenu);
    } // setupUi

    void retranslateUi(QDialog *AttendeeMenu)
    {
        AttendeeMenu->setWindowTitle(QApplication::translate("AttendeeMenu", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AttendeeMenu: public Ui_AttendeeMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDEEMENU_H
