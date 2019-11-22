#include "dialog2.h"
#include "ui_dialog2.h"
#include "globals.h"
#include "mainwindow.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    MainWindow wind;
    QString str;
    str = "Эксперт " + QString::number(NofExp) + " ответил на вопрос " + QString::number(NofQuest);
    ui->label->setText(str);
}

Dialog2::~Dialog2()
{
    delete ui;
}

bool Dialog2::YN()
{
    return YN_answ;
}

void Dialog2::on_Yes_clicked()
{
    YN_answ = true;
    QWidget::close();
}

void Dialog2::on_No_clicked()
{
    YN_answ = false;
    QWidget::close();
}
