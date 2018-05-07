#ifndef INPUTDATA_H
#define INPUTDATA_H
#include "QtSql/QSqlDatabase"

#include <QDialog>

namespace Ui {
class inputdata;
}

class inputdata : public QDialog
{
    Q_OBJECT

public:
    explicit inputdata(QWidget *parent = 0);
    ~inputdata();

private slots:
    void on_pushButton_clicked();

private:
    Ui::inputdata *ui;
};

#endif // INPUTDATA_H
