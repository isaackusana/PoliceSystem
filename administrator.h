#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QDialog>
#include"login.h"
#include"officer.h"
#include"mainwindow.h"
#include"investigation.h"
#include"patrol.h"
#include"register.h"
#include"court.h"

namespace Ui {
class Administrator;
}

class Administrator : public QDialog
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = 0);
    ~Administrator();

private slots:
    void on_pushButton_2_clicked();

   // void on_pushButton_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_courtRoll_clicked();

private:
    Ui::Administrator *ui;
};

#endif // ADMINISTRATOR_H
