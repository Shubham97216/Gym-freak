#include "inputdata.h"
#include "ui_inputdata.h"
#include "signup.h"
#include "QMessageBox"
#include "QFileInfo"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include "QtSql/QSqlError"
#include "QDebug"
#include "login.h"

#define Path_to_DB "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite"

inputdata::inputdata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inputdata)
{
    ui->setupUi(this);
    signup s;
    QString text = s.textEdit();
    ui->usershow->setText(text);

    QSqlDatabase conn = QSqlDatabase::addDatabase( "QSQLITE" );

      conn.setDatabaseName( "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite" );
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

inputdata::~inputdata()
{
    delete ui;
}

void inputdata::on_pushButton_clicked()
{
    signup conn;
        QString username;
        QString age;
        QString height;
        QString weight;
        QString gender;
        QString activity;

        username=ui->usershow->text();
        age=ui->leage->text();
        height=ui->leheight->text();
        weight=ui->leweight->text();
        if(ui->leradioF->isChecked()){
            gender='1';
        }
        else{
            gender='0';
        }
        int a = ui->activitybox->currentIndex();
        activity=QString::number(a);


            if(age=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the age "));
        }
        else if(height=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the height"));

        }
        else if(weight=="")
        {
            QMessageBox::critical(this,tr("Error "),tr("Please enter the weight "));
        }
            else if(ui->leradioF->isChecked()==false && ui->leradioM->isChecked()==false){
                QMessageBox::critical(this,tr("Error "),tr("Please select the Gender "));
            }

        else if(ui->activitybox->currentIndex()==0)
        {
            QMessageBox::critical(this,tr("Error "),tr("Please select Activity "));

        }
        else
        {

                conn.open();

                QSqlQuery qry;
                qry.prepare("insert into valdata(fusername,fage,fweight,fheight,fgender,factivity) values(?,?,?,?,?,?)");
                qry.addBindValue(username);
                qry.addBindValue(age);
                qry.addBindValue(weight);
                qry.addBindValue(height);
                qry.addBindValue(gender);
                qry.addBindValue(activity);
                if(qry.exec())
                {
                    QMessageBox::information(this,tr("Save "),tr("Data Saved!! Login to continue.."));
                    conn.close();
                    hide();
                    login l;
                    l.setModal(true);
                    l.exec();
                }
                else
                {
                    QMessageBox::critical(this,tr("error::"),qry.lastError().text());
                }
                }



}
