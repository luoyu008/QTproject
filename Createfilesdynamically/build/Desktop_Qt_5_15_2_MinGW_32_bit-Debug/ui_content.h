/********************************************************************************
** Form generated from reading UI file 'content.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENT_H
#define UI_CONTENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_content
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *content)
    {
        if (content->objectName().isEmpty())
            content->setObjectName(QString::fromUtf8("content"));
        content->resize(400, 300);
        widget = new QWidget(content);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 401, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(100, 40));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none\n"
"}\n"
"QPushButton::pressed{\n"
"color:rgb(0, 255, 127);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/left.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setCheckable(false);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(content);

        QMetaObject::connectSlotsByName(content);
    } // setupUi

    void retranslateUi(QDialog *content)
    {
        content->setWindowTitle(QCoreApplication::translate("content", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("content", "\345\244\207\345\277\230\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class content: public Ui_content {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENT_H
