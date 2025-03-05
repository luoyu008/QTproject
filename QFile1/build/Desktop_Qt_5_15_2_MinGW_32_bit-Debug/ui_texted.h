/********************************************************************************
** Form generated from reading UI file 'texted.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTED_H
#define UI_TEXTED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TextEd
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *TextEd)
    {
        if (TextEd->objectName().isEmpty())
            TextEd->setObjectName(QString::fromUtf8("TextEd"));
        TextEd->resize(400, 300);
        pushButton = new QPushButton(TextEd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 40, 40));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{image:url(:/image/arrowhead.jpg)\n"
"}"));

        retranslateUi(TextEd);

        QMetaObject::connectSlotsByName(TextEd);
    } // setupUi

    void retranslateUi(QDialog *TextEd)
    {
        TextEd->setWindowTitle(QCoreApplication::translate("TextEd", "Dialog", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TextEd: public Ui_TextEd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTED_H
