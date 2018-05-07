#ifndef UPDATEDATA_H
#define UPDATEDATA_H

#include <QDialog>

namespace Ui {
class updatedata;
}

class updatedata : public QDialog
{
    Q_OBJECT

public:
    explicit updatedata(QWidget *parent = 0);
    ~updatedata();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_upage_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::updatedata *ui;
};

#endif // UPDATEDATA_H
