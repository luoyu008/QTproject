#ifndef WIDGET_H
#define WIDGET_H
#include <QTcpSocket>
#include <QHostAddress>
#include <QWidget>
#include <QTcpServer>
#include <QAbstractSocket>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
    Ui::Widget *ui;
    QTcpServer* mTcpserver;
private slots:
    void mnewconnect();
    void receivemessage();
    void mstatechanged(QAbstractSocket::SocketState);
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // WIDGET_H
