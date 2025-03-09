#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsColorizeEffect>
#include <QGraphicsOpacityEffect>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //几何动画初始化
    qproperty= new QPropertyAnimation(ui->geometry,"geometry");
    //设置起始状态
    qproperty->setStartValue(QRect(0,0,100,100));

    //设置终止状态
    qproperty->setEndValue(QRect(500,300,300,300));

    //设置某时间段的值
    qproperty->setKeyValueAt(0.5,QRect(200,200,200,300));

    //设置动画时长
    qproperty->setDuration(2500);

    //设置动画速度曲线
    qproperty->setEasingCurve(QEasingCurve::OutCubic);

    //设置动画次数
    qproperty->setLoopCount(2);

    //颜色动画初始化
    QGraphicsColorizeEffect* qgrapgocscolorizeeffect=new QGraphicsColorizeEffect(this);
    ui->colorwidget->setGraphicsEffect(qgrapgocscolorizeeffect);
    qgraph=new QPropertyAnimation(qgrapgocscolorizeeffect,"color");
    qgraph->setStartValue(QColor(Qt::white));
    qgraph->setEndValue(QColor(Qt::black));
    qgraph->setDuration(1000);

    //不透明动画初始化
    QGraphicsOpacityEffect* qgraphicsOpacityEffect=new QGraphicsOpacityEffect(this);
    ui->colorwidget_2->setGraphicsEffect(qgraphicsOpacityEffect);
    opacity=new QPropertyAnimation(qgraphicsOpacityEffect,"opacity");
    opacity->setStartValue(0);
    opacity->setEndValue(1);
    opacity->setDuration(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    qproperty->start();
}


void Widget::on_pushButton_2_clicked()
{
    qgraph->start();
}


void Widget::on_pushButton_3_clicked()
{
    opacity->start();
}

