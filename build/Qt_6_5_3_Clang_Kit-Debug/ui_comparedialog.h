/********************************************************************************
** Form generated from reading UI file 'comparedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPAREDIALOG_H
#define UI_COMPAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompareDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *chartContainer;
    QVBoxLayout *verticalLayout;
    QWidget *widgetChinese;
    QWidget *widgetMath;
    QWidget *widgetEnglish;

    void setupUi(QDialog *CompareDialog)
    {
        if (CompareDialog->objectName().isEmpty())
            CompareDialog->setObjectName("CompareDialog");
        CompareDialog->resize(748, 630);
        verticalLayout_2 = new QVBoxLayout(CompareDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(CompareDialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        chartContainer = new QWidget();
        chartContainer->setObjectName("chartContainer");
        chartContainer->setGeometry(QRect(0, 0, 722, 604));
        chartContainer->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(chartContainer);
        verticalLayout->setObjectName("verticalLayout");
        widgetChinese = new QWidget(chartContainer);
        widgetChinese->setObjectName("widgetChinese");
        widgetChinese->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(widgetChinese);

        widgetMath = new QWidget(chartContainer);
        widgetMath->setObjectName("widgetMath");
        widgetMath->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(widgetMath);

        widgetEnglish = new QWidget(chartContainer);
        widgetEnglish->setObjectName("widgetEnglish");
        widgetEnglish->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(widgetEnglish);

        scrollArea->setWidget(chartContainer);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(CompareDialog);

        QMetaObject::connectSlotsByName(CompareDialog);
    } // setupUi

    void retranslateUi(QDialog *CompareDialog)
    {
        CompareDialog->setWindowTitle(QCoreApplication::translate("CompareDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompareDialog: public Ui_CompareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPAREDIALOG_H
