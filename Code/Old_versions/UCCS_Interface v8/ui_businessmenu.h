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
#include <QtWidgets/QLabel>
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
    QTableView *tableView;
    QPushButton *pushButton_save;
    QTableView *tableView_session;
    QLineEdit *lineEdit_name_session;
    QLineEdit *lineEdit_room_session;
    QLineEdit *lineEdit_time_session;
    QPushButton *pushButton_save_session;
    QPushButton *pushButton_delete_session;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTableView *tableView_equipmentUsed;
    QLabel *label_8;
    QLabel *label_9;
    QTableView *tableView_equipmentAvailable;

    void setupUi(QDialog *BusinessMenu)
    {
        if (BusinessMenu->objectName().isEmpty())
            BusinessMenu->setObjectName(QStringLiteral("BusinessMenu"));
        BusinessMenu->resize(1335, 879);
        lineEdit_name = new QLineEdit(BusinessMenu);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(30, 90, 341, 41));
        lineEdit_date = new QLineEdit(BusinessMenu);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(30, 180, 341, 41));
        pushButton_delete = new QPushButton(BusinessMenu);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(200, 250, 131, 41));
        tableView = new QTableView(BusinessMenu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(410, 50, 421, 351));
        pushButton_save = new QPushButton(BusinessMenu);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(50, 250, 131, 41));
        tableView_session = new QTableView(BusinessMenu);
        tableView_session->setObjectName(QStringLiteral("tableView_session"));
        tableView_session->setGeometry(QRect(410, 450, 421, 351));
        lineEdit_name_session = new QLineEdit(BusinessMenu);
        lineEdit_name_session->setObjectName(QStringLiteral("lineEdit_name_session"));
        lineEdit_name_session->setGeometry(QRect(30, 500, 341, 41));
        lineEdit_room_session = new QLineEdit(BusinessMenu);
        lineEdit_room_session->setObjectName(QStringLiteral("lineEdit_room_session"));
        lineEdit_room_session->setGeometry(QRect(30, 580, 341, 41));
        lineEdit_time_session = new QLineEdit(BusinessMenu);
        lineEdit_time_session->setObjectName(QStringLiteral("lineEdit_time_session"));
        lineEdit_time_session->setGeometry(QRect(30, 650, 341, 41));
        pushButton_save_session = new QPushButton(BusinessMenu);
        pushButton_save_session->setObjectName(QStringLiteral("pushButton_save_session"));
        pushButton_save_session->setGeometry(QRect(60, 720, 131, 41));
        pushButton_delete_session = new QPushButton(BusinessMenu);
        pushButton_delete_session->setObjectName(QStringLiteral("pushButton_delete_session"));
        pushButton_delete_session->setGeometry(QRect(210, 720, 131, 41));
        label = new QLabel(BusinessMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 101, 16));
        label_2 = new QLabel(BusinessMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 150, 101, 16));
        label_3 = new QLabel(BusinessMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 470, 101, 16));
        label_4 = new QLabel(BusinessMenu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 550, 101, 16));
        label_5 = new QLabel(BusinessMenu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 630, 101, 16));
        label_6 = new QLabel(BusinessMenu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(580, 420, 101, 16));
        label_7 = new QLabel(BusinessMenu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 20, 101, 16));
        tableView_equipmentUsed = new QTableView(BusinessMenu);
        tableView_equipmentUsed->setObjectName(QStringLiteral("tableView_equipmentUsed"));
        tableView_equipmentUsed->setGeometry(QRect(880, 50, 201, 741));
        label_8 = new QLabel(BusinessMenu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(930, 20, 101, 16));
        label_9 = new QLabel(BusinessMenu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1120, 20, 101, 16));
        tableView_equipmentAvailable = new QTableView(BusinessMenu);
        tableView_equipmentAvailable->setObjectName(QStringLiteral("tableView_equipmentAvailable"));
        tableView_equipmentAvailable->setGeometry(QRect(1080, 50, 201, 741));

        retranslateUi(BusinessMenu);

        QMetaObject::connectSlotsByName(BusinessMenu);
    } // setupUi

    void retranslateUi(QDialog *BusinessMenu)
    {
        BusinessMenu->setWindowTitle(QApplication::translate("BusinessMenu", "Dialog", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("BusinessMenu", "Delete", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("BusinessMenu", "New Entry", Q_NULLPTR));
        pushButton_save_session->setText(QApplication::translate("BusinessMenu", "New Entry", Q_NULLPTR));
        pushButton_delete_session->setText(QApplication::translate("BusinessMenu", "Delete", Q_NULLPTR));
        label->setText(QApplication::translate("BusinessMenu", "Conference Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("BusinessMenu", "Conference Date", Q_NULLPTR));
        label_3->setText(QApplication::translate("BusinessMenu", "Session Name", Q_NULLPTR));
        label_4->setText(QApplication::translate("BusinessMenu", "Room Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("BusinessMenu", "Session Time", Q_NULLPTR));
        label_6->setText(QApplication::translate("BusinessMenu", "Sessions", Q_NULLPTR));
        label_7->setText(QApplication::translate("BusinessMenu", "Conferences", Q_NULLPTR));
        label_8->setText(QApplication::translate("BusinessMenu", "Equipment Used", Q_NULLPTR));
        label_9->setText(QApplication::translate("BusinessMenu", "Equipment Available", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BusinessMenu: public Ui_BusinessMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSMENU_H
