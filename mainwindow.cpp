#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstudentdialog.h"
#include <QMessageBox>
#include <QInputDialog>     // 用于弹出选择框（排序方式、升/降序）
#include <algorithm>        // std::sort 排序用
#include <QtCharts>
#include <QCollator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // 设置表格的列数
    ui->tableWidget->setColumnCount(7);

    this->resize(1000, 700);  // 或 showMaximized()
    // 设置表格的列标题
    QStringList headers;
    headers << "学号" << "姓名" << "语文" << "数学" << "英语" << "总分" << "平均分";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->lineSearch, &QLineEdit::returnPressed, this, &MainWindow::on_btnSearch_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btnAdd_clicked()
{
    AddStudentDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted)
    {
       if (dialog.getID() == 0 || dialog.getName().isEmpty()) {
            QMessageBox::warning(this, "提示", "请输入学号和姓名！");
            return;
        }

        QVector<float> scores = dialog.getScores();
        if (scores.size() < 3 || scores[0] < 0 || scores[1] < 0 || scores[2] < 0) {
            QMessageBox::warning(this, "提示", "请输入完整成绩！");
            return;
        }

        // 创建 Student 对象

        long id = dialog.getID();
        QString name = dialog.getName();
         Student stu(id, name, scores);
        studentList.append(stu);
        addStudentToTable(stu);
    }
}
void MainWindow::on_btnDelete_clicked()
{
    // 1. 获取所有选中的行
    QList<QTableWidgetSelectionRange> selectedRanges = ui->tableWidget->selectedRanges();
    if (selectedRanges.isEmpty()) {
        // 未选中任何行，弹窗询问是否清空所有学生
        auto ret = QMessageBox::question(this, "确认删除", "未选中学生，是否清空所有学生信息？",
                                         QMessageBox::Yes | QMessageBox::No);
        if (ret == QMessageBox::Yes) {
            studentList.clear();
            ui->tableWidget->setRowCount(0);
        }
        return;
    }

    // 2. 弹窗确认删除选中的学生
    auto ret = QMessageBox::question(this, "确认删除", "确定要删除选中的学生吗？",
                                     QMessageBox::Yes | QMessageBox::No);
    if (ret != QMessageBox::Yes) return;

    // 3. 收集所有选中行号，避免删除时行号变化带来的问题
    QSet<int> rowsToDelete;
    for (const auto& range : selectedRanges) {
        for (int row = range.topRow(); row <= range.bottomRow(); ++row) {
            rowsToDelete.insert(row);
        }
    }
    QList<int> rowsList = rowsToDelete.values();
    std::sort(rowsList.begin(), rowsList.end(), std::greater<int>());

    // 4. 逐行删除对应学生和表格行
    for (int row : rowsList) {
        QString idStr = ui->tableWidget->item(row, 0)->text();
        long id = idStr.toLong();

        // 删除studentList中对应学生
        for (int i = 0; i < studentList.size(); ++i) {
            if (studentList[i].id == id) {
                studentList.remove(i);
                break;
            }
        }

        // 删除表格行
        ui->tableWidget->removeRow(row);
    }
}
void MainWindow::addStudentToTable(const Student& stu)
{
    int row = ui->tableWidget->rowCount();        // 获取当前表格行数
    ui->tableWidget->insertRow(row);              // 插入新行

    // 学号
    QTableWidgetItem* itemID = new QTableWidgetItem(QString::number(stu.id));
    itemID->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row, 0, itemID);

    // 姓名
    QTableWidgetItem* itemName = new QTableWidgetItem(stu.name);
    itemName->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row, 1, itemName);

    // 成绩
    for (int i = 0; i < stu.scores.size(); ++i) {
        QTableWidgetItem* itemScore = new QTableWidgetItem(QString::number(stu.scores[i], 'f', 2));
        itemScore->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row, 2 + i, itemScore);
    }

    // 总分
    QTableWidgetItem* itemSum = new QTableWidgetItem(QString::number(stu.sum, 'f', 2));
    itemSum->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row, 5, itemSum);

    // 平均分
    QTableWidgetItem* itemAvg = new QTableWidgetItem(QString::number(stu.average, 'f', 2));
    itemAvg->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(row, 6, itemAvg);
}
void MainWindow::on_btnSort_clicked()
{
    QStringList types = {"学号", "成绩", "姓名"};
    bool ok;
    QString type = QInputDialog::getItem(this, "选择排序方式", "你想按什么排序？", types, 0, false, &ok);
    if (!ok || type.isEmpty()) return;

    showOrderDialog(type);
}

