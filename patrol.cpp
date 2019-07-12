#include "patrol.h"
#include "ui_patrol.h"
#include<QMessageBox>
#include<QString>


QString batch,locName1,locAdd1,city1,date1,timeFrom,timeTo;

Patrol::Patrol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Patrol)
{
    ui->setupUi(this);
}

Patrol::~Patrol()
{
    delete ui;
}

void Patrol::on_pushButton_2_clicked()
{
    Administrator *administ=new Administrator();
    this->hide();
    administ->show();
}

void Patrol::on_save_clicked()
{
    batch=ui->batch_no->text();
    locName1=ui->location_name->text();
    locAdd1=ui->location_add->text();
    city1=ui->city->text();
    date1=ui->date->text();
    timeFrom=ui->time->text();
    timeTo=ui->time_to->text();


    QSqlDatabase mydb1=QSqlDatabase::addDatabase("QSQLITE");
    mydb1.setDatabaseName("G:\\Project\\mydatabase.sqlite");

    if(mydb1.open())
    {
        qDebug()<<"connected"<<endl;
        QSqlQuery qry;
        qry.prepare("insert into patrol (batch,locName,locAddress,city,date,timeFrom,timeTo) values ('"+batch+"','"+locName1+"','"+locAdd1+"','"+city1+"','"+date1+"','"+timeFrom+"','"+timeTo+"')");

        if(qry.exec())
        {
            QMessageBox::information(this,"Information system","Information has been saved successfully");
        }
        else
        QMessageBox::information(this,"Information system","Failed to saved information");




    }
    else
        QMessageBox::information(this,"Information system","Failed to access database");


    Administrator *admins=new Administrator();
    this->hide();
    admins->show();
}
