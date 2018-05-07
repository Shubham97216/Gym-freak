#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include "QMessageBox"
#include "QFileInfo"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include "QtSql/QSqlError"
#include "QDebug"
#include "inputdata.h"

#define Path_to_DB "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite"

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    QSqlDatabase conn = QSqlDatabase::addDatabase( "QSQLITE" );

      conn.setDatabaseName( "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite" );
//    signup conn;
                   QFileInfo checkFile(Path_to_DB);
                if(checkFile.isFile())
                {

                    if(conn.open())
                    {
//                        ui->la->setText("connected :)");
                    }
                }
                 else
                  {
//                        ui->la->setText("Disconnected :(");
                 }

}

signup::~signup()
{
    delete ui;
}
QString username;
void signup::on_pushButton_clicked()
{
    signup conn;
        // username;
        QString password;
        QString name;
        QString email;
        QString phone;

        name=ui->lename->text();
        email=ui->leemail->text();
        phone=ui->lephone->text();
        username=ui->leuser->text();
        password=ui->lepass->text();


            if(name=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the name "));
        }
        else if(username=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the User Name"));

        }
        else if(password=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the Password "));
        }

        else if(phone=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the phone "));

        }
        else if(email=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the email "));

        }
        else
        {


//        if(!conn.open())
//        {
//            qDebug()<<"Failed to open";
//            return;
//        }
        conn.open();

//        if(ui->radioButton->isChecked())
//        {
//            Gender='M';
//        }
//        if(ui->radioButton_2->isChecked())
//        {
//            Gender='F';
//        }
        QSqlQuery qry;
        qry.prepare("insert into perdata(dname,demail,dphone,dusername,dpassword) values(?,?,?,?,?)");
        qry.addBindValue(name);
        qry.addBindValue(email);
        qry.addBindValue(phone);
        qry.addBindValue(username);
        qry.addBindValue(password);
        if(qry.exec())
        {
            QMessageBox::information(this,tr("Save "),tr("Account created.."));
            conn.close();
            hide();
            inputdata l;
            l.setModal(true);
            l.exec();
        }
        else
        {
            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
        }
        }
}

void signup::on_commandLinkButton_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();
}
QString signup::textEdit()
{
//    QString s=ui->leuser->text();
//    QString m=new QString(s);
    QString st=username;
    return st;
}
