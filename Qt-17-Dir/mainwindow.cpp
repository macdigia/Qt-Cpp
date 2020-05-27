#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir dir("/Users/macdigia/SampleDir/Sample2/Sample3/Sample4");

    //-1.Create Dir.
//    if(dir.mkpath("/Users/macdigia/SampleDir/Sample2/Sample3/Sample4"))
//    {
//        qDebug() <<"Directory Path";
//    }


    if(dir.exists())
    {
        qDebug() <<"Directory Exist";

    }
    else
    {
        qDebug() <<"Not Exist";
    }

    if(dir.isEmpty())
    {
       qDebug() <<"Directory is Empty";
    }
    else
    {
        qDebug() <<"Not empty";
    }


    if(dir.rmdir("/Users/macdigia/SampleDir/Sample2"))
    {
        qDebug() <<"Dir Deleted";
    }
    else
    {
        qDebug() <<"Not Deleted";
    }




}

MainWindow::~MainWindow()
{
    delete ui;
}
