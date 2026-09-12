#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "mainwindow.h"
namespace Ui {
class loginpage;
}

class loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);

    ~loginpage();
private slots:
    void on_login_pushButton_clicked();

private:
    Ui::loginpage *ui;
   void logintohome();

};

#endif // LOGINPAGE_H
