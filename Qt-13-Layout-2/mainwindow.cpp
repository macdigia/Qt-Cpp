#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget;

    QPushButton *button1 = new QPushButton("A");
    QPushButton *button2 = new QPushButton("B");
    QPushButton *button3 =  new QPushButton("C");

    QHBoxLayout *hLayout = new QHBoxLayout;
    hLayout->addWidget(button1);
    hLayout->addWidget(button2);
    hLayout->addWidget(button3);

    QPushButton *button4 = new QPushButton("D");
    QPushButton *button5 = new QPushButton("E");
    QPushButton *button6 =  new QPushButton("F");

    QVBoxLayout *vLayout = new QVBoxLayout;
    vLayout->addWidget(button4);
    vLayout->addWidget(button5);
    vLayout->addWidget(button6);

    QVBoxLayout *vMainLayout = new QVBoxLayout;
    vMainLayout->addLayout(hLayout);
    vMainLayout->addLayout(vLayout);



    widget->setLayout(vMainLayout);
    widget->show();

    setCentralWidget(widget);



}

MainWindow::~MainWindow()
{
    delete ui;
}
