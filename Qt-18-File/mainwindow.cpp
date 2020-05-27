#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    writeFile("/Users/macdigia/test.txt");

//    readFile("/Users/macdigia/test.txt");

    QFile file("/Users/macdigia/test.txt");
    file.remove();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::writeFile(QString fileName)
{
    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() <<"File Open failed";
    }

    QTextStream out(&file);

    out << "Welcome to Qt Tutorials";


    file.flush();

    file.close();


}

void MainWindow::readFile(QString fileName)
{
    QFile file(fileName);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() <<"File Open failed";
    }

    QTextStream in(&file);
    QString str = in.readAll();

    qDebug() << str;

    file.close();
}
