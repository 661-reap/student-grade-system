// student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QVector>

class Student
{
public:
    long id;
    QString name;
    QVector<float> scores; // 每科成绩
    float sum;
    float average;

    Student(); // 默认构造
    Student(long id, QString name, QVector<float> scores);

    void calc(); // 计算总分和平均分
};

#endif // STUDENT_H
