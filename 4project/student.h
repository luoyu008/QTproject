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
    //����������Ҫ����
    void Receive();
};

#endif // STUDENT_H
