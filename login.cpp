#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "QMessageBox"
#include "QFileInfo"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include "QDebug"
#include "dashboard.h"

#define Path_to_DB "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QSqlDatabase conn = QSqlDatabase::addDatabase( "QSQLITE" );

      conn.setDatabaseName( "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite" );
    //login conn;
               QFileInfo checkFile(Path_to_DB);
                if(checkFile.isFile())
                {
                    bool c=conn.open();
                    if(c)
                    {
//                        ui->la->setText("connected :)");
                   }
                }
                 else
                  {
//                        ui->la->setText("Disconnected :(");
                 }
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    hide();
    signup s;
    s.setModal(true);
    s.exec();
}
QString usernam;
void login::on_pushButton_clicked()
{
    login conn;


        QString password;
        usernam=ui->leuser->text();
        password=ui->lepass->text();

        if(usernam=="")
                {
                    QMessageBox::critical(this,tr("Error "),tr("Please enter the User Name"));

                }
                else if(password=="")
                {
                    QMessageBox::critical(this,tr("Error "),tr("Please enter the Password "));
                }
        else
        {

//        bool ch=conn.open();
//        if(!ch)
//        {
//            qDebug() <<"Failed to open";
//            return;
//        }
        conn.open();
QSqlQuery qr;
        qr.prepare("select dpassword from perdata where dusername=(?)");
       qr.addBindValue(usernam);
        if (qr.exec())
            {
            int idName = qr.record().indexOf("dpassword");
                if (qr.next())
                {
                    QString pass = qr.value(idName).toString();
                    if(pass==password){
                        QMessageBox::information(this,tr("Welcome "),tr("Login Successful.."));
                        conn.close();
                        hide();
                        dashboard d;
                        d.setModal(true);
                        d.exec();



                    }
                    else{
                        QMessageBox::critical(this,tr("Error "),tr("username or password is not correct.."));
                    }

                }
            }
            else
            {
            QMessageBox::critical(this,tr("Error "),tr("username or password is not correct.."));
            }
        }

}
QString login::textEdit(){
    QString st=usernam;
    return st;
}
