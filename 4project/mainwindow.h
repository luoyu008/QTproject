#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "school.h"
#include "student.h"
#include <QMainWindow>
#include <QPushButton.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class School;
class Student;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //实例化对象
    School *school;
    Student *student;
    QPushButton *pushbutton;
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
