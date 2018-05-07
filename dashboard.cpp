#include "dashboard.h"
#include "ui_dashboard.h"
#include "login.h"
#include "dietchart.h"
#include "exercisechart.h"
#include "updatedata.h"

QString tex;
dashboard::dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    login s;
    /*dietchart s;
    exercisechart s;
    updatedata s;*/
    tex = s.textEdit();
    ui->la->setText(tex);
   // ui->la->hide();
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_pushButton_5_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();
}



void dashboard::on_pushButton_2_clicked()
{
    hide();
    dietchart d;
    d.setModal(true);
    d.exec();
}

void dashboard::on_pushButton_3_clicked()
{
    hide();
    exercisechart e;
    e.setModal(true);
    e.exec();
}

void dashboard::on_pushButton_4_clicked()
{
    hide();
    updatedata u;
    u.setModal(true);
    u.exec();
}

void dashboard::on_pushButton_clicked()
{

}
QString dashboard::textEdit(){
    QString st=tex;
    return st;
}
