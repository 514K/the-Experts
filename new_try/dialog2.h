#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    bool YN_answ;
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();
    bool YN();

private slots:
    void on_Yes_clicked();

    void on_No_clicked();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
