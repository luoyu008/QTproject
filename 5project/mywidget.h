#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class Mywidget : public QWidget
{
    Q_OBJECT
public:
    explicit Mywidget(QWidget *parent = nullptr);
    ~Mywidget();

signals:
};

#endif // MYWIDGET_H