void MainWindow::showOrderDialog(const QString &type)
{
    QStringList order = {"升序", "降序"};
    bool ok;
    QString ord = QInputDialog::getItem(this, "选择排序顺序", "你想按哪种顺序？", order, 0, false, &ok);
    if (!ok || ord.isEmpty()) return;

    doSort(type, ord);
}
void MainWindow::doSort(const QString &type, const QString &order)
{
    std::sort(studentList.begin(), studentList.end(), [&](const Student &a, const Student &b) {
        if (type == "学号") {
            return order == "升序" ? a.id < b.id : a.id > b.id;
        } else if (type == "成绩") {
            return order == "升序" ? a.sum < b.sum : a.sum > b.sum;
        } else if (type == "姓名") {
            QCollator collator;
            collator.setLocale(QLocale::Chinese);  // 使用中文本地化，确保按拼音排
            collator.setCaseSensitivity(Qt::CaseInsensitive);
            collator.setIgnorePunctuation(true);

            return order == "升序"
                       ? collator.compare(a.name, b.name) < 0
                       : collator.compare(a.name, b.name) > 0;
        }
        return false;
    });

    ui->tableWidget->setRowCount(0); // 清空表格
    for (const auto &stu : studentList) {
        addStudentToTable(stu); // 你之前写好的函数
    }
}
void MainWindow::on_btnSearch_clicked()
{
    QString keyword = ui->lineSearch->text().trimmed();
    if (keyword.isEmpty()) {
        QMessageBox::information(this, "提示", "请输入学号或姓名再查找！");
        return;
    }

    // 清除之前的选中状态
    ui->tableWidget->clearSelection();

    bool found = false;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString idStr = ui->tableWidget->item(row, 0)->text();
        QString nameStr = ui->tableWidget->item(row, 1)->text();

        // 判断是数字（学号）还是文字（姓名）
        bool isNumber = false;
        keyword.toLong(&isNumber);

        if ((isNumber && idStr == keyword) ||
            (!isNumber && nameStr.contains(keyword, Qt::CaseInsensitive))) {
            ui->tableWidget->selectRow(row);  // 选中匹配行
            found = true;
        }
    }

    if (!found) {
        QMessageBox::information(this, "未找到", "未找到匹配的学生信息！");
    }
}
#include <QInputDialog>
#include "analysisdialog.h"
#include "comparedialog.h"
void MainWindow::on_btnAnalysis_clicked()
{
    QStringList options = {"语文", "数学", "英语", "各科成绩对比图"};
    bool ok;
    QString choice = QInputDialog::getItem(this, "选择学科", "请选择要分析的学科：", options, 0, false, &ok);
    if (!ok || choice.isEmpty()) return;

    if (choice == "各科成绩对比图") {
        CompareDialog dlg(studentList, this);
        dlg.exec();
    } else {
        AnalysisDialog dlg(studentList, choice, this);
        dlg.exec();
    }
}
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

void MainWindow::on_actionImportCSV_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择成绩单CSV文件", "", "CSV 文件 (*.csv)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "错误", "无法打开文件！");
        return;
    }

    QTextStream in(&file);

    bool firstLine = true;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (firstLine) { firstLine = false; continue; }

        QStringList parts = line.split(",");
        if (parts.size() < 5) continue;

        long id = parts[0].toLong();
        QString name = parts[1];
        float chinese = parts[2].toFloat();
        float math = parts[3].toFloat();
        float english = parts[4].toFloat();

        QVector<float> scores = {chinese, math, english};
        Student stu(id, name, scores);
        studentList.append(stu);
        addStudentToTable(stu);
    }

    file.close();
    QMessageBox::information(this, "导入成功", "成绩已成功导入！");
}

#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
void MainWindow::on_btnExport_clicked()
{
    // 选择保存路径
    QString fileName = QFileDialog::getSaveFileName(this, "导出成绩为 CSV 文件", "", "CSV 文件 (*.csv)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "错误", "无法创建文件！");
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8); // Qt 6 用法：设置 UTF-8 编码

    // 写入表头
    out << "学号,姓名,语文,数学,英语,总分,平均分\n";

    // 写入每一行学生数据
    for (const Student &stu : studentList) {
        out << stu.id << ","
            << stu.name << ","
            << stu.scores[0] << ","
            << stu.scores[1] << ","
            << stu.scores[2] << ","
            << stu.sum << ","
            << stu.average << "\n";
    }

    file.close();
    QMessageBox::information(this, "导出成功", "成绩已成功导出！");
}
