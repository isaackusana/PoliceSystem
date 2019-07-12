#ifndef INVESTIGATION_H
#define INVESTIGATION_H

#include <QDialog>
#include"administrator.h"
namespace Ui {
class Investigation;
}

class Investigation : public QDialog
{
    Q_OBJECT

public:
    explicit Investigation(QWidget *parent = 0);
    ~Investigation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Investigation *ui;
};

#endif // INVESTIGATION_H
