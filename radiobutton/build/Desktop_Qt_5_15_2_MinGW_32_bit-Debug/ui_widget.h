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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        radioButton = new QRadioButton(Widget);
        buttonGroup_2 = new QButtonGroup(Widget);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(280, 150, 118, 23));
        radioButton_2 = new QRadioButton(Widget);
        buttonGroup_2->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(280, 210, 118, 23));
        radioButton_3 = new QRadioButton(Widget);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(550, 160, 118, 23));
        radioButton_4 = new QRadioButton(Widget);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(550, 220, 118, 23));
        radioButton_5 = new QRadioButton(Widget);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(550, 290, 118, 23));
        pushButton = new QPushButton(Widget);
        buttonGroup_3 = new QButtonGroup(Widget);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(pushButton);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 140, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:green;border-radius:10px}\n"
"QPushButton::checked{background-color:red;color:white}"));
        pushButton->setCheckable(true);
        pushButton_2 = new QPushButton(Widget);
        buttonGroup_3->addButton(pushButton_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 200, 93, 28));
        pushButton_2->setCheckable(true);
        pushButton_3 = new QPushButton(Widget);
        buttonGroup_3->addButton(pushButton_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 260, 93, 28));
        pushButton_3->setCheckable(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "\350\257\276\347\250\2131", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "\350\257\276\347\250\2132", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Widget", "\350\257\276\347\250\2133", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setStyleSheet(QCoreApplication::translate("Widget", "QPushButton{background-color:green;border-radius:10px}\n"
"QPushButton::checked{background-color:red;color:white}", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setStyleSheet(QCoreApplication::translate("Widget", "QPushButton{background-color:green;border-radius:10px}\n"
"QPushButton::checked{background-color:red;color:white}", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
