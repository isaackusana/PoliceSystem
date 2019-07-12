#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include"mainwindow.h"
#include"administrator.h"


namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_saveBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
