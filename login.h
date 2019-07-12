#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include"administrator.h"
#include"officer.h"
#include"mainwindow.h"
#include"register.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void on_radioButton_2_clicked(bool checked1);

    void on_radioButton_clicked(bool checked);

private:
    Ui::Login *ui;


};

#endif // LOGIN_H
