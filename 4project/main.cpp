#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //std::cout<<"Ӣ��"<<std::endl;
    w.show();
    return a.exec();
}
