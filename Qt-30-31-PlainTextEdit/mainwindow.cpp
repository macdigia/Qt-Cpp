#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plainTextEdit->appendPlainText("Qt Creator provides a cross-platform, complete integrated development "
                                    "environment (IDE) for application developers to create applications for "
                                    "multiple desktop, embedded, and mobile device platforms, such as Android"
                                    " and iOS. It is available for Linux, macOS and Windows operating systems. "
                                    "For more information, see Supported Platforms."
                                    "In addition, you can use the experimental WebAssembly plugin to build applications in"
                                    " web format and run them in web browsers. 111111111111111 <b> This is Demo </b>");



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->appendPlainText("Qt Creator provides a cross-platform, complete integrated development "
                                    "environment (IDE) for application developers to create applications for "
                                    "multiple desktop, embedded, and mobile device platforms, such as Android"
                                    " and iOS. It is available for Linux, macOS and Windows operating systems. "
                                    "For more information, see Supported Platforms."
                                    "In addition, you can use the experimental WebAssembly plugin to build applications in"
                                    " web format and run them in web browsers.222222222222");

}

void MainWindow::on_pushButton_2_clicked()
{
   qDebug() << ui->plainTextEdit->toPlainText();
}
