#include "investigation.h"
#include "ui_investigation.h"
#include"administrator.h"
#include<QMessageBox>
#include<QString>
#include<QTextStream>

QTextStream out(stdout);

QString batchNo,caseType,offName,offSurn,offGend,offAge;
QString victName,victSurn,victGend,victAge;
QString violation,locName,locAdd,city,date,time1;


Investigation::Investigation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Investigation)
{
    ui->setupUi(this);
}

Investigation::~Investigation()
{
    delete ui;
}

void Investigation::on_pushButton_clicked()
{


     batchNo=ui->batch_no->text();
     caseType=ui->case_no->text();
     offName=ui->off_name->text();
     offSurn=ui->off_surname->text();
     offGend=ui->off_gender->text();
     offAge=ui->off_age->text();
     victName=ui->vict_name->text();
     victSurn=ui->vict_surname->text();
     victGend=ui->vict_gender->text();
     victAge=ui->vict_age->text();
     violation=ui->violation->text();
     locName=ui->location_name->text();
     locAdd=ui->location_add->text();
     city=ui->city->text();
     date=ui->date->text();
     time1=ui->time->text();


     QSqlDatabase mydb2=QSqlDatabase::addDatabase("QSQLITE");
     mydb2.setDatabaseName("G:\\Project\\mydatabase.sqlite");

     if(mydb2.open())
     {

         qDebug()<<"connected"<<endl;
         QSqlQuery qry;
         qry.prepare("insert into investigation (batch,type,offName,offSurname,offGender,offAge,victName,victSurname,victGender,victAge,violation,locName,locAddress,city,date,time) values ('"+batchNo+"','"+caseType+"','"+offName+"','"+offSurn+"','"+offGend+"','"+offAge+"','"+victName+"','"+victSurn+"','"+victGend+"','"+ victAge+"','"+violation+"','"+locName+"','"+locAdd+"','"+city+"','"+date+"','"+time1+"')");

         if(qry.exec())
         {
             QMessageBox::information(this,"Information system","Information has been saved successfully");
         }
         else
         QMessageBox::information(this,"Information system","Failed to saved information");

     }
     else
         QMessageBox::information(this,"Information system","Failed to access database");
    this->close();
    Administrator *adm;
    adm=new Administrator(this);
    adm->open();
}


void Investigation::on_pushButton_2_clicked()
{
    this->close();
    Administrator *adm1;
    adm1=new Administrator(this);
    adm1->open();

}
