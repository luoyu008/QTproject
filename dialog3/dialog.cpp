#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //Òþ²Ø±ß¿ò
    setWindowFlag(Qt::FramelessWindowHint);
    //Í¸Ã÷Ä£Ê½
    setAttribute(Qt::WA_TranslucentBackground);
}

Dialog::~Dialog()
{
    delete ui;
}
