#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mywidget.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE
class Mywidget;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Mywidget *mywidget;
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
