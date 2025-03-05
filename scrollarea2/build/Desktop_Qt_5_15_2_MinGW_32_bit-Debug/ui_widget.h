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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        Widget->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(100, 10, 691, 591));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea { \n"
"    border: 0px; \n"
"    outline: 0px;  /* \347\247\273\351\231\244\347\204\246\347\202\271\350\231\232\347\272\277\346\241\206 */\n"
"}\n"
" QScrollBar:vertical {\n"
"     width:20px;\n"
"background:white\n"
" }\n"
"QScrollBar::handle:vertical {\n"
"     background: grey;\n"
"     border-radius:10px\n"
" }\n"
"QScrollBar::handle:vertical:hover{\n"
"     background: rgb(0, 255, 0);\n"
" }"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 671, 1600));
        scrollAreaWidgetContents->setMinimumSize(QSize(600, 1600));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 81, 21));
        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(100, 30, 98, 23));
        checkBox_2 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(100, 70, 98, 23));
        checkBox_3 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(100, 120, 98, 23));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
