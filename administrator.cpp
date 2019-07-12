#include "administrator.h"
#include "ui_administrator.h"
#include<QMessageBox>
#include"mainwindow.h"
#include"login.h"
#include"investigation.h"
#include"patrol.h"

Administrator::Administrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::on_pushButton_2_clicked()
{
    this->hide();
    Login *log=new Login();
    log->show();
}



void Administrator::on_pushButton_3_clicked()
{
    this->close();
    Investigation *inv;
    inv=new Investigation(this);
    inv->open();
}



void Administrator::on_pushButton_clicked()
{
    Register *regist=new Register();
    this->hide();
    regist->show();
}

void Administrator::on_pushButton_5_clicked()
{
    Patrol *patrol_case=new Patrol();
    this->hide();
    patrol_case->show();
}

void Administrator::on_courtRoll_clicked()
{
    Court *page=new Court();
    this->hide();
    page->show();
}
