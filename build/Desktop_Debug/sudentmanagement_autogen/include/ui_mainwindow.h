/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_information;
    QLabel *label_id;
    QLabel *label_name;
    QLabel *label_age;
    QLabel *label_math;
    QLabel *label_science;
    QLabel *label_english;
    QLineEdit *lineEdit_id;
    QSpinBox *spinBox_age;
    QLineEdit *lineEdit_name;
    QSpinBox *spinBox_english;
    QSpinBox *spinBox_science;
    QSpinBox *spinBox_math;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_fema;
    QGroupBox *groupBox_activities;
    QCheckBox *checkBox_Sport;
    QCheckBox *checkBox_music;
    QCheckBox *checkBox_programing;
    QCheckBox *checkBox_art;
    QCheckBox *checkBox_reading;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(943, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 280, 891, 141));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: white;\n"
"    alternate-background-color: #f7f7f7;\n"
"    gridline-color: #dddddd;\n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #34495e;\n"
"    color: white;\n"
"    padding: 10px;\n"
"    border: none;\n"
"    font-weight: bold;\n"
"}"));
        tableWidget->setRowCount(0);
        groupBox_information = new QGroupBox(centralwidget);
        groupBox_information->setObjectName("groupBox_information");
        groupBox_information->setGeometry(QRect(10, 0, 541, 281));
        groupBox_information->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 10px;\n"
"    margin-top: 15px;\n"
"    padding: 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px 15px;\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"}"));
        groupBox_information->setCheckable(false);
        label_id = new QLabel(groupBox_information);
        label_id->setObjectName("label_id");
        label_id->setGeometry(QRect(20, 40, 21, 18));
        label_id->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        label_name = new QLabel(groupBox_information);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(10, 70, 41, 20));
        QFont font;
        font.setBold(true);
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        label_age = new QLabel(groupBox_information);
        label_age->setObjectName("label_age");
        label_age->setGeometry(QRect(20, 110, 41, 18));
        label_age->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        label_math = new QLabel(groupBox_information);
        label_math->setObjectName("label_math");
        label_math->setGeometry(QRect(20, 220, 51, 41));
        label_math->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        label_science = new QLabel(groupBox_information);
        label_science->setObjectName("label_science");
        label_science->setGeometry(QRect(10, 180, 61, 31));
        label_science->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        label_english = new QLabel(groupBox_information);
        label_english->setObjectName("label_english");
        label_english->setGeometry(QRect(10, 150, 51, 18));
        label_english->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}"));
        lineEdit_id = new QLineEdit(groupBox_information);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(70, 30, 141, 26));
        lineEdit_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: none;\n"
"    border-bottom: 2px solid #bdc3c7;\n"
"    padding: 6px 4px;\n"
"    font-size: 14px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: none;\n"
"    border-bottom: 2px solid #3498db;\n"
"}"));
        spinBox_age = new QSpinBox(groupBox_information);
        spinBox_age->setObjectName("spinBox_age");
        spinBox_age->setGeometry(QRect(70, 100, 131, 31));
        lineEdit_name = new QLineEdit(groupBox_information);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(70, 60, 141, 26));
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: none;\n"
"    border-bottom: 2px solid #bdc3c7;\n"
"    padding: 6px 4px;\n"
"    font-size: 14px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: none;\n"
"    border-bottom: 2px solid #3498db;\n"
"}"));
        spinBox_english = new QSpinBox(groupBox_information);
        spinBox_english->setObjectName("spinBox_english");
        spinBox_english->setGeometry(QRect(70, 140, 131, 31));
        spinBox_english->setStyleSheet(QString::fromUtf8(""));
        spinBox_science = new QSpinBox(groupBox_information);
        spinBox_science->setObjectName("spinBox_science");
        spinBox_science->setGeometry(QRect(70, 180, 131, 31));
        spinBox_math = new QSpinBox(groupBox_information);
        spinBox_math->setObjectName("spinBox_math");
        spinBox_math->setGeometry(QRect(70, 226, 131, 31));
        groupBox_gender = new QGroupBox(groupBox_information);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(230, 30, 271, 121));
        groupBox_gender->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 10px;\n"
