#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton->setIcon(QIcon(":/icons/image.png"));


    QFile file(":/Files/Tags.rtf");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() <<"File Open Failed";
        return;
    }

    QTextStream in(&file);
    qDebug() << in.readAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}
