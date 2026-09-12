#include "loginpage.h"
#include "ui_loginpage.h"
#include "qbarprogress.h"
loginpage::loginpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginpage)
{

    ui->setupUi(this);
    //setWindowFlags(Qt::FramelessWindowHint);

    ui->title_label->setAlignment(Qt::AlignCenter);

    //parent->groupbox->put label widget in top inside grpbox
    QVBoxLayout *layout = new QVBoxLayout(ui->groupBox);
    ui->title_label->setAlignment(Qt::AlignCenter);
    layout->addWidget(ui->title_label, 0, Qt::AlignTop | Qt::AlignHCenter);
    ui->error_label->setAlignment(Qt::AlignCenter);
    layout->addWidget(ui->login_pushButton,0,Qt::AlignBottom|Qt::AlignHCenter);
    layout->addSpacing(-50);
    layout->addWidget(ui->error_label,0,Qt::AlignBottom|Qt::AlignHCenter);
    //layout->addStretch();
    layout->addSpacing(+30);
    QPalette pal1 =ui->userame_lineEdit->palette();
    pal1.setColor(QPalette::PlaceholderText, QColor("#9CA3AF"));
    ui->userame_lineEdit->setPalette(pal1);

    QPalette pal2 =ui->password_lineEdit->palette();\
        pal2.setColor(QPalette::PlaceholderText,QColor("#9CA3AF"));
    ui->password_lineEdit->setPalette(pal2);

}

void loginpage::logintohome(){
    QString username=ui->userame_lineEdit->text();
    QString password=ui->password_lineEdit->text();
    if(username != "admin"  || password !="123"){
        QMessageBox::warning(this,"Alert","the password or the username are wrong");
    }else{
        this->hide();
 //     qbarprogress *progress = new qbarprogress();
        qbarprogress progress ;
        progress.show();
    }
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_login_pushButton_clicked()
{
    logintohome();
}

