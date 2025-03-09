#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsColorizeEffect>
#include <QGraphicsOpacityEffect>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //���ζ�����ʼ��
    qproperty= new QPropertyAnimation(ui->geometry,"geometry");
    //������ʼ״̬
    qproperty->setStartValue(QRect(0,0,100,100));

    //������ֹ״̬
    qproperty->setEndValue(QRect(500,300,300,300));

    //����ĳʱ��ε�ֵ
    qproperty->setKeyValueAt(0.5,QRect(200,200,200,300));

    //���ö���ʱ��
    qproperty->setDuration(2500);

    //���ö����ٶ�����
    qproperty->setEasingCurve(QEasingCurve::OutCubic);

    //���ö�������
    qproperty->setLoopCount(2);

    //��ɫ������ʼ��
    QGraphicsColorizeEffect* qgrapgocscolorizeeffect=new QGraphicsColorizeEffect(this);
    ui->colorwidget->setGraphicsEffect(qgrapgocscolorizeeffect);
    qgraph=new QPropertyAnimation(qgrapgocscolorizeeffect,"color");
    qgraph->setStartValue(QColor(Qt::white));
    qgraph->setEndValue(QColor(Qt::black));
    qgraph->setDuration(1000);

    //��͸��������ʼ��
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

