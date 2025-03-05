#include "texted.h"
#include "ui_texted.h"

TextEd::TextEd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TextEd)
{
    ui->setupUi(this);
}

TextEd::~TextEd()
{
    delete ui;
}
