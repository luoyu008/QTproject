#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug()<<"中问"<<endl;

    ui->setupUi(this);

    school=new School(this);
    student=new Student(this);
    connect(school,SIGNAL(Notice()),student,SLOT(Receive()));
    emit school->Notice();

    pushbutton=new QPushButton(this);
    pushbutton->setGeometry(50, 100, 60, 50);
    pushbutton->setText("push");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    static int i=0;
    i++;
    qDebug()<<"push run! "<<i<<endl;
}
