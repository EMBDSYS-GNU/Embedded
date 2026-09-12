//#include "mainwindow.h"


#include "loginpage.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginpage l;
    //MainWindow w;
    l.show();
    return QApplication::exec();
}
