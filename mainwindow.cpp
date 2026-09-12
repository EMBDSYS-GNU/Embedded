#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"statistispage.h"
#include"loginpage.h"
#define MAX_GRADE 20
#define MIN_GRADE 0
#define MAX_AGE 50
#define MIN_AGE 5

void MainWindow::setup_spinbox(){
    ui->spinBox_age->setMaximum(MAX_AGE);
    ui->spinBox_age->setMinimum(MIN_AGE);
    ui->spinBox_math->setMaximum(MAX_GRADE);
    ui->spinBox_math->setMinimum(MIN_GRADE);
    ui->spinBox_science->setMaximum(MAX_GRADE);
    ui->spinBox_science->setMinimum(MIN_GRADE);
    ui->spinBox_english->setMaximum(MAX_GRADE);
    ui->spinBox_english->setMinimum(MIN_GRADE);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setup_spinbox();

    // checkable groupboxes need setChecked(true) or their children get disabled
    ui->groupBox_activities->setCheckable(true);
    ui->groupBox_activities->setChecked(true);
    ui->groupBox_gender->setCheckable(true);
    ui->groupBox_gender->setChecked(true);



}



void MainWindow::reading_data()
{
    id = ui->lineEdit_id->text().toInt(&ok);
    if(ui->lineEdit_id->text().isEmpty()){
        QMessageBox::information(this,"alert","field is empty");
    }else{
    qDebug() <<"id from textline"<<id;
    name = ui->lineEdit_name->text();
    age = ui->spinBox_age->text().toInt(&ok);
    math = ui->spinBox_math->text().toInt(&ok);
    science = ui->spinBox_science->text().toInt(&ok);
    english = ui->spinBox_english->text().toInt(&ok);
    result=math+science+english;

    if(ui->radioButton_fema->isChecked()) gender = "female";
    if(ui->radioButton_male->isChecked()) gender = "male";
    activities.clear();   // reset before rebuilding, so old selections don't linger
    if(ui->checkBox_Sport->isChecked())      activities.append("sport");
    if(ui->checkBox_art->isChecked())        activities.append("art");
    if(ui->checkBox_music->isChecked())      activities.append("music");
    if(ui->checkBox_programing->isChecked()) activities.append("programing");
    if(ui->checkBox_reading->isChecked())    activities.append("reading");

    qDebug() << activities;
}

}
 MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    reading_data();

    if (ui->lineEdit_id->text().isEmpty())
        return;   // reading_data() already warned about this

    // ---- check for duplicate ID before adding ----
    for (int r = 0; r < ui->tableWidget->rowCount(); r++)
    {
        QTableWidgetItem *idItem = ui->tableWidget->item(r, 0); // assuming column 0 = id
        if (idItem && idItem->text().toInt() == id)
        {
            QMessageBox::warning(this, "Duplicate ID",
                                 "This ID already exists in the table.");
            return;   // stop, don't insert a duplicate row
        }
    }

    // ---- append at the end, not at position `id` ----
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    for (auto c = 0; c < ui->tableWidget->columnCount(); c++)
    {
        QTableWidgetItem *item = new QTableWidgetItem();
        switch (c) {
       // case 0: item->setData(Qt::DisplayRole, id); break;        // id is now a column, not a row index
        case 0: item->setData(Qt::DisplayRole, name); break;
        case 1: item->setData(Qt::DisplayRole, age); break;
        case 2: item->setData(Qt::DisplayRole, gender); break;
        case 3: item->setData(Qt::DisplayRole, activities.join(", ")); break;
        case 4: item->setData(Qt::DisplayRole, math); break;
        case 5: item->setData(Qt::DisplayRole, science); break;
        case 6: item->setData(Qt::DisplayRole, english); break;
        case 7: item->setData(Qt::DisplayRole, result); break;
        default: break;
        }
        ui->tableWidget->setItem(row, c, item);
    }

    // ---- clear inputs after a successful add ----
    ui->lineEdit_id->clear();
    ui->lineEdit_name->clear();
    setup_spinbox();

}

