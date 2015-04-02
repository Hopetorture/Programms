#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setCentralWidget(ui->listView);
}

Dialog::~Dialog()
{
    delete ui;
}
