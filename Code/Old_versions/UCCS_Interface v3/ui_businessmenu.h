/********************************************************************************
** Form generated from reading UI file 'businessmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSINESSMENU_H
#define UI_BUSINESSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_BusinessMenu
{
public:

    void setupUi(QDialog *BusinessMenu)
    {
        if (BusinessMenu->objectName().isEmpty())
            BusinessMenu->setObjectName(QStringLiteral("BusinessMenu"));
        BusinessMenu->resize(640, 480);

        retranslateUi(BusinessMenu);

        QMetaObject::connectSlotsByName(BusinessMenu);
    } // setupUi

    void retranslateUi(QDialog *BusinessMenu)
    {
        BusinessMenu->setWindowTitle(QApplication::translate("BusinessMenu", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BusinessMenu: public Ui_BusinessMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSMENU_H
