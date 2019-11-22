#include "dialog.h"
#include "ui_dialog.h"
#include "globals.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("test");
    db.setUserName("sasik");
    db.setPassword("123");
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\new_try.mdb");
    if (db.open()) {
        ui->label->setText("Successeful connected");
    }
    else{
        ui->label->setText("Error connect");
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QSqlQuery quest;
    quest.prepare("INSERT INTO Name_Expert (Code, FIO, Education, Qualifer, Phone, Email) VALUES (?, ?, ?, ?, ?, ?)");
    quest.addBindValue(NameCode);
    quest.addBindValue(ui->lineEdit->text());
    quest.addBindValue(ui->lineEdit_2->text());
    quest.addBindValue(ui->lineEdit_3->text());
    quest.addBindValue(ui->lineEdit_4->text());
    quest.addBindValue(ui->lineEdit_5->text());
    quest.exec();
    NameCode++;
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    if (!Iterator) QWidget::close();
    Iterator--;
}