"    margin-top: 15px;\n"
"    padding: 15px;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 10px;\n"
"    color: #3498db;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton {\n"
"    font-size: 14px;\n"
"    font-weight: normal;\n"
"    color: #2c3e50;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 9px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 9px;\n"
"    background-color: #3498db;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"    border: 2px solid #2980b9;\n"
"}"));
        groupBox_gender->setCheckable(true);
        groupBox_gender->setChecked(false);
        radioButton_male = new QRadioButton(groupBox_gender);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(20, 40, 110, 23));
        radioButton_fema = new QRadioButton(groupBox_gender);
        radioButton_fema->setObjectName("radioButton_fema");
        radioButton_fema->setGeometry(QRect(20, 70, 110, 23));
        groupBox_activities = new QGroupBox(groupBox_information);
        groupBox_activities->setObjectName("groupBox_activities");
        groupBox_activities->setGeometry(QRect(230, 150, 271, 131));
        groupBox_activities->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #27ae60;\n"
"    border-radius: 10px;\n"
"    margin-top: 15px;\n"
"    padding: 20px;\n"
"    background-color: #ffffff;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 12px;\n"
"    color: #27ae60;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"QCheckBox {\n"
"    color: #2c3e50;\n"
"    font-size: 14px;\n"
"    font-weight: normal;\n"
"    spacing: 8px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    border: 2px solid #bdc3c7;\n"
"    border-radius: 4px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    border: 2px solid #27ae60;\n"
"    border-radius: 4px;\n"
"    background-color: #27ae60;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #2ecc71;\n"
"}"));
        groupBox_activities->setCheckable(true);
        groupBox_activities->setChecked(false);
        checkBox_Sport = new QCheckBox(groupBox_activities);
        checkBox_Sport->setObjectName("checkBox_Sport");
        checkBox_Sport->setGeometry(QRect(20, 30, 91, 23));
        checkBox_music = new QCheckBox(groupBox_activities);
        checkBox_music->setObjectName("checkBox_music");
        checkBox_music->setGeometry(QRect(20, 60, 91, 23));
        checkBox_programing = new QCheckBox(groupBox_activities);
        checkBox_programing->setObjectName("checkBox_programing");
        checkBox_programing->setGeometry(QRect(20, 90, 131, 31));
        checkBox_art = new QCheckBox(groupBox_activities);
        checkBox_art->setObjectName("checkBox_art");
        checkBox_art->setGeometry(QRect(150, 30, 91, 23));
        checkBox_reading = new QCheckBox(groupBox_activities);
        checkBox_reading->setObjectName("checkBox_reading");
        checkBox_reading->setGeometry(QRect(150, 60, 101, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 0, 141, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 40, 111, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(560, 90, 131, 51));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(560, 150, 131, 51));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(563, 215, 111, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(723, 25, 131, 41));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(720, 130, 94, 26));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(690, 220, 94, 26));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "age", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Activities", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "math", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "science", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "english", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        groupBox_information->setTitle(QCoreApplication::translate("MainWindow", "Student inforamion", nullptr));
        label_id->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        label_age->setText(QCoreApplication::translate("MainWindow", "age", nullptr));
        label_math->setText(QCoreApplication::translate("MainWindow", "Math", nullptr));
        label_science->setText(QCoreApplication::translate("MainWindow", "Science", nullptr));
        label_english->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        radioButton_male->setText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        radioButton_fema->setText(QCoreApplication::translate("MainWindow", "Female", nullptr));
        groupBox_activities->setTitle(QCoreApplication::translate("MainWindow", "Activities", nullptr));
        checkBox_Sport->setText(QCoreApplication::translate("MainWindow", "Sports", nullptr));
        checkBox_music->setText(QCoreApplication::translate("MainWindow", "Music", nullptr));
        checkBox_programing->setText(QCoreApplication::translate("MainWindow", "Programming", nullptr));
        checkBox_art->setText(QCoreApplication::translate("MainWindow", "Art", nullptr));
        checkBox_reading->setText(QCoreApplication::translate("MainWindow", "Reading", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Student", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Delete student", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Removeallstudet", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "statisticstudent", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "modifysstudent", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "savetofile", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "load file", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
