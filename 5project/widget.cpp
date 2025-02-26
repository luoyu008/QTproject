#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接父类方法一
    //mywidget= new Mywidget();
    //连接父类方法二
    mywidget=new Mywidget(this);
}

Widget::~Widget()
{
    delete ui;
    //使用方法一的时候需要手动删除否则会导致内存泄漏
    delete mywidget;
}
