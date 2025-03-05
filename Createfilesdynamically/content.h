#ifndef CONTENT_H
#define CONTENT_H

#include <QDialog>

namespace Ui {
class content;
}

class content : public QDialog
{
    Q_OBJECT

public:
    explicit content(QWidget *parent = nullptr);
    ~content();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_released();

    void on_pushButton_pressed();

private:
    Ui::content *ui;
};

#endif // CONTENT_H
