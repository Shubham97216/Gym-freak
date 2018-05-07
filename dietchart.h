#ifndef DIETCHART_H
#define DIETCHART_H

#include <QDialog>

namespace Ui {
class dietchart;
}

class dietchart : public QDialog
{
    Q_OBJECT

public:
   // QString textEdit();
    explicit dietchart(QWidget *parent = 0);
    ~dietchart();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::dietchart *ui;
};

#endif // DIETCHART_H
