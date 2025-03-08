#include "widget.h"
#include "ui_widget.h"
#include <QValueAxis> //坐标轴
#include <QSplineSeries>//曲线
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1.创建图表视图
    //QChartView* chartview=new QChartView();

    //2.创建图表
    QChart* chart=new QChart();

    //3.创建x,y轴
    QValueAxis* ValueAxisX=new QValueAxis();
    QValueAxis* ValueAxisY=new QValueAxis();

    //4.设置坐标轴范围
    ValueAxisX->setRange(0,100);
    ValueAxisY->setRange(0,100);

    //5.设置坐标轴的标题和显示格式
    ValueAxisX->setTitleText("时间/min");
    ValueAxisY->setTitleText("温度/°C");
    ValueAxisX->setLabelFormat("%d");
    ValueAxisY->setLabelFormat("%d");

    ValueAxisX->setTickCount(10);
    ValueAxisY->setTickCount(10);

    //6.图表添加坐标轴
    chart->createDefaultAxes();
    chart->addAxis(ValueAxisX,Qt::AlignBottom);
    chart->addAxis(ValueAxisY,Qt::AlignLeft);

    //7.设置图表标题以及图例显示
    chart->setTitle("tempature and time");
    chart->legend()->setVisible(true);

    //8.绘制、曲线
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
    //设置曲线颜色
    QPen pen(QColor(0xff566));
    splineseries->setPen(pen);

    //9.图表添加曲线
    chart->addSeries(splineseries);

    //10.将曲线数据与坐标轴相连  要在图表添加曲线之后
    splineseries->attachAxis(ValueAxisX);
    splineseries->attachAxis(ValueAxisY);

    //11.将图表放置于图表视图
    ui->graphicsView->setChart(chart);


}

Widget::~Widget()
{
    delete ui;
}
