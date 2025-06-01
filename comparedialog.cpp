#include "comparedialog.h"
#include "ui_comparedialog.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QPainter>
#include <QScrollArea>
#include <QFont>


CompareDialog::CompareDialog(const QVector<Student> &studentList, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CompareDialog)
    , m_studentList(studentList)
{
    ui->setupUi(this);
this->resize(1000, 700);  // 或 showMaximized()
    // 设置 chartContainer 的布局（一定要确保 .ui 中设置成功了垂直布局）
    QVBoxLayout *layout = qobject_cast<QVBoxLayout *>(ui->chartContainer->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->chartContainer);
        ui->chartContainer->setLayout(layout);
    }

    layout->setSpacing(30);
    layout->setContentsMargins(20, 20, 20, 20);

    // 构建数据
    QVector<int> chinese = getLevelCounts(studentList, "语文");
    QVector<int> math = getLevelCounts(studentList, "数学");
    QVector<int> english = getLevelCounts(studentList, "英语");

    setupPieChart("语文", chinese);
    setupPieChart("数学", math);
    setupPieChart("英语", english);
}

CompareDialog::~CompareDialog()
{
    delete ui;
}

void CompareDialog::setupPieChart(const QString &subjectName, const QVector<int> &counts)
{
    QStringList levels = {"优秀", "良好", "中等", "及格", "不及格"};
    QStringList colors = {"#fbb1bd", "#ffdaa9", "#c1e0f7", "#b5ead7", "#d5cfe1"};

    QPieSeries *series = new QPieSeries();
    int total = std::accumulate(counts.begin(), counts.end(), 0);

    for (int i = 0; i < counts.size(); ++i) {
        if (counts[i] == 0) continue;

        double percent = total == 0 ? 0 : (counts[i] * 100.0 / total);
        QString label = QString("%1\n%2人\n%3%")
                            .arg(levels[i])
                            .arg(counts[i])
                            .arg(QString::number(percent, 'f', 1));

        QPieSlice *slice = series->append(label, counts[i]);
        slice->setColor(QColor(colors[i]));
        slice->setLabelVisible(true);
        slice->setLabelPosition(QPieSlice::LabelOutside);
        slice->setLabelArmLengthFactor(0.35);             // 拉长引导线
        slice->setExploded(true);
        slice->setExplodeDistanceFactor(0.05);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->legend()->hide();
    chart->setMargins(QMargins(50, 50, 50, 50));          // ⬅️ 控制文字留白区域
    series->setPieSize(0.45);                             // ⬅️ 缩小图表半径
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumHeight(500);                    // ⬅️ 提供足够空间展示所有标签
    chartView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QLabel *titleLabel = new QLabel(subjectName + " 成绩等级分布");
    titleLabel->setFont(QFont("Arial", 13, QFont::Bold));
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("padding: 6px;");

    QWidget *sectionWidget = new QWidget;
    QVBoxLayout *sectionLayout = new QVBoxLayout(sectionWidget);
    sectionLayout->setContentsMargins(0, 0, 0, 0);
    sectionLayout->setSpacing(10);                       // ⬅️ 控制标题与图之间的间距
    sectionLayout->addWidget(titleLabel);
    sectionLayout->addWidget(chartView);

    QVBoxLayout *mainLayout = qobject_cast<QVBoxLayout *>(ui->chartContainer->layout());
    mainLayout->addWidget(sectionWidget);
}

QVector<int> CompareDialog::getLevelCounts(const QVector<Student> &list, const QString &subject)
{
    QVector<int> levels(5, 0);
    int index = (subject == "语文") ? 0 : (subject == "数学") ? 1 : 2;

    for (const auto &stu : list) {
        float score = stu.scores[index];
        if (score >= 90) levels[0]++;
        else if (score >= 80) levels[1]++;
        else if (score >= 70) levels[2]++;
        else if (score >= 60) levels[3]++;
        else levels[4]++;
    }
    return levels;
}

