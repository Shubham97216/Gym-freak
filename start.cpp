#include "start.h"
#include "ui_start.h"
#include "login.h"

start::start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
}

start::~start()
{
    delete ui;
}

void start::on_pushButton_clicked()
{
    hide();
    login l;
    l.setModal(true);
    l.exec();

}
