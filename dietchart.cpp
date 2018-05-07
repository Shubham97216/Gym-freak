#include "dietchart.h"
#include "ui_dietchart.h"
#include "login.h"
#include "updatedata.h"
#include "exercisechart.h"
#include "dashboard.h"

QString text;
dietchart::dietchart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietchart)
{
    ui->setupUi(this);
   /* dietchart s;
    exercisechart s;
    updatedata s;*/
   // dashboard s;
  //  text = s.textEdit();
}

dietchart::~dietchart()
{
    delete ui;
}

void dietchart::on_pushButton_5_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();
}

void dietchart::on_pushButton_4_clicked()
{
    hide();
    updatedata u;
    u.setModal(true);
    u.exec();
}

void dietchart::on_pushButton_3_clicked()
{
    hide();
    exercisechart e;
    e.setModal(true);
    e.exec();
}


void dietchart::on_pushButton_clicked()
{
    hide();
    dashboard d;
    d.setModal(true);
    d.exec();
}
//QString dietchart::textEdit(){
//    QString st=text;
//    return st;
//}
