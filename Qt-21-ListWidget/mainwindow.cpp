#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //-SimpleText List.

    for(int i = 0; i < 10 ; i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(QString::number(i) + "Item");
        item->setIcon(QIcon("/Users/macdigia/Pictures/color.png"));
        item->setCheckState(Qt::Unchecked);

        ui->listWidget->addItem(item);

//        ui->listWidget->addItem(QString::number(i) + "Item");
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    qDebug() <<"Clicked" << item->text();

    if(item->checkState() == Qt::Checked)
    {
        item->setTextColor(Qt::red);
    }
}
