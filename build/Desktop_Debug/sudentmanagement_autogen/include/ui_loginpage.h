/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *title_label;
    QLabel *username_label;
    QLabel *password_label;
    QLabel *error_label;
    QLineEdit *userame_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *login_pushButton;

    void setupUi(QMainWindow *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName("loginpage");
        loginpage->resize(590, 341);
        centralwidget = new QWidget(loginpage);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -10, 591, 361));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #E5E4F5;\n"
"    border-radius: 16px;\n"
"    margin-top: 10px;\n"
"}\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 0 4px;\n"
"    color: transparent; /* hide default title box if you have your own QLabel title */\n"
"}"));
        title_label = new QLabel(groupBox);
        title_label->setObjectName("title_label");
        title_label->setGeometry(QRect(260, 30, 131, 41));
        title_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #1E1B4B;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 22px;\n"
"    font-weight: 600;\n"
"}"));
        username_label = new QLabel(groupBox);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(140, 67, 111, 21));
        username_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #4B5563;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"}"));
        password_label = new QLabel(groupBox);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(140, 127, 121, 21));
        password_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #4B5563;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"}"));
        error_label = new QLabel(groupBox);
        error_label->setObjectName("error_label");
        error_label->setGeometry(QRect(200, 290, 251, 20));
        error_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #9CA3AF;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 12px;\n"
"}"));
        userame_lineEdit = new QLineEdit(groupBox);
        userame_lineEdit->setObjectName("userame_lineEdit");
        userame_lineEdit->setGeometry(QRect(140, 90, 281, 26));
        userame_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F8F8FC;\n"
"    border: 1.5px solid #E2E1F0;\n"
"    border-radius: 2px;\n"
"    padding: 2px 2px;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    color: #1E1B4B;\n"
"    selection-background-color: #6D28D9;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #6D28D9;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"QLineEdit:hover {\n"
"    border: 1.5px solid #C7C5E8;\n"
"}"));
        password_lineEdit = new QLineEdit(groupBox);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(140, 150, 281, 26));
        password_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #F8F8FC;\n"
"    border: 1.5px solid #E2E1F0;\n"
"    border-radius: 2px;\n"
"    padding: 2px 2px;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    color: #1E1B4B;\n"
"    selection-background-color: #6D28D9;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #6D28D9;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"QLineEdit:hover {\n"
"    border: 1.5px solid #C7C5E8;\n"
"}"));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        login_pushButton = new QPushButton(groupBox);
        login_pushButton->setObjectName("login_pushButton");
        login_pushButton->setGeometry(QRect(170, 220, 131, 26));
        login_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6D28D9;\n"
"    color: #FFFFFF;\n"
"    border: none;\n"
"    border-radius: 2px;\n"
"    padding: 2px 2px;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #5B21B6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #4C1D95;\n"
"}"));
        loginpage->setCentralWidget(centralwidget);

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        title_label->setText(QCoreApplication::translate("loginpage", "Login Page", nullptr));
        username_label->setText(QCoreApplication::translate("loginpage", "username", nullptr));
        password_label->setText(QCoreApplication::translate("loginpage", "password", nullptr));
        error_label->setText(QCoreApplication::translate("loginpage", "welcom to student management", nullptr));
        userame_lineEdit->setPlaceholderText(QCoreApplication::translate("loginpage", "Enter username", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("loginpage", "Enter password", nullptr));
        login_pushButton->setText(QCoreApplication::translate("loginpage", "login ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
