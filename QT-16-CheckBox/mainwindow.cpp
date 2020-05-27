#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_message->setWordWrap(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_order_clicked()
{

    QString str = "Thank You!! Your Order Items ";

    if(ui->checkBox_burger->isChecked())
    {
        str += "Burger,";
    }

    if(ui->checkBox_HotDog->isChecked())
    {
        str += "HotDog,";

    }
    if(ui->checkBox_pasta->isChecked())
    {
        str += "Pasta,";

    }

    if(ui->checkBox_pizza->isChecked())
    {
        str += "Pizza.";

    }

    str += " Will be placed shortly";


    ui->label_message->setText(str);


}
