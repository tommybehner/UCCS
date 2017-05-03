/********************************************************************************
** Form generated from reading UI file 'createbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBUSINESS_H
#define UI_CREATEBUSINESS_H

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

class Ui_CreateBusiness
{
public:
    QLabel *label_password;
    QLineEdit *lineEdit_BPass;
    QLineEdit *lineEdit_BFirst;
    QLabel *label_firstname;
    QLabel *label_Title;
    QLineEdit *lineEdit_BUsername;
    QLabel *label_email;
    QLabel *label_username;
    QLineEdit *lineEdit_BEmail;
    QPushButton *pushButton_Submit;
    QPushButton *pushButton_BCancel;

    void setupUi(QDialog *CreateBusiness)
    {
        if (CreateBusiness->objectName().isEmpty())
            CreateBusiness->setObjectName(QStringLiteral("CreateBusiness"));
        CreateBusiness->resize(879, 597);
        label_password = new QLabel(CreateBusiness);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(110, 260, 331, 31));
        lineEdit_BPass = new QLineEdit(CreateBusiness);
        lineEdit_BPass->setObjectName(QStringLiteral("lineEdit_BPass"));
        lineEdit_BPass->setGeometry(QRect(490, 259, 291, 31));
        lineEdit_BFirst = new QLineEdit(CreateBusiness);
        lineEdit_BFirst->setObjectName(QStringLiteral("lineEdit_BFirst"));
        lineEdit_BFirst->setGeometry(QRect(490, 329, 291, 31));
        label_firstname = new QLabel(CreateBusiness);
        label_firstname->setObjectName(QStringLiteral("label_firstname"));
        label_firstname->setGeometry(QRect(110, 330, 331, 31));
        label_Title = new QLabel(CreateBusiness);
        label_Title->setObjectName(QStringLiteral("label_Title"));
        label_Title->setGeometry(QRect(16, 0, 841, 161));
        lineEdit_BUsername = new QLineEdit(CreateBusiness);
        lineEdit_BUsername->setObjectName(QStringLiteral("lineEdit_BUsername"));
        lineEdit_BUsername->setGeometry(QRect(490, 189, 291, 31));
        label_email = new QLabel(CreateBusiness);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(110, 401, 331, 31));
        label_username = new QLabel(CreateBusiness);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(110, 190, 331, 31));
        lineEdit_BEmail = new QLineEdit(CreateBusiness);
        lineEdit_BEmail->setObjectName(QStringLiteral("lineEdit_BEmail"));
        lineEdit_BEmail->setGeometry(QRect(490, 400, 291, 31));
        pushButton_Submit = new QPushButton(CreateBusiness);
        pushButton_Submit->setObjectName(QStringLiteral("pushButton_Submit"));
        pushButton_Submit->setGeometry(QRect(600, 520, 181, 41));
        pushButton_BCancel = new QPushButton(CreateBusiness);
        pushButton_BCancel->setObjectName(QStringLiteral("pushButton_BCancel"));
        pushButton_BCancel->setGeometry(QRect(490, 520, 101, 41));

        retranslateUi(CreateBusiness);

        QMetaObject::connectSlotsByName(CreateBusiness);
    } // setupUi

    void retranslateUi(QDialog *CreateBusiness)
    {
        CreateBusiness->setWindowTitle(QApplication::translate("CreateBusiness", "Dialog", Q_NULLPTR));
        label_password->setText(QApplication::translate("CreateBusiness", "Choose a Password:", Q_NULLPTR));
        label_firstname->setText(QApplication::translate("CreateBusiness", "Organization  name:", Q_NULLPTR));
        label_Title->setText(QApplication::translate("CreateBusiness", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">UCCS Registration</span></p></body></html>", Q_NULLPTR));
        label_email->setText(QApplication::translate("CreateBusiness", "Email address:", Q_NULLPTR));
        label_username->setText(QApplication::translate("CreateBusiness", "Choose a Username:", Q_NULLPTR));
        lineEdit_BEmail->setText(QString());
        pushButton_Submit->setText(QApplication::translate("CreateBusiness", "Submit", Q_NULLPTR));
        pushButton_BCancel->setText(QApplication::translate("CreateBusiness", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateBusiness: public Ui_CreateBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBUSINESS_H
