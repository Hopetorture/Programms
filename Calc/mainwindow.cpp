#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QLineEdit>
#include <string>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setInputMask("D000");
    ui->lineEdit_2->setInputMask("D00");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{    


        ui->listWidget->clear();



    QString Qnumber=ui->lineEdit->text();

    int static_number=Qnumber.toInt();


    QString Qmulti=ui->lineEdit_2->text();
    int static_multi=Qmulti.toInt();




    for(int i=1;i<=(static_multi);++i)
    {

        int composition = i*static_number;

        std::string temp=std::to_string(static_number)+"*"+std::to_string(i)+"="+std::to_string(composition);


        QString label=QString::fromStdString(temp);;
        ui->listWidget->addItem(label);
    }




}
