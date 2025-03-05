#include "widget.h"
#include "ui_widget.h"
#include "content.h"
#include <QFile>
#include <QDateTime>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    content *con=new content(this);
    con->resize(this->size());
    con->setModal(true);
    con->show();
    con->exec();


    delete con;
}

