#ifndef ANALYSISDIALOG_H
#define ANALYSISDIALOG_H

#include <QDialog>
#include <QList>
#include "student.h"

namespace Ui {
class AnalysisDialog;
}

class AnalysisDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AnalysisDialog(const QList<Student>& students, const QString& subject, QWidget *parent = nullptr);
    ~AnalysisDialog();

private:
    Ui::AnalysisDialog *ui;

    void analyzeAndDisplay(const QList<Student>& students, const QString& subject);
};

#endif // ANALYSISDIALOG_H
