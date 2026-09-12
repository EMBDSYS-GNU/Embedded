#include "statistispage.h"
#include "ui_statistispage.h"
#include <QDebug>
#include"mainwindow.h"
statistispage::statistispage(
    qint32 id,
    qint8 result,
    const QString &name,
    qint8 age,
    qint8 math,
    qint8 science,
    qint8 english,
    QWidget *parent
    )
    : QMainWindow(parent)
    , ui(new Ui::statistispage)
    , id(id)
    , result(result)
    , name(name)
    , age(age)
    , math(math)
    , science(science)
    , english(english)
{
    ui->setupUi(this);

    qDebug() << "ID:" << id;
    qDebug() << "Name:" << name;
    qDebug() << "Age:" << age;
    qDebug() << "Math:" << math;
    qDebug() << "Science:" << science;
    qDebug() << "English:" << english;
    qDebug() << "Result:" << result;

    QString text;

    text += "Name: " + name + "\n";
    text += "Age: " + QString::number(age) + "\n";
    text += "Math: " + QString::number(math) + "\n";
    text += "Science: " + QString::number(science) + "\n";
    text += "English: " + QString::number(english) + "\n";
    text += "Result: " + QString::number(result);

    ui->label->setText(text);
    MainWindow *ptr=new MainWindow();
    ptr->show();
}

statistispage::~statistispage()
{
    delete ui;
}