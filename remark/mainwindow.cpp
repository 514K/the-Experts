#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "dialog.h"
#include "dialog_2.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(1);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("test");
    db.setUserName("sasik");
    db.setPassword("123");
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\remark.mdb");
    if (db.open()) {
        ui->label->setText("Successeful connected");

    }
    else{
        ui->label->setText("Error connect");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString surname, first_name, second_name, phone, educ, qual;
    surname = ui->lineEdit->text();
    first_name = ui->lineEdit_2->text();
    second_name = ui->lineEdit_3->text();
    phone = ui->lineEdit_4->text();
    educ = ui->lineEdit_5->text();
    qual = ui->lineEdit_6->text();

    float *P_H, *P_h;
    P_H = new float[ui->spinBox->value()];
    P_h = new float[ui->spinBox->value()];
    float denominator = 0.0;
    for (int i = 0; i < ui->spinBox->value(); i++){
        Dialog dial;
        dial.exec();
        dial.val();
        P_H[i] = dial.val().toFloat() / 100;
    }
    count = 1;
    for (int i = 0; i < ui->spinBox->value(); i++){
        Dialog_2 dial;
        dial.exec();
        dial.val();
        P_h[i] = dial.val().toFloat() / 100;
        denominator += P_h[i] * P_H[i];
    }
    count = 1;
    for (int i = 0; i < ui->spinBox->value(); i++){
        float tmp = P_H[i] * P_h[i];
        QString str;
        QSqlQuery ask;
        ask.prepare("INSERT INTO equiv (Ver_hyp, Ver_sob) VALUES (?, ?)");
        ask.addBindValue(str.setNum(tmp));
        tmp = round(tmp / denominator * 100) / 100;
        ask.addBindValue(str.setNum(tmp));
        ask.exec();
    }
    QSqlQuery ask;
    ask.prepare("INSERT INTO equiv (Ver_hyp, Ver_sob) VALUES (?, ?)");
    ask.addBindValue(" - ");
    ask.addBindValue(" - ");
    ask.exec();
    ask.prepare("INSERT INTO Info (surname, first_name, patronymic, phone, education, qual) VALUES (?, ?, ?, ?, ?, ?)");
    ask.addBindValue(surname);
    ask.addBindValue(first_name);
    ask.addBindValue(second_name);
    ask.addBindValue(phone);
    ask.addBindValue(educ);
    ask.addBindValue(qual);
    ask.exec();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}
