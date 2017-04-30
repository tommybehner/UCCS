/********************************************************************************
** Form generated from reading UI file 'createattendee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEATTENDEE_H
#define UI_CREATEATTENDEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateAttendee
{
public:
    QLabel *label_password;
    QLineEdit *lineEdit_APass;
    QLineEdit *lineEdit_AFirst;
    QLabel *label_lastname;
    QLabel *label_firstname;
    QLabel *label_Title;
    QLineEdit *lineEdit_AUsername;
    QLabel *label_email;
    QLabel *label_username;
    QLineEdit *lineEdit_ALast;
    QLineEdit *lineEdit_AEmail;
    QPushButton *pushButton_Submit;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *CreateAttendee)
    {
        if (CreateAttendee->objectName().isEmpty())
            CreateAttendee->setObjectName(QStringLiteral("CreateAttendee"));
        CreateAttendee->resize(879, 597);
        label_password = new QLabel(CreateAttendee);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(110, 260, 331, 31));
        lineEdit_APass = new QLineEdit(CreateAttendee);
        lineEdit_APass->setObjectName(QStringLiteral("lineEdit_APass"));
        lineEdit_APass->setGeometry(QRect(490, 259, 291, 31));
        lineEdit_AFirst = new QLineEdit(CreateAttendee);
        lineEdit_AFirst->setObjectName(QStringLiteral("lineEdit_AFirst"));
        lineEdit_AFirst->setGeometry(QRect(490, 329, 291, 31));
        label_lastname = new QLabel(CreateAttendee);
        label_lastname->setObjectName(QStringLiteral("label_lastname"));
        label_lastname->setGeometry(QRect(110, 400, 331, 31));
        label_firstname = new QLabel(CreateAttendee);
        label_firstname->setObjectName(QStringLiteral("label_firstname"));
        label_firstname->setGeometry(QRect(110, 330, 331, 31));
        label_Title = new QLabel(CreateAttendee);
        label_Title->setObjectName(QStringLiteral("label_Title"));
        label_Title->setGeometry(QRect(16, 0, 851, 161));
        lineEdit_AUsername = new QLineEdit(CreateAttendee);
        lineEdit_AUsername->setObjectName(QStringLiteral("lineEdit_AUsername"));
        lineEdit_AUsername->setGeometry(QRect(490, 189, 291, 31));
        label_email = new QLabel(CreateAttendee);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(110, 471, 331, 31));
        label_username = new QLabel(CreateAttendee);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(110, 190, 331, 31));
        lineEdit_ALast = new QLineEdit(CreateAttendee);
        lineEdit_ALast->setObjectName(QStringLiteral("lineEdit_ALast"));
        lineEdit_ALast->setGeometry(QRect(490, 399, 291, 31));
        lineEdit_AEmail = new QLineEdit(CreateAttendee);
        lineEdit_AEmail->setObjectName(QStringLiteral("lineEdit_AEmail"));
        lineEdit_AEmail->setGeometry(QRect(490, 470, 291, 31));
        pushButton_Submit = new QPushButton(CreateAttendee);
        pushButton_Submit->setObjectName(QStringLiteral("pushButton_Submit"));
        pushButton_Submit->setGeometry(QRect(600, 520, 181, 41));
        pushButton_Cancel = new QPushButton(CreateAttendee);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(490, 520, 101, 41));

        retranslateUi(CreateAttendee);

        QMetaObject::connectSlotsByName(CreateAttendee);
    } // setupUi

    void retranslateUi(QDialog *CreateAttendee)
    {
        CreateAttendee->setWindowTitle(QApplication::translate("CreateAttendee", "Dialog", Q_NULLPTR));
        label_password->setText(QApplication::translate("CreateAttendee", "Choose a Password:", Q_NULLPTR));
        label_lastname->setText(QApplication::translate("CreateAttendee", "Last name:", Q_NULLPTR));
        label_firstname->setText(QApplication::translate("CreateAttendee", "First name:", Q_NULLPTR));
        label_Title->setText(QApplication::translate("CreateAttendee", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">UCCS Registration</span></p></body></html>", Q_NULLPTR));
        label_email->setText(QApplication::translate("CreateAttendee", "Email address:", Q_NULLPTR));
        label_username->setText(QApplication::translate("CreateAttendee", "Choose a Username:", Q_NULLPTR));
        lineEdit_AEmail->setText(QString());
        pushButton_Submit->setText(QApplication::translate("CreateAttendee", "Submit", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("CreateAttendee", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateAttendee: public Ui_CreateAttendee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEATTENDEE_H
