/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_attendeeLogin;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_createAttendeeAccount;
    QLabel *label_username;
    QLabel *label_pass;
    QLabel *label_notamember;
    QLabel *label_attend_login_status;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_loginBusiness;
    QLineEdit *lineEdit_business_username;
    QLineEdit *lineEdit_business_password;
    QPushButton *pushButton_createBusinessAccount;
    QLabel *label_username_2;
    QLabel *label_pass_2;
    QLabel *label_notamember_2;
    QLabel *label;
    QLabel *label_business_login_status;
    QLabel *label_DBstatus;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1149, 569);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 491, 501));
        pushButton_attendeeLogin = new QPushButton(groupBox);
        pushButton_attendeeLogin->setObjectName(QStringLiteral("pushButton_attendeeLogin"));
        pushButton_attendeeLogin->setGeometry(QRect(340, 190, 75, 41));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(120, 90, 201, 41));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(120, 190, 201, 41));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_createAttendeeAccount = new QPushButton(groupBox);
        pushButton_createAttendeeAccount->setObjectName(QStringLiteral("pushButton_createAttendeeAccount"));
        pushButton_createAttendeeAccount->setGeometry(QRect(120, 450, 251, 31));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(130, 50, 191, 41));
        label_pass = new QLabel(groupBox);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setGeometry(QRect(130, 150, 191, 41));
        label_notamember = new QLabel(groupBox);
        label_notamember->setObjectName(QStringLiteral("label_notamember"));
        label_notamember->setGeometry(QRect(10, 330, 471, 101));
        label_attend_login_status = new QLabel(groupBox);
        label_attend_login_status->setObjectName(QStringLiteral("label_attend_login_status"));
        label_attend_login_status->setGeometry(QRect(10, 240, 471, 71));
        groupBox_2 = new QGroupBox(Login);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(630, 10, 491, 501));
        pushButton_loginBusiness = new QPushButton(groupBox_2);
        pushButton_loginBusiness->setObjectName(QStringLiteral("pushButton_loginBusiness"));
        pushButton_loginBusiness->setGeometry(QRect(340, 190, 75, 41));
        lineEdit_business_username = new QLineEdit(groupBox_2);
        lineEdit_business_username->setObjectName(QStringLiteral("lineEdit_business_username"));
        lineEdit_business_username->setGeometry(QRect(120, 90, 201, 41));
        lineEdit_business_password = new QLineEdit(groupBox_2);
        lineEdit_business_password->setObjectName(QStringLiteral("lineEdit_business_password"));
        lineEdit_business_password->setGeometry(QRect(120, 190, 201, 41));
        lineEdit_business_password->setEchoMode(QLineEdit::Password);
        pushButton_createBusinessAccount = new QPushButton(groupBox_2);
        pushButton_createBusinessAccount->setObjectName(QStringLiteral("pushButton_createBusinessAccount"));
        pushButton_createBusinessAccount->setGeometry(QRect(70, 450, 351, 31));
        label_username_2 = new QLabel(groupBox_2);
        label_username_2->setObjectName(QStringLiteral("label_username_2"));
        label_username_2->setGeometry(QRect(130, 50, 191, 41));
        label_pass_2 = new QLabel(groupBox_2);
        label_pass_2->setObjectName(QStringLiteral("label_pass_2"));
        label_pass_2->setGeometry(QRect(130, 150, 191, 41));
        label_notamember_2 = new QLabel(groupBox_2);
        label_notamember_2->setObjectName(QStringLiteral("label_notamember_2"));
        label_notamember_2->setGeometry(QRect(10, 330, 471, 101));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-350, 232, 291, 31));
        label_business_login_status = new QLabel(groupBox_2);
        label_business_login_status->setObjectName(QStringLiteral("label_business_login_status"));
        label_business_login_status->setGeometry(QRect(10, 240, 471, 71));
        label_DBstatus = new QLabel(Login);
        label_DBstatus->setObjectName(QStringLiteral("label_DBstatus"));
        label_DBstatus->setGeometry(QRect(20, 520, 771, 41));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Login", "UCCS Login for Attendees", Q_NULLPTR));
        pushButton_attendeeLogin->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        lineEdit_username->setText(QString());
        lineEdit_password->setText(QString());
        pushButton_createAttendeeAccount->setText(QApplication::translate("Login", "Create Account", Q_NULLPTR));
        label_username->setText(QApplication::translate("Login", "Username", Q_NULLPTR));
        label_pass->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        label_notamember->setText(QApplication::translate("Login", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Not a member of the UCCS?</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sign up today!</p></body></html>", Q_NULLPTR));
        label_attend_login_status->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Login", "UCCS Login for Businesses", Q_NULLPTR));
        pushButton_loginBusiness->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        lineEdit_business_username->setText(QString());
        lineEdit_business_password->setText(QString());
        pushButton_createBusinessAccount->setText(QApplication::translate("Login", "Create Business Account", Q_NULLPTR));
        label_username_2->setText(QApplication::translate("Login", "Username", Q_NULLPTR));
        label_pass_2->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        label_notamember_2->setText(QApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:8.25pt; font-weight:600;\">Host your conference</span></p><p align=\"center\"><span style=\" font-size:8.25pt; font-weight:600;\">with confidence</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "TextLabel", Q_NULLPTR));
        label_business_login_status->setText(QString());
        label_DBstatus->setText(QApplication::translate("Login", "[+]Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
