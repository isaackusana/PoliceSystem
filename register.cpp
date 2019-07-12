#include "register.h"
#include "ui_register.h"
#include<QString>
#include<QMessageBox>
#include<QDebug>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->userVerify->setText("*use batch NO");
    ui->num_verify->setText("use country code(e.g: +27)");
}

Register::~Register()
{
    delete ui;
}

void Register::on_saveBtn_clicked()
{
    QString userNm,name,surname;
    QString password,password1;
    QString email,number;



        userNm = ui->user_line->text();
        name = ui->name_line->text();
        surname = ui->surname_line->text();
        password = ui->password_line->text();
        password1 = ui->password_edit->text();
        email = ui->email_line->text();
        number = ui->cell_line->text();




        if(userNm!="" && name!="" && surname!="" && email!="" && password!="")
        {

             ui->nameVerify->setText("");
             ui->snVerify->setText("");
             ui->emailVerify->setText("");
             ui->passVerify->setText("");


            if(password != password1)
            {

                ui->match->setText("*passwords do not match");

            }
            else
            {
               if((email.contains("@") && email.contains(".com"))||(email.contains("@") && email.contains(".co.za")))
               {

                    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
                    mydb.setDatabaseName("G:\\Project\\mydatabase.sqlite");

                    if(mydb.open())
                    {
                        qDebug()<<"connected"<<endl;
                        QSqlQuery qry;
                        qry.prepare("insert into police (name,surname,email,password,contact,batch) values ('"+name+"','"+surname+"','"+email+"','"+password+"','"+number+"','"+userNm+"')");

                        if(qry.exec())
                        {
                            QMessageBox::information(this,"Information system","Information has been saved successfully");
                        }
                        else
                        QMessageBox::information(this,"Information system","Failed to saved information");

                    }
                    else
                        QMessageBox::information(this,"Information system","Failed to access database");
               }
               else
               {
                    ui->emailVerify->setText("invalid email");
               }
            }
        }
        else
        {
            if(ui->user_line->text()=="")
                ui->userVerify->setText("*field empty");
            else
                ui->userVerify->setText("");

            if(ui->name_line->text()=="")
                ui->nameVerify->setText("*field empty");
            else
                 ui->nameVerify->setText("");

            if(ui->surname_line->text()=="")
                ui->snVerify->setText("*field empty");
            else
                 ui->snVerify->setText("");

            if(ui->email_line->text()=="")
                ui->emailVerify->setText("*field empty");
            else
                 ui->emailVerify->setText("");

            if(ui->password_line->text()=="")
                ui->passVerify->setText("*field empty");
            else
                ui->passVerify->setText("");
            if(ui->cell_line->text()=="")
                ui->num_verify->setText("*field empty");
            else
                ui->num_verify->setText("");
        }

    }



void Register::on_cancelBtn_clicked()
{
    this->hide();
    Administrator *admin=new Administrator();
    admin->show();
}
