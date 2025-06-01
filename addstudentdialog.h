#ifndef ADDSTUDENTDIALOG_H
#define ADDSTUDENTDIALOG_H
#include <QAbstractButton>
#include <QDialog>

namespace Ui {
class AddStudentDialog;
}

class AddStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudentDialog(QWidget *parent = nullptr);
    ~AddStudentDialog();
    long getID();
    QString getName();
    QVector<float> getScores();

private slots:

private:
    Ui::AddStudentDialog *ui;
    void on_btnOk_clicked();

};

#endif // ADDSTUDENTDIALOG_H
