#include "content.h"
#include "ui_content.h"
#include <QDebug>
#include <QFile>
#include <QDateTime>
content::content(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::content)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
}

content::~content()
{
    delete ui;
}


void content::on_pushButton_released()
{
    ui->pushButton->setIcon(QIcon(":/image/left.jpg"));
    QFile file;
    file.setFileName(QDateTime::currentDateTime().toString("yyyyMMddhhmmss")+".txt");

    if(!file.open(QIODevice::ReadWrite)){
        qDebug()<<"file creat fail"<<Qt::endl;
        return;
    }
    file.write(ui->textEdit->toPlainText().toUtf8());
    if(ui->textEdit->toPlainText().length()==0){
        file.remove();
    }
    ui->textEdit->clear();
    file.close();
}


void content::on_pushButton_pressed()
{
    ui->pushButton->setIcon(QIcon(":/image/leftpressed.jpg"));
}


void content::on_pushButton_clicked()
{

}

