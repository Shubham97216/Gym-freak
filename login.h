#ifndef LOGIN_H
#define LOGIN_H
#include "QtSql/QSqlDatabase"

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    QString textEdit();
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
