#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_2->setText("<b>To learn something you must be hungry for knowledge Always!!!</b>");
}

MainWindow::~MainWindow()
{
    delete ui;
}
