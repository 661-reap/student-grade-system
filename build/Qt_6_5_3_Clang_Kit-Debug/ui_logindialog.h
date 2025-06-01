/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *labelUsername;
    QLabel *labelPassword;
    QCheckBox *checkShowPwd;
    QPushButton *btnLogin;
    QLabel *label;
    QLabel *labelLogo;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(466, 274);
        LoginDialog->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-image: url(:/images/bg_soft.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: #fff7f0;\n"
"}"));
        lineEditUsername = new QLineEdit(LoginDialog);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(160, 90, 141, 31));
        lineEditUsername->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e6f7ff;\n"
"    border: 2px solid #91d5ff;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 15px;\n"
"    color: #004b6e;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #40a9ff;\n"
"    background-color: #ffffff;\n"
"} "));
        lineEditPassword = new QLineEdit(LoginDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(160, 140, 141, 31));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #e6f7ff;\n"
"    border: 2px solid #91d5ff;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 15px;\n"
"    color: #004b6e;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 2px solid #40a9ff;\n"
"    background-color: #ffffff;\n"
"} "));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        labelUsername = new QLabel(LoginDialog);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(110, 100, 41, 21));
        labelUsername->setStyleSheet(QString::fromUtf8("font: 15pt \"Academy Engraved LET\";"));
        labelPassword = new QLabel(LoginDialog);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(110, 140, 41, 21));
        labelPassword->setStyleSheet(QString::fromUtf8("font: 15pt \"Academy Engraved LET\";"));
        checkShowPwd = new QCheckBox(LoginDialog);
        checkShowPwd->setObjectName("checkShowPwd");
        checkShowPwd->setGeometry(QRect(310, 150, 86, 21));
        checkShowPwd->setStyleSheet(QString::fromUtf8("font: 14pt \"Academy Engraved LET\";"));
        btnLogin = new QPushButton(LoginDialog);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(170, 190, 111, 41));
        btnLogin->setStyleSheet(QString::fromUtf8("   QPushButton {\n"
"    background-color: #fbb1bd;  /* \350\215\211\350\216\223\347\262\211 */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 15px;\n"
"    border: 2px solid #fda4af;\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ffa8a8;  /* \346\202\254\345\201\234\351\242\234\350\211\262 */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ff8c94;  /* \347\202\271\345\207\273\351\242\234\350\211\262 */\n"
"}"));
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 301, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Hiragino Sans GB\";\n"
"font: 25pt \"Academy Engraved LET\";"));
        labelLogo = new QLabel(LoginDialog);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setGeometry(QRect(370, 180, 91, 91));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/tomato.png")));
        labelLogo->setScaledContents(true);
        lineEditUsername->raise();
        labelUsername->raise();
        labelPassword->raise();
        checkShowPwd->raise();
        btnLogin->raise();
        label->raise();
        lineEditPassword->raise();
        labelLogo->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        labelUsername->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkShowPwd->setText(QCoreApplication::translate("LoginDialog", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\351\231\206\350\264\246\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\346\254\242\350\277\216\350\277\233\345\205\245\345\255\246\344\271\240\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        labelLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
