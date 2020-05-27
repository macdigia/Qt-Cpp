#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(customSlot(int)));

//    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(customSlot2(int)));

    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(customSlot(int)));

    connect(ui->dial,SIGNAL(sliderMoved(int)),this,SLOT(customSlot(int)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dial_valueChanged(int value)
{
    //    ui->label->setText("<center>" + QString::number(value) + "</center>");
}

void MainWindow::customSlot(int value)
{
     ui->label->setText("<center>" + QString::number(value) + "</center>");

     if(value == 99)
     {
         disconnect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(customSlot(int)));

     }

}

void MainWindow::customSlot2(int value)
{
     ui->label_2->setText("<center>" + QString::number(value) + "</center>");
}
