#include "widget.h"
#include "ui_widget.h"
#include <QHostAddress>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("socket");
    nTcpSocket=new QTcpSocket(this);
    connect(nTcpSocket,SIGNAL(readyRead()),this,SLOT(receivemessage()));
    connect(nTcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState mstate)),this,SLOT(mstatechanged(QAbstractSocket::SocketState mstate)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::receivemessage()
{
    //��ȡ��Ϣ
    ui->textBrowser->append("server:"+nTcpSocket->readAll());
}



void Widget::mstatechanged(QAbstractSocket::SocketState mstate)
{
    switch(mstate){
    //�Ͽ�״̬
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("The server has been disconnected");
        break;
    //����״̬
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("The server has been connected");
        break;
    default:
        break;
    }
}


void Widget::on_pushButton_3_clicked()
{
    //��������
    if(nTcpSocket->state()==QAbstractSocket::ConnectedState){
    nTcpSocket->write(ui->lineEdit->text().toUtf8());
    }else{
        ui->textBrowser->append("Server not connected!");
    }
}


void Widget::on_pushButton_clicked()
{
    //���ӷ����
    nTcpSocket->connectToHost(QHostAddress("172.19.96.1"),100);
    ui->textBrowser->append("Start connect");
}


void Widget::on_pushButton_2_clicked()
{
    //�ر�����
    nTcpSocket->disconnectFromHost();
    ui->textBrowser->append("Stop connect");
}

