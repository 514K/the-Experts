#include "dialog_2.h"
#include "ui_dialog_2.h"
#include "global.h"

Dialog_2::Dialog_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_2)
{
    ui->setupUi(this);
    ui->label->setText("Введите степень уверенности для события " + QString::number(count));
    count++;
}

Dialog_2::~Dialog_2()
{
    delete ui;
}

QString Dialog_2::val()
{
    return ui->lineEdit->text();
}

void Dialog_2::on_pushButton_clicked()
{
    QWidget::close();
}
