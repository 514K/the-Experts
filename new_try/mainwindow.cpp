#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include "dialog3.h"
#include "globals.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_3->setWordWrap(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString str;
    Iterator = ui->spinBox->value() - 1;
    Dialog dial;
    dial.exec();
    NameCode = 1;


    db.close();
    db.removeDatabase("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\new_try.mdb");
    qDebug() << db.open();
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("test");
    db.setUserName("sasik");
    db.setPassword("123");
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ=\\new_try.mdb");
    if (db.open()) {


        int exp, dir;
        exp = ui->spinBox->value();
        dir = ui->spinBox_2->value();

        QSqlQuery Information;
        Information.prepare("INSERT INTO Information (all_directions, all_experts) VALUES (?, ?)");
        Information.addBindValue(dir);
        Information.addBindValue(exp);
        Information.exec();
        Information.prepare("INSERT INTO Information (all_directions, all_experts) VALUES (?, ?)");
        Information.addBindValue(" ");
        Information.addBindValue(" ");
        Information.exec();
        int *mans, *quests;
        mans = new int[exp];
        quests = new int[dir];
        for (int i = 0; i < exp; i++) mans[i] = i + 1;
        for (int i = 0; i < dir; i++) quests[i] = i + 1;

        int **arr = new int*[dir]();
        for (int i = 0; i < exp; i++) arr[i] = new int[dir]();

        for (int i = 0; i < ui->spinBox->value(); i++){
            NofExp = i + 1;
            int helper = 0;
            QSqlQuery Answers; QString str1;
            Answers.prepare("INSERT INTO Answers (Code, Answers) VALUES (?, ?)");
            Answers.addBindValue(QString::number(i + 1));
            for (int j = 0; j < ui->spinBox_2->value(); j++){
                NofQuest = j + 1;
                Dialog2 dial;
                dial.exec();
                if (dial.YN() == true) {
                    arr[i][helper] = j + 1;
                    str1 += QString::number(j + 1) + ", ";
                    helper++;
                }
            }
            str1.remove(str1.length() - 2, 1);
            Answers.addBindValue(str1);
            Answers.exec();
        }



        bool BreackCounter = true;
        while(BreackCounter)
        {
            int *T, denum = 0;
            T = new int[exp]();
            for (int i = 0; i < exp; i++){
                for (int j = 0; j < dir; j ++){
                    if (arr[i][j] != 0) {
                        T[i]++;
                        denum++;
                    }
                }
            }

            int countNew = 0, countOld = 0;
            for (int i = 0; i < exp; i++){
                if (T[i] != 0) countOld++;
            }
            for (int i = 0; i < exp; i++){
                for (int ii = 0; ii < exp; ii++){
                    if (T[i] != 0 && T[ii] != 0 && T[i] == T[ii]) countNew++;
                }
            }
            if (countOld * countOld == countNew) BreackCounter = false;

            int countE = 0;
            if (BreackCounter == false){
                for (int i = 0; i < exp; i++) {
                    if (mans[i] != 0) countE++;
                }
                QSqlQuery result; QString str2, str3;
                result.prepare("INSERT INTO result (Min_Experts, Min_Quests) VALUES (?, ?)");

                str = "Можно сделать вывод, что для ответа на " + QString::number(dir) + " вопроса(ов),\nиз "+ QString::number(exp) + " экспертов достаточно только " + QString::number(countE) + ":  ";
                for (int i = 0; i < exp; i++) {
                    if (T[i] != 0 && i != exp) {
                        str += QString::number(i + 1);
                        str2 += QString::number(i + 1) + ", ";
                        for (int j = i; j < exp; j++){
                            if (T[j] != 0 && j != exp - 1) str += ", ";
                        }
                    }
                }
                str.remove(str.length() - 2, 1);
                str2.remove(str2.length() - 2, 1);
                result.addBindValue(str2);
                str += "\n";
                str += "Номер(а) этого(их) вопроса(ов): ";
                for (int i = 0; i < dir; i++) {
                    if (quests[i] != 0) {
                        str += QString::number(quests[i]) + " ";
                        str3 += QString::number(quests[i]) + ", ";
                    }
                }
                str3.remove(str3.length() - 2, 1);
                result.addBindValue(str3);
                result.exec();
                ui->label_3->setText(str);
                delete []T;
                break;
            }

            int minI = 0;
            double *p = new double[exp](), min = 1;
            for (int i = 0; i < exp; i++){
                p[i] = double(T[i]) / double(denum);
                if (p[i] < min && p[i] > 0) {
                    min = p[i];
                    minI = i;
                }
            }

            for (int i = 0; i < dir; i++){
                for (int ii = 0; ii < dir; ii++){
                    if (arr[minI][i] == quests[ii]) quests[ii] = 0;
                }
            }

            for (int j = 0; j < dir; j++) arr[minI][j] = 0;

            int count = 0;
            for (int i = 0; i < exp; i++){
                for (int j = 0; j < dir; j++){
                    for (int jj = 0; jj < dir; jj++){
                        if (arr[i][j] == quests[jj]) count++;
                    }
                    if (count > 0){}
                    else arr[i][j] = 0;
                    count = 0;
                }
            }

            mans[minI] = 0;

            delete []p;
            delete []T;

        }

        for (int i = 0; i < exp; i++) delete []arr[i];
        delete []arr;
        delete []mans;
        delete []quests;
    }
    else{
        ui->label_3->setText("Error connect");
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    db.close();
    db.removeDatabase(db.connectionName());
    Dialog3 dial;
    dial.exec();
}
