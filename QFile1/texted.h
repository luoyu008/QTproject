#ifndef TEXTED_H
#define TEXTED_H

#include <QDialog>

namespace Ui {
class TextEd;
}

class TextEd : public QDialog
{
    Q_OBJECT

public:
    explicit TextEd(QWidget *parent = nullptr);
    ~TextEd();

private:
    Ui::TextEd *ui;
};

#endif // TEXTED_H
