#ifndef COMPAREDIALOG_H
#define COMPAREDIALOG_H

#include <QDialog>
#include <QVector>
#include <QString>
#include "student.h"

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>

QT_BEGIN_NAMESPACE
namespace Ui {
class CompareDialog;
}
QT_END_NAMESPACE

class CompareDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompareDialog(const QVector<Student> &studentList, QWidget *parent = nullptr);
    ~CompareDialog();

private:
    Ui::CompareDialog *ui;
    QVector<Student> m_studentList;

    void setupPieChart(const QString &subjectName, const QVector<int> &counts);
    QVector<int> getLevelCounts(const QVector<Student> &list, const QString &subject);
};

#endif // COMPAREDIALOG_H
