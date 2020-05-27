#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplitter>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *widget = new QWidget;

    QVBoxLayout *hLayout = new QVBoxLayout;

    QSplitter *splitter = new QSplitter;

    QPushButton *button1 = new QPushButton("A");
    QPushButton *button2 = new QPushButton("B");
    QPushButton *button3 = new QPushButton("C");

    splitter->addWidget(button1);
    splitter->addWidget(button2);
    splitter->addWidget(button3);
    splitter->setOrientation(Qt::Vertical);

    hLayout->addWidget(splitter);

    widget->setLayout(hLayout);

    setCentralWidget(widget);


}

MainWindow::~MainWindow()
{
    delete ui;
}
