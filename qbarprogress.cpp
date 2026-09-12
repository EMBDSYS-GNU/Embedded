#include "qbarprogress.h"
#include "ui_qbarprogress.h"
#include<QThread>
#include"mainwindow.h"
qbarprogress::qbarprogress(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qbarprogress)
{
    ui->setupUi(this);
      show();
    ui->myprogressBar->setMaximum(100);
    ui->myprogressBar->setMinimum(0);
    MainWindow *mainptr=new MainWindow();
ui->connecting_label->setVisible(true);
      ui->loading_label->setVisible(false);
            ui->preparing_label->setVisible(false);
              ui->almost_reading_label->setVisible(false);
                        ui->Complete_label->setVisible(false);
              //qbarprogress *progress=new qbarprogress()
    for(auto value=ui->myprogressBar->minimum();value<=ui->myprogressBar->maximum();value++)
    {
        ui->myprogressBar->setValue(value);
        ui->percentage_label->setText(QString::number(value)+"%");
         QThread::msleep(30);
       qApp->processEvents(QEventLoop::AllEvents);
         switch (value) {
         case 30:
              ui->loading_label->setVisible(true);
             break;
         case 60:
              ui->preparing_label->setVisible(true);
             break;
         case 80:
              ui->almost_reading_label->setVisible(true);
             break;
         case 90:
              ui->Complete_label->setVisible(true);
               break;
         case 100:
             this->hide();
              mainptr->show();

             break;
         default:
             break;
         }
    }

}

qbarprogress::~qbarprogress()
{
    delete ui;
}
