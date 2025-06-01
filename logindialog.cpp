#include "logindialog.h"
#include "ui_logindialog.h"
#include <QSettings>
#include <QMessageBox>
#include <QFile>
#include <QDir>

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);

    connect(ui->checkShowPwd, &QCheckBox::toggled, this, [=](bool checked){
        ui->lineEditPassword->setEchoMode(checked ? QLineEdit::Normal : QLineEdit::Password);
    });
    QPixmap pix(":/images/logo.png");
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_btnLogin_clicked()
{
    QString username = ui->lineEditUsername->text().trimmed();
    QString password = ui->lineEditPassword->text().trimmed();

    // 获取应用程序的运行目录
    QString iniPath = QCoreApplication::applicationDirPath() + "/config.ini";

    if (!QFile::exists(iniPath)) {
        QMessageBox::warning(this, "错误", "配置文件未找到：" + iniPath);
        return;
    }

    QSettings settings(iniPath, QSettings::IniFormat);
    QString correctUser = settings.value("admin/username").toString();
    QString correctPass = settings.value("admin/password").toString();

    if (username == correctUser && password == correctPass) {
        accept();
    } else {
        QMessageBox::warning(this, "错误", "账号或密码错误！");
    }
    qDebug() << "读取用户名:" << correctUser;
    qDebug() << "读取密码:" << correctPass;
}

void LoginDialog::on_checkShowPwd_toggled(bool checked)
{
    ui->lineEditPassword->setEchoMode(checked ? QLineEdit::Normal : QLineEdit::Password);
}

