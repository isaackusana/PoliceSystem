#ifndef OFFICER_H
#define OFFICER_H

#include <QDialog>
#include"login.h"
#include"mainwindow.h"
#include<QDebug>

namespace Ui {
class Officer;
}

class Officer : public QDialog
{
    Q_OBJECT

public:
    explicit Officer(QWidget *parent = 0);
    ~Officer();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_investigationView_clicked();

    void on_courtView_clicked();

    void on_patrolView_clicked();

private:
    Ui::Officer *ui;
};

#endif // OFFICER_H
