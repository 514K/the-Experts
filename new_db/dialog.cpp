#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QDebug>
#include "globals.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString a;
    a = "Введите исследование №";
    a += QString::number(CountForExp);
    a += " для эксперта №";
    if(CountForExp == 1) {
        the_expert ++;
    }
    a += QString::number(the_expert);
    ui->label->setText(a);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::str()
{
    return ui->lineEdit->text();
}


