#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel *label=new QLabel(this);
    label->setGeometry(0,0,100,50);
    //label->setStyleSheet("QLabel {background-color:red}");

}

Widget::~Widget()
{
    delete ui;
}
