#include "dialog3.h"
#include "ui_dialog3.h"

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
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
    mModel = new QSqlTableModel(this);
    mModel->setTable("Answers");
    mModel->select();
    ui->tableView->setModel(mModel);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_radioButton_clicked()
{
    mModel->setTable("Answers");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void Dialog3::on_radioButton_2_clicked()
{
    mModel->setTable("Information");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void Dialog3::on_radioButton_3_clicked()
{
    mModel->setTable("Name_Expert");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void Dialog3::on_radioButton_4_clicked()
{
    mModel->setTable("result");
    mModel->select();
    ui->tableView->setModel(mModel);
}

void Dialog3::on_pushButton_2_clicked()
{
    mModel->select();
}

void Dialog3::on_pushButton_clicked()
{
    db.close();
    db.removeDatabase("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\new_try.mdb");
    QWidget::close();
}
