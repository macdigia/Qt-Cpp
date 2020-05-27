#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setTextFormat(Qt::PlainText);
    ui->label->setWordWrap(true);
    ui->label->setText("<b>Welcome to MACDIGIA Welcome to MACDIGIA Welcome to MACDIGIA Welcome to MACDIGIA Welcome to MACDIGIA</b>");

    //2. Image Display
    ui->label_2->setPixmap(QPixmap("/Users/macdigia/Pictures/image.png"));

    //3. Hyper link.
   ui->label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
   ui->label_3->setOpenExternalLinks(true);
   ui->label_3->setTextFormat(Qt::RichText);
   ui->label_3->setText("<a href=\"http://www.macdigia.com\"> macdigia </a>");


}

MainWindow::~MainWindow()
{
    delete ui;
}
