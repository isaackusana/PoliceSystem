#include "court.h"
#include "ui_court.h"
#include<QMessageBox>
#include<QString>

QString batch2,locName2,locAdd2,city2,date2,time2,name,number;


Court::Court(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Court)
{
    ui->setupUi(this);
}

Court::~Court()
{
    delete ui;
}

void Court::on_pushButton_2_clicked()
{
    Administrator *admin=new Administrator();
    this->hide();
    admin->show();
}

void Court::on_pushButton_clicked()
{
    batch2=ui->batch_no->text();
    locName2=ui->location_name->text();
    locAdd2=ui->location_add->text();
    city2=ui->city->text();
    date2=ui->date->text();
    time2=ui->time->text();
    name=ui->case_name->text();
    number=ui->case_num->text();


    QSqlDatabase mydb2=QSqlDatabase::addDatabase("QSQLITE");
    mydb2.setDatabaseName("G:\\Project\\mydatabase.sqlite");

    if(mydb2.open())
    {

        qDebug()<<"connected"<<endl;
        QSqlQuery qry;
        qry.prepare("insert into court (batch,name,number,locName,locAddress,city,date,time) values ('"+batch2+"','"+name+"','"+number+"','"+locName2+"','"+locAdd2+"','"+city2+"','"+date2+"','"+time2+"')");

        if(qry.exec())
        {
            QMessageBox::information(this,"Information system","Information has been saved successfully");
        }
        else
        QMessageBox::information(this,"Information system","Failed to saved information");
    }
    else
        QMessageBox::information(this,"Information system","Failed to access database");



    Administrator *admin=new Administrator();
    this->hide();
    admin->show();
}
