#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>
#include <QFile>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,"ѡ���ı�","D:\\QT\\project");
    //qDebug()<<filename<<endl;
    //����Ҫ�򿪵��ļ�
    file.setFileName(filename);
    //���ļ�
    if(!file.open(QIODevice::ReadOnly)){
        qDebug()<<"open fail"<<Qt::endl;
        return;
    }
    //��������ʾ�ļ�
    ui->textEdit->setPlainText(file.readAll());

    file.close();
}


void Widget::on_pushButton_2_clicked()
{
    if(file.fileName().isEmpty()){
        return;
    }

    if(!file.open(QIODevice::ReadWrite)){
        qDebug()<<"open fail"<<Qt::endl;
        return;
    }
    file.write(ui->textEdit->toPlainText().toUtf8());

    file.close();

    ui->textEdit->clear();
}

