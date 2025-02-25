#ifndef SCHOOL_H
#define SCHOOL_H

#include <QObject>

class School : public QObject
{
    Q_OBJECT
public:
    explicit School(QObject *parent = nullptr);

signals:
    //信号只需要声明就可以
    void Notice();
};

#endif // SCHOOL_H
