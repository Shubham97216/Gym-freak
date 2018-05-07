#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

namespace Ui {
class dashboard;
}

class dashboard : public QDialog
{
    Q_OBJECT

public:
    QString textEdit();
    explicit dashboard(QWidget *parent = 0);
    ~dashboard();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
