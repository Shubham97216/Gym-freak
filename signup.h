#ifndef SIGNUP_H
#define SIGNUP_H
#include "QtSql/QSqlDatabase"
#include "QMainWindow"
#include "QTextEdit"
#include "QLineEdit"

#include <QDialog>

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    QString textEdit();
    explicit signup(QWidget *parent = 0);
    ~signup();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::signup *ui;
};

//class signp : public signup,public QMainWindow
//{
//public:


//};

#endif // SIGNUP_H
