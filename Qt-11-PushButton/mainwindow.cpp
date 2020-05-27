#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //-ste text
    ui->pushButtonText->setText("Click Me");

    //Icon
    ui->pushButtonOnOff->setIcon(QIcon("/Users/macdigia/Pictures/On.png"));
    ui->pushButtonOnOff->setCheckable(true);


    ui->pushButtonMenue->setText("My Menu");
    QAction *a1 = new QAction;
    QAction *a2 = new QAction;
    QAction *a3 = new QAction;

    a1->setText("First");
    a2->setText("Secon");
    a3->setText("Third");

    QMenu *menu = new QMenu;
    menu->addAction(a1);
    menu->addAction(a2);
    menu->addAction(a3);

    ui->pushButtonMenue->setMenu(menu);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonText_clicked()
{
   qDebug() <<"Clicked";
}

void MainWindow::on_pushButtonOnOff_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButtonOnOff->setIcon(QIcon("/Users/macdigia/Pictures/Off.png"));
        qDebug() <<"Button Checked-- ON--";
    }
    else
    {
      ui->pushButtonOnOff->setIcon(QIcon("/Users/macdigia/Pictures/On.png"));
        qDebug() <<"Button Un Checked-- OFF--";

    }
}
