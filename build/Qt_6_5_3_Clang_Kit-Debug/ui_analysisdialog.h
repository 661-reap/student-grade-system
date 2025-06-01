/********************************************************************************
** Form generated from reading UI file 'analysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISDIALOG_H
#define UI_ANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnalysisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AnalysisDialog)
    {
        if (AnalysisDialog->objectName().isEmpty())
            AnalysisDialog->setObjectName("AnalysisDialog");
        AnalysisDialog->resize(394, 264);
        AnalysisDialog->setMinimumSize(QSize(0, 0));
        AnalysisDialog->setStyleSheet(QString::fromUtf8("QFont font;\n"
"font.setPointSize(10);\n"
"tableWidget->setFont(font);\n"
"tableWidget->horizontalHeader()->setFont(QFont(\"Arial\", 11, QFont::Bold));\n"
"tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);"));
        verticalLayout = new QVBoxLayout(AnalysisDialog);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(AnalysisDialog);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget::item {\n"
"        border: 1px solid #999999;\n"
"        padding: 4px;\n"
"    }\n"
"    QTableWidget {\n"
"        gridline-color: #666666;\n"
"        background-color: #eafcff;\n"
"        font-size: 14px;\n"
"    }\n"
"    QHeaderView::section {\n"
"        background-color: #b2ebf2;\n"
"        border: 1px solid #666666;\n"
"        font-weight: bold;\n"
"    }"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(AnalysisDialog);

        QMetaObject::connectSlotsByName(AnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalysisDialog)
    {
        AnalysisDialog->setWindowTitle(QCoreApplication::translate("AnalysisDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisDialog: public Ui_AnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISDIALOG_H
