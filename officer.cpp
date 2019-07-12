#include "officer.h"
#include "ui_officer.h"
#include<QString>
#include<QMessageBox>




Officer::Officer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Officer)
{
    ui->setupUi(this);
    ui->courtView->setEnabled(false);
    ui->investigationView->setEnabled(false);
    ui->patrolView->setEnabled(false);
}

Officer::~Officer()
{
    delete ui;
}

void Officer::on_pushButton_clicked()
{
    this->hide();
    Login *login1=new Login();
    login1->show();
}


void Officer::on_pushButton_2_clicked()
{
 QString line=ui->edit->text();

 if(line!="")
 {
     QSqlDatabase mydb3=QSqlDatabase::addDatabase("QSQLITE");
     mydb3.setDatabaseName("G:\\Project\\mydatabase.sqlite");

     if(mydb3.open())
     {
         //checking investigation case
         QSqlQuery qry;
         qry.prepare("select * from investigation where batch='"+line+"'");

         if(qry.exec())
         {
             int count=0;
             while(qry.next())
             {
                 count++;
             }
             if(count==1)
             {
                 ui->investigationView->setEnabled(true);
                 ui->inv_lb->setText("Case available");

             }
             if(count<1)
             {
                 ui->investigationView->setEnabled(false);
                   ui->inv_lb->setText(" No Case available");

             }


     }
     else
         {
         QMessageBox::information(this,"Information system","Failed to access the database");
         }

//checking court case
         QSqlQuery qry1;
         qry1.prepare("select * from court where batch='"+line+"'");

         if(qry1.exec())
         {
             int count=0;
             while(qry1.next())
             {
                 count++;
             }
             if(count==1)
             {
                 ui->courtView->setEnabled(true);
                 ui->court_lb->setText("Case available");

             }
             if(count<1)
             {
                    ui->courtView->setEnabled(false);
             ui->court_lb->setText(" No Case available");
           }


     }
     else
         {
         QMessageBox::information(this,"Information system","Failed to access the database");
         }

         //checking patrol case
         QSqlQuery qry2;
         qry2.prepare("select * from court where batch='"+line+"'");
         if(qry2.exec())
         {
             int count=0;
             while(qry2.next())
             {
                 count++;
             }
             if(count==1)
             {
                 ui->patrolView->setEnabled(true);
                 ui->pat_lb->setText("Case available");

             }
             if(count<1)
             {
                 ui->patrolView->setEnabled(false);
                   ui->pat_lb->setText(" No Case available");
             }


     }
     else
         QMessageBox::information(this,"Information system","Failed to access the database");

 }
     else
         QMessageBox::information(this,"Information system","Failed to access the database");

}
 else
     QMessageBox::warning(this,"Search","Please enter your batch number..!!");

}






void Officer::on_investigationView_clicked()
{
   MainWindow con;

QSqlQueryModel *model=new QSqlQueryModel();
con.conopen();
QSqlQuery *qry=new QSqlQuery(con.mydb3);

qry->prepare("select * from investigation");
qry->exec();
model->setQuery(*qry);
ui->tableView->setModel(model);

con.conclose();
}

void Officer::on_courtView_clicked()
{

MainWindow con;
    QSqlQueryModel *model=new QSqlQueryModel();
    con.conopen();
    QSqlQuery *qry=new QSqlQuery(con.mydb3);

    qry->prepare("select * from court");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    con.conclose();
}

void Officer::on_patrolView_clicked()
{
MainWindow con;


    QSqlQueryModel *model=new QSqlQueryModel();
    con.conopen();
    QSqlQuery *qry=new QSqlQuery(con.mydb3);

    qry->prepare("select * from patrol");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    con.conclose();

}
