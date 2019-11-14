#include "mainwindow.h"
#include "libRU1.h"
#include "libEN1.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_5->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->pushButton_8->setFlat(1);
    QString a;
    int k = int(ui->lcdNumber->value());
    k = k % 33;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()+1);
    bool a = ui->radioButton->isEnabled();
    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()+10);
    bool a = ui->radioButton->isEnabled();
    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()+100);
    bool a = ui->radioButton->isEnabled();
    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()-1);
    bool a = ui->radioButton->isEnabled();

    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()-10);
    bool a = ui->radioButton->isEnabled();
    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->value()-100);
    bool a = ui->radioButton->isEnabled();
    int k;
    if (a == false){
        k = int(ui->lcdNumber->value());
        k = k % 33;
    }
    else{
        k = int(ui->lcdNumber->value());
        k = k % 26;
    }
    ui->textEdit->append("");
    ui->textEdit->undo();
}

void MainWindow::on_textEdit_textChanged()
{
    QString str = ui->textEdit->toPlainText();
    str = str.toLower();
    bool a = ui->radioButton->isEnabled();
    bool b = ui->radioButton_2->isEnabled();
    int k;
    if (b == true){
        k = int(ui->lcdNumber->value());
        k = k % 33;
        str = prest(str,k);
    }
    if (a == true){
        k = int(ui->lcdNumber->value());
        k = k % 26;
        str = prestl(str,k);
    }
    ui->textEdit_2->setText(str);
}
