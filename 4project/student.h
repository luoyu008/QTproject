#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
    public slots:
    //槽声明后需要定义
    void Receive();
};

#endif // STUDENT_H
