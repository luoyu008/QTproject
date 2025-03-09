/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QWidget *geometry;
    QWidget *colorwidget;
    QPushButton *pushButton_2;
    QWidget *colorwidget_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 150, 111, 41));
        geometry = new QWidget(Widget);
        geometry->setObjectName(QString::fromUtf8("geometry"));
        geometry->setGeometry(QRect(200, 170, 131, 91));
        geometry->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
"}"));
        colorwidget = new QWidget(Widget);
        colorwidget->setObjectName(QString::fromUtf8("colorwidget"));
        colorwidget->setGeometry(QRect(200, 310, 120, 80));
        colorwidget->setStyleSheet(QString::fromUtf8("QWidget{background-color:blue}"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 250, 101, 51));
        colorwidget_2 = new QWidget(Widget);
        colorwidget_2->setObjectName(QString::fromUtf8("colorwidget_2"));
        colorwidget_2->setGeometry(QRect(200, 430, 120, 80));
        colorwidget_2->setStyleSheet(QString::fromUtf8("QWidget{background-color:green\n"
"}"));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 370, 91, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\261\236\346\200\247\345\212\250\347\224\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\351\242\234\350\211\262\345\212\250\347\224\273", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\344\270\215\351\200\217\346\230\216\345\212\250\347\224\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
