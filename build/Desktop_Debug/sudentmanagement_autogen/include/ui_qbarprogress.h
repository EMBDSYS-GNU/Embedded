/********************************************************************************
** Form generated from reading UI file 'qbarprogress.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QBARPROGRESS_H
#define UI_QBARPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qbarprogress
{
public:
    QWidget *centralwidget;
    QProgressBar *myprogressBar;
    QLabel *connecting_label;
    QLabel *loading_label;
    QLabel *preparing_label;
    QLabel *almost_reading_label;
    QLabel *Complete_label;
    QLabel *percentage_label;

    void setupUi(QMainWindow *qbarprogress)
    {
        if (qbarprogress->objectName().isEmpty())
            qbarprogress->setObjectName("qbarprogress");
        qbarprogress->resize(363, 254);
        centralwidget = new QWidget(qbarprogress);
        centralwidget->setObjectName("centralwidget");
        myprogressBar = new QProgressBar(centralwidget);
        myprogressBar->setObjectName("myprogressBar");
        myprogressBar->setGeometry(QRect(50, 20, 251, 41));
        myprogressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    background-color: #F8F8FC;\n"
"    border: 1px solid #E2E1F0;\n"
"    border-radius: 2px;\n"
"    text-align: center;\n"
"    color: #1E1B4B;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 12px;\n"
"    height: 20px;\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: #6D28D9;\n"
"    border-radius: 9px;\n"
"}"));
        myprogressBar->setValue(0);
        myprogressBar->setTextVisible(false);
        connecting_label = new QLabel(centralwidget);
        connecting_label->setObjectName("connecting_label");
        connecting_label->setGeometry(QRect(80, 80, 191, 31));
        connecting_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: #C7C5E8;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        connecting_label->setAlignment(Qt::AlignCenter);
        loading_label = new QLabel(centralwidget);
        loading_label->setObjectName("loading_label");
        loading_label->setGeometry(QRect(80, 110, 191, 31));
        loading_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: #C7C5E8;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        loading_label->setAlignment(Qt::AlignCenter);
        preparing_label = new QLabel(centralwidget);
        preparing_label->setObjectName("preparing_label");
        preparing_label->setGeometry(QRect(80, 140, 191, 31));
        preparing_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: #C7C5E8;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        preparing_label->setAlignment(Qt::AlignCenter);
        almost_reading_label = new QLabel(centralwidget);
        almost_reading_label->setObjectName("almost_reading_label");
        almost_reading_label->setGeometry(QRect(80, 170, 191, 31));
        almost_reading_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: #C7C5E8;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        almost_reading_label->setAlignment(Qt::AlignCenter);
        Complete_label = new QLabel(centralwidget);
        Complete_label->setObjectName("Complete_label");
        Complete_label->setGeometry(QRect(70, 200, 191, 31));
        Complete_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: green;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        Complete_label->setAlignment(Qt::AlignCenter);
        percentage_label = new QLabel(centralwidget);
        percentage_label->setObjectName("percentage_label");
        percentage_label->setGeometry(QRect(90, 229, 151, 21));
        percentage_label->setStyleSheet(QString::fromUtf8("/* default state \342\200\224 all labels start like this */\n"
"QLabel {\n"
"    color: blue;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: 500;\n"
"}"));
        percentage_label->setAlignment(Qt::AlignCenter);
        qbarprogress->setCentralWidget(centralwidget);

        retranslateUi(qbarprogress);

        QMetaObject::connectSlotsByName(qbarprogress);
    } // setupUi

    void retranslateUi(QMainWindow *qbarprogress)
    {
        qbarprogress->setWindowTitle(QCoreApplication::translate("qbarprogress", "MainWindow", nullptr));
        connecting_label->setText(QCoreApplication::translate("qbarprogress", "Connecting...", nullptr));
        loading_label->setText(QCoreApplication::translate("qbarprogress", "Loading students...", nullptr));
        preparing_label->setText(QCoreApplication::translate("qbarprogress", "Preparing application...", nullptr));
        almost_reading_label->setText(QCoreApplication::translate("qbarprogress", "Almost ready...", nullptr));
        Complete_label->setText(QCoreApplication::translate("qbarprogress", "Complete!", nullptr));
        percentage_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qbarprogress: public Ui_qbarprogress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QBARPROGRESS_H
