#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    bool isLoginSuccess() const;

private slots:
    void on_btnLogin_clicked();

    void on_checkShowPwd_toggled(bool checked);

private:
    Ui::LoginDialog *ui;
    bool loginSuccess = false;
};

#endif // LOGINDIALOG_H
