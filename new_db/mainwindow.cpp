#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <string>
#include <iostream>
#include "globals.h"
#include "dialog.h"







MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);


    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("test");
    db.setUserName("sasik");
    db.setPassword("123");
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\Database1.mdb");
    if (db.open()) {
        ui->label->setText("Successeful connected");

    }
    else{
        ui->label->setText("Error connect");
    }
    mModel = new QSqlTableModel(this);
    mModel->setTable("noname");
    mModel->select();
    ui->tableView->setModel(mModel);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_clicked()
{
    mModel->setTable("noname");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void MainWindow::on_radioButton_2_clicked()
{
    mModel->setTable("info");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void MainWindow::on_radioButton_3_clicked()
{
    mModel->setTable("res");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void MainWindow::on_pbAdd_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void MainWindow::on_pbDel_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
}

void MainWindow::on_pbRes_clicked()
{
    if(min < 2 && max > -1){
        ui->checkBox->setChecked(false);
        QSqlQuery quest;
        quest.prepare("INSERT INTO info (directions, experts, coupe, max, min) VALUES (?, ?, ?, ?, ?)");
        quest.addBindValue(ui->sbS->text());
        quest.addBindValue(ui->sbExp->text());
        quest.addBindValue(ui->CountExp->value());
        quest.addBindValue(QString::number(max));
        quest.addBindValue(QString::number(min));
        quest.exec();
        max = -1;
        min = 2;
        mModel->select();
    }
    else mModel->select();
}

void MainWindow::on_sbExp_valueChanged(int arg1)
{
    int z = (arg1 * (arg1 - 1)) / 2;
    QString a = QString::number(z);
    ui->CountExp->display(z);
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{


    QSqlQuery quest;
    int j, k, t = 1;
    int **arr;
    j = ui->sbExp->text().toInt();
    k = ui->sbS->text().toInt();
    arr = new int*[j];
    for (int i = 0; i < j; i++) arr[i] = new int[k];

    for (int i = 0; i < j; i++){
        QString a = "";
        CountForExp = 1;
        for (int m = 0; m < k; m++){
            Dialog dial;
            dial.num = QString::number(CountForExp);
            dial.setModal(true);
            dial.exec();
            arr[i][m] = dial.str().toInt();
            if(m == (k - 1))  a += dial.str();
            else a += dial.str() + ", ";
            CountForExp++;
        }
        quest.prepare("INSERT INTO res (code, rate) VALUES (?, ?)");
        quest.addBindValue(t);
        quest.addBindValue(a);
        quest.exec();
        t++;
    }
    int count, trueCount = 0, helper = 999999999, sas = 0;
    double *counter;
    counter = new double[j*k];
min = 2;
max = -1;
    for(int i = 0; i < j - 1; i++){
        int tmp = j - (i + 1), mnoj = 1 + i;
        while(tmp){
            trueCount = 0;
            count = 0;
            for(int m = 0; m < k; m++){
                int tmp2 = arr[i][m] - arr[mnoj][m];

                if(arr[i][m] != -1 && arr[mnoj][m] != -1){
                    if(abs(tmp2) == 10 || tmp2 == 0)   count++;
                    if (count > helper) count = helper;
                    trueCount++;
                }
            }
            if (helper >= count) helper = count;
            if (trueCount != 0) {
                counter[sas] = double(count)/double(trueCount);
                if (counter[sas] > max) max = counter[sas];
                if (counter[sas] < min) min = counter[sas];
                sas++;
                tmp--;
                mnoj++;
            }
            else {
                tmp--;
                mnoj++;
            }
        }
    }
    for(int i = 0; i < j - 1; i++){
        int tmp = j - (i + 1), mnoj = 1 + i;
        while(tmp){
            trueCount = 0;
            count = 0;
            for(int m = 0; m < k; m++){
                int tmp2 = arr[i][m] - arr[mnoj][m];

                if(arr[i][m] != -1 && arr[mnoj][m] != -1){
                    if(abs(tmp2) == 10 || tmp2 == 0)   count++;
                    if (count > helper) count = helper;
                    trueCount++;
                }
            }
            if (helper >= count) helper = count;
            if (trueCount != 0) {
                counter[sas] = double(count)/double(trueCount);
                if (counter[sas] > max) max = counter[sas];
                if (counter[sas] < min) min = counter[sas];
                sas++;
                tmp--;
                mnoj++;
            }
            else {
                tmp--;
                mnoj++;
            }
        }
    }
}











void MainWindow::on_checkBox_toggled(bool checked)
{
    if(checked == true) ui->pushButton_2->setEnabled(true);
    else ui->pushButton_2->setEnabled(false);
}
