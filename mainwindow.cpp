#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"administrator.h"
#include"officer.h"
#include"login.h"
#include<QMessageBox>
#include<QFile>
#include<QList>
#include<QString>
#include<QTextStream>






MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}






void MainWindow::on_pushButton_clicked()
{ Login *log_int;
    this->close();
    log_int=new Login(this);
    log_int->open();
}
