/********************************************************************************
** Form generated from reading UI file 'addstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTDIALOG_H
#define UI_ADDSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddStudentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineName;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineMath;
    QLineEdit *lineEnglish;
    QLineEdit *lineChinese;
    QLineEdit *lineID;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddStudentDialog)
    {
        if (AddStudentDialog->objectName().isEmpty())
            AddStudentDialog->setObjectName("AddStudentDialog");
        AddStudentDialog->resize(296, 314);
        AddStudentDialog->setStyleSheet(QString::fromUtf8("background-color:#FFF3E6"));
        verticalLayout = new QVBoxLayout(AddStudentDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label = new QLabel(AddStudentDialog);
        label->setObjectName("label");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddStudentDialog);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lineName = new QLineEdit(AddStudentDialog);
        lineName->setObjectName("lineName");
        lineName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"}"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineName);

        label_3 = new QLabel(AddStudentDialog);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(AddStudentDialog);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(AddStudentDialog);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_5);

        lineMath = new QLineEdit(AddStudentDialog);
        lineMath->setObjectName("lineMath");
        lineMath->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"}"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineMath);

        lineEnglish = new QLineEdit(AddStudentDialog);
        lineEnglish->setObjectName("lineEnglish");
        lineEnglish->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"}"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEnglish);

        lineChinese = new QLineEdit(AddStudentDialog);
        lineChinese->setObjectName("lineChinese");
        lineChinese->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"}"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineChinese);

        lineID = new QLineEdit(AddStudentDialog);
        lineID->setObjectName("lineID");
        lineID->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineID);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(AddStudentDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(lineID, lineName);
        QWidget::setTabOrder(lineName, lineChinese);
        QWidget::setTabOrder(lineChinese, lineMath);
        QWidget::setTabOrder(lineMath, lineEnglish);

        retranslateUi(AddStudentDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddStudentDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddStudentDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStudentDialog)
    {
        AddStudentDialog->setWindowTitle(QCoreApplication::translate("AddStudentDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddStudentDialog", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudentDialog", "\345\247\223\345\220\215\357\274\232", nullptr));
        lineName->setText(QString());
        label_3->setText(QCoreApplication::translate("AddStudentDialog", "\350\257\255\346\226\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudentDialog", "\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AddStudentDialog", "\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentDialog: public Ui_AddStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTDIALOG_H
