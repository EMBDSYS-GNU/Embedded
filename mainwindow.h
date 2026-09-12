#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QVBoxLayout>
#include<QMessageBox>
#include<QWidgetItem>
#include<QTableWidgetItem>
//#include "loginpage.h"
#include<QFile>
#include<QDir>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);   


    ~MainWindow() override;

private slots:
    void on_pushButton_clicked();
   // void on_pushButton_clicked();
   // void on_spinBox_age_valueChanged(int arg1);
/*

    void on_groupBox_activities_clicked();
*/
    void on_spinBox_age_valueChanged(int arg1);

    //void on_groupBox_activities_clicked();

    void on_groupBox_activities_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
     void reading_data();
    void setup_spinbox();
  qint32 id=0;
    qint8 result;
    QString name;
       qint8 age;
     qint8 math,science,english;
     bool ok;


    QString gender;
    QStringList activities={};
    QString acivity_music="";
    QString acivity_art="";
    QString acivity_sport="";
    QString acivity_programing="";
    QString acivity_reading="";



};
#endif // MAINWINDOW_H
