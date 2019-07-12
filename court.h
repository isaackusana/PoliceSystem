#ifndef COURT_H
#define COURT_H

#include <QDialog>
#include"mainwindow.h"

namespace Ui {
class Court;
}

class Court : public QDialog
{
    Q_OBJECT

public:
    explicit Court(QWidget *parent = 0);
    ~Court();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Court *ui;
};

#endif // COURT_H
