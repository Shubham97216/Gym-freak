#ifndef EXERCISECHART_H
#define EXERCISECHART_H

#include <QDialog>

namespace Ui {
class exercisechart;
}

class exercisechart : public QDialog
{
    Q_OBJECT

public:
    explicit exercisechart(QWidget *parent = 0);
    ~exercisechart();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::exercisechart *ui;
};

#endif // EXERCISECHART_H
