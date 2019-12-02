#include "dialog.h"
#include "ui_dialog.h"
#include "global.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText("Введите степень уверенности для события " + QString::number(count));
    count++;
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::val()
{
    return ui->lineEdit->text();
}

void Dialog::on_pushButton_clicked()
{

    QWidget::close();
}
