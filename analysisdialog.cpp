#include "analysisdialog.h"
#include "ui_analysisdialog.h"
#include <QMap>
#include <QStringList>
#include <QTableWidgetItem>
#include <QHeaderView>

AnalysisDialog::AnalysisDialog(const QList<Student>& students, const QString& subject, QWidget *parent)
    : QDialog(parent), ui(new Ui::AnalysisDialog)
{
    ui->setupUi(this);
    setWindowTitle(subject + " 成绩分析");
    analyzeAndDisplay(students, subject);
}

AnalysisDialog::~AnalysisDialog()
{
    delete ui;
}

void AnalysisDialog::analyzeAndDisplay(const QList<Student>& students, const QString& subject)
{
    // 等级统计初始化
    QMap<QString, int> levelCount = {
        {"优秀", 0}, {"良好", 0}, {"中等", 0}, {"及格", 0}, {"不及格", 0}
    };

    // 成绩 -> 等级判断
    auto getLevel = [](int score) {
        if (score >= 90) return "优秀";
        else if (score >= 80) return "良好";
        else if (score >= 70) return "中等";
        else if (score >= 60) return "及格";
        else return "不及格";
    };

    // 遍历所有学生
    for (const Student& stu : students) {
        int score = 0;
        if (subject == "语文") score = stu.scores.value(0, 0);
        else if (subject == "数学") score = stu.scores.value(1, 0);
        else if (subject == "英语") score = stu.scores.value(2, 0);
        levelCount[getLevel(score)]++;
    }

    int total = students.size();

    // 设置表格结构
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(levelCount.size());
    QStringList headers = {"等级", "人数", "百分比"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // 美化字体
    QFont headerFont("Arial", 11, QFont::Bold);
    ui->tableWidget->horizontalHeader()->setFont(headerFont);
    ui->tableWidget->setFont(QFont("Arial", 10));
    ui->tableWidget->setWordWrap(false); // 禁止换行

    // 插入数据 + 居中
    int row = 0;
    for (const QString& level : levelCount.keys()) {
        int count = levelCount[level];
        double percent = (total == 0) ? 0 : (count * 100.0 / total);

        QTableWidgetItem *itemLevel = new QTableWidgetItem(level);
        QTableWidgetItem *itemCount = new QTableWidgetItem(QString::number(count));
        QTableWidgetItem *itemPercent = new QTableWidgetItem(QString::asprintf("%.2f%%", percent));

        itemLevel->setTextAlignment(Qt::AlignCenter);
        itemCount->setTextAlignment(Qt::AlignCenter);
        itemPercent->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget->setItem(row, 0, itemLevel);
        ui->tableWidget->setItem(row, 1, itemCount);
        ui->tableWidget->setItem(row, 2, itemPercent);
        row++;
    }

    // 自动列宽 & 行高适配
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    // 禁止编辑和选择
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
}
