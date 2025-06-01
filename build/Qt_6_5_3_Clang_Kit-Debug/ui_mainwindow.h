/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineSearch;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnSort;
    QPushButton *actionImportCSV;
    QTableWidget *tableWidget;
    QPushButton *btnAnalysis;
    QPushButton *btnExport;
    QPushButton *btnSearch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1027, 708);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(220, 247, 255)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineSearch = new QLineEdit(centralwidget);
        lineSearch->setObjectName("lineSearch");
        lineSearch->setGeometry(QRect(870, 0, 131, 41));
        lineSearch->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(0, 0, 101, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(110, 0, 101, 41));
        btnDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnSort = new QPushButton(centralwidget);
        btnSort->setObjectName("btnSort");
        btnSort->setGeometry(QRect(220, 0, 101, 41));
        btnSort->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        actionImportCSV = new QPushButton(centralwidget);
        actionImportCSV->setObjectName("actionImportCSV");
        actionImportCSV->setGeometry(QRect(330, 0, 101, 41));
        actionImportCSV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 40, 1000, 700));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(1000, 700));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #E8DFF7;          /* \351\246\231\350\212\213\347\264\253\350\203\214\346\231\257 */\n"
"    gridline-color: #C3B1E1;            /* \346\267\241\347\264\253\350\211\262\347\275\221\346\240\274\347\272\277 */\n"
"    font-size: 14px;\n"
"    color: #5B3E7F;                     /* \346\267\261\347\264\253\345\255\227\344\275\223 */\n"
"    border: 1px solid #C3B1E1;          /* \347\264\253\350\211\262\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #BFA3E0;          /* \351\246\231\350\212\213\347\264\253\350\241\250\345\244\264 */\n"
"    padding: 6px;\n"
"    border: 1px solid #9B82CC;          /* \347\250\215\346\267\261\347\232\204\347\264\253\350\211\262\350\276\271\346\241\206 */\n"
"    font-weight: bold;\n"
"    color: white;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #9B82CC;          /* \351\200\211\344\270\255\346\267\261\347\264\253\350\211\262 */\n"
"    color: white;\n"
"}\n"
"\n"
"QTabl"
                        "eWidget::item:hover {\n"
"    background-color: #D4C3F0;          /* \351\274\240\346\240\207\346\202\254\345\201\234\346\265\205\347\264\253\350\211\262 */\n"
"}"));
        tableWidget->setColumnCount(7);
        btnAnalysis = new QPushButton(centralwidget);
        btnAnalysis->setObjectName("btnAnalysis");
        btnAnalysis->setGeometry(QRect(550, 0, 121, 41));
        btnAnalysis->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnExport = new QPushButton(centralwidget);
        btnExport->setObjectName("btnExport");
        btnExport->setGeometry(QRect(440, 0, 101, 41));
        btnExport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnSearch = new QPushButton(centralwidget);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(800, 0, 71, 41));
        btnSearch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1027, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        btnSort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        actionImportCSV->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\210\220\347\273\251", nullptr));
        btnAnalysis->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\247\221\346\210\220\347\273\251\345\210\206\346\236\220", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\210\220\347\273\251", nullptr));
        btnSearch->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
