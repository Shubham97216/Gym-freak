#include "exercisechart.h"
#include "ui_exercisechart.h"
#include "login.h"
#include "dietchart.h"
#include "updatedata.h"
#include "dashboard.h"

exercisechart::exercisechart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exercisechart)
{
    ui->setupUi(this);
}

exercisechart::~exercisechart()
{
    delete ui;
}

void exercisechart::on_pushButton_5_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();
}

void exercisechart::on_pushButton_4_clicked()
{
    hide();
    updatedata u;
    u.setModal(true);
    u.exec();
}


void exercisechart::on_pushButton_2_clicked()
{
    hide();
    dietchart d;
    d.setModal(true);
    d.exec();
}

void exercisechart::on_pushButton_clicked()
{
    hide();
    dashboard d;
    d.setModal(true);
    d.exec();
}
