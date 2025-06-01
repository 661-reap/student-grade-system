#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// 在 mainwindow.h 中添加
#include "student.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void addStudentToTable(const Student& stu);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
    void on_btnSort_clicked();
    void showOrderDialog(const QString &type);
    void doSort(const QString &type, const QString &order);
    void on_btnSearch_clicked();
    void on_btnAnalysis_clicked();
    void on_actionImportCSV_clicked();
    void on_btnExport_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Student> studentList; // 存储所有学生

};
#endif // MAINWINDOW_H

