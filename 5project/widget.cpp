#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //���Ӹ��෽��һ
    //mywidget= new Mywidget();
    //���Ӹ��෽����
    mywidget=new Mywidget(this);
}

Widget::~Widget()
{
    delete ui;
    //ʹ�÷���һ��ʱ����Ҫ�ֶ�ɾ������ᵼ���ڴ�й©
    delete mywidget;
}
