#include "login.h"
#include "ui_login.h"
#include"administrator.h"
#include"officer.h"
#include"mainwindow.h"
#include<QFile>
#include<QString>
#include<QList>
#include<QTextStream>
#include<QMessageBox>

QString id,password,batch_no;
QString line;


bool office_status;
bool admin_status;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    this->close();
    MainWindow *wind=new MainWindow(this);
    wind->show();

}
void Login::on_pushButton_clicked()
{
   id=ui->userName_edit->text();
    password=ui->password_edit->text();
    QSqlDatabase mydb5=QSqlDatabase::addDatabase("QSQLITE");
    mydb5.setDatabaseName("G:\\Project\\mydatabase.sqlite");

    if(office_status==true)
    {
       if(mydb5.open())
        {
            QSqlQuery qry;
            qry.prepare("select * from police where batch='"+id+"' and password='"+password+"'");

            if(qry.exec())
            {
                int count=0;
                while(qry.next())
                {
                    count++;
                }
                if(count==1)
                {
                         Officer *officer_interface=new Officer(this);
                        officer_interface->show();
                        this->hide();
                }
                if(count<1)
                {
                    QMessageBox::warning(this,"Login","Invalid username or password");
                    ui->userName_edit->clear();
                    ui->password_edit->clear();
                }

            }
            else
                QMessageBox::information(this,"Information system","Failed to access database");

        }
        else
            QMessageBox::information(this,"Information system","Failed to access database");

    }else
        if(admin_status==true)
        {
            if(mydb5.open())
             {
                 QSqlQuery qry1;
                 qry1.prepare("select * from police where ID='"+id+"' and password='"+password+"'");

                 if(qry1.exec())
                 {
                     int count=0;
                     while(qry1.next())
                     {
                         count++;
                     }
                     if(count==1)
                     {
                              Administrator *officer_interface=new Administrator(this);
                             officer_interface->show();
                             this->hide();
                     }
                     if(count<1)
                     {
                         QMessageBox::warning(this,"Login","Invalid username or password");
                         ui->userName_edit->clear();
                         ui->password_edit->clear();
                     }

                 }
                 else
                     QMessageBox::information(this,"Information system","Failed to access database");

             }
             else
                 QMessageBox::information(this,"Information system","Failed to access database.....1");
        }else
            QMessageBox::warning(this,"Login","Please select user type...!!");
}






void Login::on_radioButton_2_clicked(bool checked1)
{
    office_status=false;
    admin_status=checked1;
}

void Login::on_radioButton_clicked(bool checked)
{
    admin_status=false;
    office_status=checked;
}
