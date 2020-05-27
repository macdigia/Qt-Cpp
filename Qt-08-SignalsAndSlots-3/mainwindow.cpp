#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerObj = new TimerClass;
    connect(timerObj,SIGNAL(timerCustomSignal(int)),this,SLOT(timerCustomSlot(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerCustomSlot(int value)
{
   ui->label->setText("<center>"+QString::number(value) + "</center>");
}
