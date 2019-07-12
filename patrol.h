#ifndef PATROL_H
#define PATROL_H

#include <QDialog>
#include"officer.h"
#include"administrator.h"

namespace Ui {
class Patrol;
}

class Patrol : public QDialog
{
    Q_OBJECT

public:
    explicit Patrol(QWidget *parent = 0);
    ~Patrol();

private slots:
    void on_pushButton_2_clicked();

    void on_save_clicked();

private:
    Ui::Patrol *ui;
};

#endif // PATROL_H
