#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
    if(ui->radioButton->isChecked())
    {
        qDebug() <<"You belongs to 0 - 10 Age category";
    }
    if(ui->radioButton_2->isChecked())
    {
        qDebug() <<"You belongs to 11 - 20 Age category";
    }

    if(ui->radioButton_3->isChecked())
    {
        qDebug() <<"You belongs to 21 - 30 Age category";
    }

    if(ui->radioButton_4->isChecked())
    {
        qDebug() <<"You belongs to 31 - 40 Age category";
    }

}
