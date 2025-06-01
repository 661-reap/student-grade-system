#include "addstudentdialog.h"
#include "ui_addstudentdialog.h"
#include <QMessageBox>
#include <QDoubleValidator> // 加头文件
#include <QIntValidator> // 加头文件
AddStudentDialog::AddStudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddStudentDialog)
{
    ui->setupUi(this);
    QRegularExpression rx("\\d{1,13}");
    ui->lineID->setValidator(new QRegularExpressionValidator(rx, this));
    // 构造函数里加这段
    QDoubleValidator *validator = new QDoubleValidator(0, 100, 2, this);
    validator->setNotation(QDoubleValidator::StandardNotation);

    ui->lineChinese->setValidator(validator);
    ui->lineMath->setValidator(validator);
    ui->lineEnglish->setValidator(validator);
    // 在构造函数中连接 QDialogButtonBox 的点击信号：

}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}
long AddStudentDialog::getID()
{
    return ui->lineID->text().toLong(); // 从 QLineEdit 中取整数
}

QString AddStudentDialog::getName()
{
    return ui->lineName->text();
}

QVector<float> AddStudentDialog::getScores()
{
    QVector<float> scores;
    bool ok1, ok2, ok3;

    float c = ui->lineChinese->text().toFloat(&ok1);
    float m = ui->lineMath->text().toFloat(&ok2);
    float e = ui->lineEnglish->text().toFloat(&ok3);

    if (ok1 && ok2 && ok3) {
        scores << c << m << e;
    } else {
        scores << -1 << -1 << -1; // 让 mainwindow 检查出来并提示
    }

    return scores;
}
