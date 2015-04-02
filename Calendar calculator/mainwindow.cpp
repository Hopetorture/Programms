#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   // QString date1=ui->lineEdit->text();
   // QString date2=ui->lineEdit_2->text();
    QDate mDate=ui->calendarWidget->selectedDate();
    QDate mDate2=ui->calendarWidget_2->selectedDate();


    QString strDate;
    std::string temp;
    uint int_temp;
    std::string out="дней между датами.";
    if(mDate>mDate2)
    {
        int_temp=(mDate2.daysTo(mDate));
        out="дней назад";
    }
    else{
    int_temp=(mDate.daysTo(mDate2));
    }
    temp=std::to_string(int_temp)+"  "+out;
    strDate=QString::fromStdString(temp);
    ui->label_5->setText(strDate);


}