void MainWindow::on_spinBox_age_valueChanged(int arg1)
{
}

void MainWindow::on_groupBox_activities_clicked()
{
   // reading_data();   // re-read current checkbox states first

 /*   if (activities.isEmpty()) {
        QMessageBox::information(this, "Activities", "No activities selected.");
    } else {
        QMessageBox::information(this, "Activities", activities.join(", "));
    }*/
}
void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButtons reply;
    int current_row = ui->tableWidget->currentRow();
    reply =QMessageBox::warning(this,"Confirm delete","Are you sure",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
    if (current_row != -1) {
        ui->tableWidget->removeRow(current_row);

    }}
    else{

    }
}


void MainWindow::on_pushButton_3_clicked()
{
    for(int i=0;i<=ui->tableWidget->rowCount();i++){
        if (i != -1) {
            ui->tableWidget->removeRow(i);
        }

    }
}

//goto statstic
void MainWindow::on_pushButton_4_clicked()
{




    statistispage *s=new statistispage(id, result,name, age, math,
                                         science,  english,this);

this->hide();
s->show();
}

//save button
void MainWindow::on_pushButton_6_clicked()
{

    QFile File("student.txt");
    if(File.open(QIODevice::Truncate|QIODevice::ReadWrite))
    {
        QTextStream stream(&File);
        stream<<"name:"<<name<<"\n";
        stream<<"age:"<<age<<"\n";
        stream<<"math:"<<math<<"\n";
        stream<< "science:"<<science<<"\n";
        stream<<"english:"<<english<<"\n";
        stream<<"result:"<<result<<"\n";
        stream<<"activities:" <<activities.join(",")<<"\n";
    }
}

//load buton
void MainWindow::on_pushButton_7_clicked()
{  QFile file("student.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Cannot open file";
        return;
    }

    QTextStream in(&file);

    QMap<QString, QString> data;

    while (!in.atEnd())
    {
        QString line = in.readLine();

        QStringList parts = line.split(":");

        if (parts.size() == 2)
        {
            QString key = parts[0].trimmed();
            QString value = parts[1].trimmed();

            data[key] = value;
        }
    }

    file.close();

    qDebug() << "Name:" << data["name"];
    qDebug() << "Age:" << data["age"];
    qDebug() << "Math:" << data["math"];
    qDebug() << "Science:" << data["science"];
    qDebug() << "English:" << data["english"];
    qDebug() << "Result:" << data["result"];
    qDebug() << "Activities:" << data["activities"];
    name=data["name"];
    age=data["age"].toInt(&ok);
    math=data["math"].toInt(&ok);
    science=data["science"].toInt(&ok);
    english=data["english"].toInt(&ok);
    result=data["result"].toInt(&ok);
    activities.join(",")=data["activities"];
    // ---- append at the end, not at position `id` ----
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    for (auto c = 0; c < ui->tableWidget->columnCount(); c++)
    {
        QTableWidgetItem *item = new QTableWidgetItem();
        switch (c) {
            // case 0: item->setData(Qt::DisplayRole, id); break;        // id is now a column, not a row index
        case 0: item->setData(Qt::DisplayRole, name); break;
        case 1: item->setData(Qt::DisplayRole, age); break;
        case 2: item->setData(Qt::DisplayRole, gender); break;
        case 3: item->setData(Qt::DisplayRole, activities.join(", ")); break;
        case 4: item->setData(Qt::DisplayRole, math); break;
        case 5: item->setData(Qt::DisplayRole, science); break;
        case 6: item->setData(Qt::DisplayRole, english); break;
        case 7: item->setData(Qt::DisplayRole, result); break;
        default: break;
        }
        ui->tableWidget->setItem(row, c, item);
    }

    // ---- clear inputs after a successful add ----
    ui->lineEdit_id->clear();
    ui->lineEdit_name->clear();
    setup_spinbox();
}


//logout
void MainWindow::on_pushButton_8_clicked()
{this->hide();
    loginpage *l=new loginpage();
    l->show();

}

