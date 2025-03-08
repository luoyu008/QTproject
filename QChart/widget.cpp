#include "widget.h"
#include "ui_widget.h"
#include <QValueAxis> //������
#include <QSplineSeries>//����
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1.����ͼ����ͼ
    //QChartView* chartview=new QChartView();

    //2.����ͼ��
    QChart* chart=new QChart();

    //3.����x,y��
    QValueAxis* ValueAxisX=new QValueAxis();
    QValueAxis* ValueAxisY=new QValueAxis();

    //4.���������᷶Χ
    ValueAxisX->setRange(0,100);
    ValueAxisY->setRange(0,100);

    //5.����������ı������ʾ��ʽ
    ValueAxisX->setTitleText("ʱ��/min");
    ValueAxisY->setTitleText("�¶�/��C");
    ValueAxisX->setLabelFormat("%d");
    ValueAxisY->setLabelFormat("%d");

    ValueAxisX->setTickCount(10);
    ValueAxisY->setTickCount(10);

    //6.ͼ�����������
    chart->createDefaultAxes();
    chart->addAxis(ValueAxisX,Qt::AlignBottom);
    chart->addAxis(ValueAxisY,Qt::AlignLeft);

    //7.����ͼ������Լ�ͼ����ʾ
    chart->setTitle("tempature and time");
    chart->legend()->setVisible(true);

    //8.���ơ�����
    QSplineSeries* splineseries=new QSplineSeries();
    splineseries->append(0,30);
    splineseries->append(10,60);
    splineseries->append(20,100);
    splineseries->append(30,50);
    splineseries->append(40,80);
    splineseries->append(50,30);
    splineseries->append(60,40);
    splineseries->append(70,50);
    splineseries->append(80,60);
    splineseries->append(90,70);
    splineseries->append(100,80);
    //����������ɫ
    QPen pen(QColor(0xff566));
    splineseries->setPen(pen);

    //9.ͼ���������
    chart->addSeries(splineseries);

    //10.����������������������  Ҫ��ͼ���������֮��
    splineseries->attachAxis(ValueAxisX);
    splineseries->attachAxis(ValueAxisY);

    //11.��ͼ�������ͼ����ͼ
    ui->graphicsView->setChart(chart);


}

Widget::~Widget()
{
    delete ui;
}
