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
    QLineEdit *lineEdit_date;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_update_table;
    QTableView *tableView;
    QPushButton *pushButton_save;
    QTableView *tableView_session;
    QLineEdit *lineEdit_name_session;
    QLineEdit *lineEdit_room_session;
    QLineEdit *lineEdit_time_session;
    QPushButton *pushButton_save_session;
    QPushButton *pushButton_delete_session;

    void setupUi(QDialog *BusinessMenu)
    {
        if (BusinessMenu->objectName().isEmpty())
            BusinessMenu->setObjectName(QStringLiteral("BusinessMenu"));
        BusinessMenu->resize(844, 879);
        lineEdit_name = new QLineEdit(BusinessMenu);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(30, 120, 341, 41));
        lineEdit_date = new QLineEdit(BusinessMenu);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(30, 180, 341, 41));
        pushButton_delete = new QPushButton(BusinessMenu);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(200, 250, 131, 41));
        pushButton_update_table = new QPushButton(BusinessMenu);
        pushButton_update_table->setObjectName(QStringLiteral("pushButton_update_table"));
        pushButton_update_table->setGeometry(QRect(560, 380, 131, 41));
        tableView = new QTableView(BusinessMenu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(410, 20, 421, 351));
        pushButton_save = new QPushButton(BusinessMenu);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(50, 250, 131, 41));
        tableView_session = new QTableView(BusinessMenu);
        tableView_session->setObjectName(QStringLiteral("tableView_session"));
        tableView_session->setGeometry(QRect(410, 450, 421, 351));
        lineEdit_name_session = new QLineEdit(BusinessMenu);
        lineEdit_name_session->setObjectName(QStringLiteral("lineEdit_name_session"));
        lineEdit_name_session->setGeometry(QRect(30, 460, 341, 41));
        lineEdit_room_session = new QLineEdit(BusinessMenu);
        lineEdit_room_session->setObjectName(QStringLiteral("lineEdit_room_session"));
        lineEdit_room_session->setGeometry(QRect(30, 520, 341, 41));
        lineEdit_time_session = new QLineEdit(BusinessMenu);
        lineEdit_time_session->setObjectName(QStringLiteral("lineEdit_time_session"));
        lineEdit_time_session->setGeometry(QRect(30, 590, 341, 41));
        pushButton_save_session = new QPushButton(BusinessMenu);
        pushButton_save_session->setObjectName(QStringLiteral("pushButton_save_session"));
        pushButton_save_session->setGeometry(QRect(50, 660, 131, 41));
        pushButton_delete_session = new QPushButton(BusinessMenu);
        pushButton_delete_session->setObjectName(QStringLiteral("pushButton_delete_session"));
        pushButton_delete_session->setGeometry(QRect(200, 660, 131, 41));

        retranslateUi(BusinessMenu);

        QMetaObject::connectSlotsByName(BusinessMenu);
    } // setupUi

    void retranslateUi(QDialog *BusinessMenu)
    {
        BusinessMenu->setWindowTitle(QApplication::translate("BusinessMenu", "Dialog", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("BusinessMenu", "Delete", Q_NULLPTR));
        pushButton_update_table->setText(QApplication::translate("BusinessMenu", "UPDATE TABLE", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("BusinessMenu", "New Entry", Q_NULLPTR));
        pushButton_save_session->setText(QApplication::translate("BusinessMenu", "New Entry", Q_NULLPTR));
        pushButton_delete_session->setText(QApplication::translate("BusinessMenu", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BusinessMenu: public Ui_BusinessMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSMENU_H
