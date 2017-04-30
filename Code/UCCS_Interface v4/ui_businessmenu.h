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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_BusinessMenu
{
public:
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_name_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_update_table;
    QTableView *tableView;

    void setupUi(QDialog *BusinessMenu)
    {
        if (BusinessMenu->objectName().isEmpty())
            BusinessMenu->setObjectName(QStringLiteral("BusinessMenu"));
        BusinessMenu->resize(844, 480);
        lineEdit_name = new QLineEdit(BusinessMenu);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(110, 120, 341, 41));
        lineEdit_name_2 = new QLineEdit(BusinessMenu);
        lineEdit_name_2->setObjectName(QStringLiteral("lineEdit_name_2"));
        lineEdit_name_2->setGeometry(QRect(110, 180, 341, 41));
        pushButton_save = new QPushButton(BusinessMenu);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(130, 250, 111, 41));
        pushButton_update = new QPushButton(BusinessMenu);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(280, 250, 131, 41));
        pushButton_delete = new QPushButton(BusinessMenu);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(280, 310, 131, 41));
        pushButton_update_table = new QPushButton(BusinessMenu);
        pushButton_update_table->setObjectName(QStringLiteral("pushButton_update_table"));
        pushButton_update_table->setGeometry(QRect(570, 420, 80, 21));
        tableView = new QTableView(BusinessMenu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(460, 20, 371, 351));

        retranslateUi(BusinessMenu);

        QMetaObject::connectSlotsByName(BusinessMenu);
    } // setupUi

    void retranslateUi(QDialog *BusinessMenu)
    {
        BusinessMenu->setWindowTitle(QApplication::translate("BusinessMenu", "Dialog", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("BusinessMenu", "Save", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("BusinessMenu", "Update", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("BusinessMenu", "Delete", Q_NULLPTR));
        pushButton_update_table->setText(QApplication::translate("BusinessMenu", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BusinessMenu: public Ui_BusinessMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSMENU_H
