#include "student.h"
#include <QDebug>
Student::Student(QObject *parent)
    : QObject{parent}
{}

void Student::Receive()
{
    qDebug()<<"student ok"<<endl;
}
