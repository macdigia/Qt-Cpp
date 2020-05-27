#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget();

    //-Horizontal Layout.
    QPushButton *button1 = new QPushButton("A");
    QPushButton *button2 = new QPushButton("B");
    QPushButton *button3 = new QPushButton("C");

    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(button1);
    hLayout->addWidget(button2);
    hLayout->addWidget(button3);


    //-vertical Widgets Bound.
    QPushButton *button4 = new QPushButton("D");
    QPushButton *button5 = new QPushButton("E");
    QPushButton *button6 = new QPushButton("F");

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(button4);
    vLayout->addWidget(button5);
    vLayout->addWidget(button6);

    QVBoxLayout *vmainLaout = new QVBoxLayout;
    vmainLaout->addLayout(hLayout);
    vmainLaout->addLayout(vLayout);

    widget->setLayout(vmainLaout);

    setCentralWidget(widget);



}

MainWindow::~MainWindow()
{
    delete ui;
}
