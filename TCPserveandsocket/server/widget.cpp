#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mTcpserver= new QTcpServer(this);

    connect(mTcpserver, SIGNAL(newConnection()), this, SLOT(mnewconnect()));


    this->setWindowTitle("server");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mnewconnect()
{
    //与客户端连接
    QTcpSocket* mTcpSocket=mTcpserver->nextPendingConnection();

    //打印客户端的IP地址和端口号
    ui->textBrowser->append("Client IP address:"+mTcpSocket->peerAddress().toString());
    ui->textBrowser->append("Client port number:"+QString::number(mTcpSocket->peerPort()));
    connect(mTcpSocket,SIGNAL(readyRead()),this,SLOT(receivemessage()));
    connect(mTcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(mstatechanged(QAbstractSocket::SocketState)));
}

void Widget::receivemessage()
{
    //接收消息
    QTcpSocket* mTcpSocket=(QTcpSocket *)sender();
    ui->textBrowser->append("socket:"+mTcpSocket->readAll());
}

void Widget::mstatechanged(QAbstractSocket::SocketState mstate)
{
    QTcpSocket* mTcpSocket=(QTcpSocket *)sender();
    switch(mstate){
    //断开状态
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("The client is disconnected. Procedure");
        mTcpSocket->deleteLater();
        break;
    //连接状态
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("The client is connected. Procedure");
        break;
    default:
        break;
    }
}


void Widget::on_pushButton_3_clicked()
{
    //服务端向客户端发数据
    QList<QTcpSocket *> socketlist=mTcpserver->findChildren<QTcpSocket*>();
    if(socketlist.count()!=0){
    foreach (QTcpSocket * mTcpSocket, socketlist) {
        mTcpSocket->write(ui->lineEdit->text().toUtf8());
    }
    }else{
        ui->textBrowser->append("none connect");
    }
}


void Widget::on_pushButton_clicked()
{
    //开始监听
    mTcpserver->listen(QHostAddress("172.19.96.1"),100);
    ui->textBrowser->append("Start listening");
}


void Widget::on_pushButton_2_clicked()
{
    //关闭监听
    mTcpserver->close();
    ui->textBrowser->append("Stop listening");
}

