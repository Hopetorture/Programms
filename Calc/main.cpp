#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QDebug>
#include <QLineEdit>


/*
 Создать обучающую программу «Таблица умножения».
 В этой программе пользователь вводит число, таблицу умножения для которого он хотел бы просмотреть,
 и диапазон множителей.
 Результирующая таблица умножения заполняет окно списка. Результаты представить в виде: 3*1=3
 */



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    MainWindow w;
    w.setWindowTitle("Multiplication table");
    w.show();


    return a.exec();
}
