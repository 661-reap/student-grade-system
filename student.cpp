// student.cpp
#include "student.h"

Student::Student() : id(0), name(""), scores(6), sum(0), average(0) {}

Student::Student(long id, QString name, QVector<float> scores)
    : id(id), name(name), scores(scores)
{
    calc();
}
void Student::calc()
{
    sum = 0;
    for (int i = 0; i < scores.size(); ++i)
    {
        sum += scores[i];
    }
    average = scores.isEmpty() ? 0 : sum / scores.size();
}
