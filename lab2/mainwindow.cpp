#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_10->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_clicked()
{
    ui->label_3->setText(ui->radioButton->text());
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->label_3->setText(ui->radioButton_2->text());
}

void MainWindow::on_textEdit_textChanged()
{
    ui->label_5->setText(ui->textEdit->toPlainText());
    if (ui->label_5->text() == "flexer") ui->label_10->show();
    else ui->label_10->hide();
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->label_9->setText(arg1);
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    ui->listWidget_2->addItem(ui->listWidget->takeItem(index.row()));
}

void MainWindow::on_listWidget_2_doubleClicked(const QModelIndex &index)
{
    ui->listWidget->addItem(ui->listWidget_2->takeItem(index.row()));
}
