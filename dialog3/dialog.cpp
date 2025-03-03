#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //���ر߿�
    setWindowFlag(Qt::FramelessWindowHint);
    //͸��ģʽ
    setAttribute(Qt::WA_TranslucentBackground);
}

Dialog::~Dialog()
{
    delete ui;
}
