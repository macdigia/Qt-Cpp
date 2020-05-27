#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(200,150));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    for(int i = 1; i <=20; i++)
    {
        QString path = "/Users/macdigia/Pictures/OuskirtZoomIn/Image" + QString::number(i) + ".JPG";

        QListWidgetItem *item = new QListWidgetItem(QIcon(path),QString("Image" + QString::number(i) + ".JPG"));

        ui->listWidget->addItem(item);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
