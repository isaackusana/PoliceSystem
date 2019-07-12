#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"administrator.h"
#include"officer.h"
#include"login.h"
#include<QtSql>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase mydb3;

    void conclose()
    {
        mydb3.close();
    }
    bool conopen()
    {
        mydb3=QSqlDatabase::addDatabase("QSQLITE");
        mydb3.setDatabaseName("F:\\Project\\mydatabase.sqlite");
        if(!mydb3.open())
        {
            qDebug()<<"failed to open"<<endl;
            return false;
        }
        else
        {
            qDebug()<<"openned"<<endl;
            return true;
        }

    }

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;



};

#endif // MAINWINDOW_H
