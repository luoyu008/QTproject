#include "mywidget.h"
#include <QDebug>
Mywidget::Mywidget(QWidget *parent)
    : QWidget{parent}
{}

Mywidget::~Mywidget()
{
    qDebug()<<"~mywidget run"<<endl;
}
