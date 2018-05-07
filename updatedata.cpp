#include "updatedata.h"
#include "ui_updatedata.h"
#include "dashboard.h"
#include "login.h"
#include "dietchart.h"
#include "exercisechart.h"
#include "QMessageBox"
#include "QFileInfo"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include "QDebug"

#define Path_to_DB "C:/Users/ABHAY GUPTA/Documents/gym/udata.sqlite"

QString use;
updatedata::updatedata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatedata)
{
    ui->setupUi(this);

    dashboard s;
    use = s.textEdit();
    ui->usershow->setText(use);

    ui->leage->hide();
    ui->leheight->hide();
    ui->leweight->hide();
    ui->activitybox->hide();
    ui->label_11->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    ui->leradioF->hide();
    ui->leradioM->hide();

    //database part

}

updatedata::~updatedata()
{
    delete ui;
}

void updatedata::on_pushButton_clicked()
{
    hide();
    dashboard d;
    d.setModal(true);
    d.exec();
}

void updatedata::on_pushButton_2_clicked()
{
    hide();
    dietchart d;
    d.setModal(true);
    d.exec();
}

void updatedata::on_pushButton_3_clicked()
{
    hide();
    exercisechart d;
    d.setModal(true);
    d.exec();
}

void updatedata::on_pushButton_5_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();
}

void updatedata::on_upage_clicked()
{
    ui->upage->hide();
    ui->ageshow->hide();
    ui->leage->show();
    ui->label_11->show();
}

void updatedata::on_pushButton_8_clicked()
{
    ui->pushButton_8->hide();
    ui->heightshow->hide();
    ui->leheight->show();
    ui->label_8->show();
}

void updatedata::on_pushButton_9_clicked()
{
    ui->pushButton_9->hide();
    ui->weightshow->hide();
    ui->leweight->show();
    ui->label_9->show();
}

void updatedata::on_pushButton_10_clicked()
{
    ui->gendershow->hide();
    ui->pushButton_10->hide();
    ui->leradioF->show();
    ui->leradioM->show();
}

void updatedata::on_pushButton_11_clicked()
{
    ui->activityshow->hide();
    ui->pushButton_11->hide();
    ui->activitybox->show();
}

void updatedata::on_pushButton_6_clicked()
{

}
