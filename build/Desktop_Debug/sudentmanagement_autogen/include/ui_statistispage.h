/********************************************************************************
** Form generated from reading UI file 'statistispage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTISPAGE_H
#define UI_STATISTISPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistispage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *statistispage)
    {
        if (statistispage->objectName().isEmpty())
            statistispage->setObjectName("statistispage");
        statistispage->resize(800, 600);
        centralwidget = new QWidget(statistispage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(105, 67, 511, 321));
        statistispage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(statistispage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        statistispage->setMenuBar(menubar);
        statusbar = new QStatusBar(statistispage);
        statusbar->setObjectName("statusbar");
        statistispage->setStatusBar(statusbar);

        retranslateUi(statistispage);

        QMetaObject::connectSlotsByName(statistispage);
    } // setupUi

    void retranslateUi(QMainWindow *statistispage)
    {
        statistispage->setWindowTitle(QCoreApplication::translate("statistispage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("statistispage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistispage: public Ui_statistispage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTISPAGE_H
