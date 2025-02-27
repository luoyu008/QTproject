#include "widget.h"

#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/style.qss");
    //�ж��ļ��Ƿ����
    if(file.exists()){
        //��ֻ���ķ�ʽ��
        file.open(QFile::ReadOnly);
        //���ַ����ķ�ʽ��������Ľ��
        QString styleSheet=QLatin1String(file.readAll());
        //����ȫ����ʽ
        qApp->setStyleSheet(styleSheet);
        //�ر��ļ�
        file.close();
    }
    Widget w;
    w.show();
    return a.exec();
}
