#ifndef SCHOOL_H
#define SCHOOL_H

#include <QObject>

class School : public QObject
{
    Q_OBJECT
public:
    explicit School(QObject *parent = nullptr);

signals:
    //�ź�ֻ��Ҫ�����Ϳ���
    void Notice();
};

#endif // SCHOOL_H
