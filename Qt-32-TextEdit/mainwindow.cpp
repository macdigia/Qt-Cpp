#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    text = "Plain Text "
           "Qt Creator provides a cross-platform,"
           "complete integrated development environment (IDE) "
           "for application developers to create applications for "
           "multiple desktop, embedded"
           "<h2>HTML TEXT</h2><br>"
           "<html><b>This is Bold Font</b></html><br><br>"
           "<b>Image Displayed:<b> <br>"
           "<img src=\"/Users/macdigia/Downloads/aa.png\" width=\"200\" height=\"200\" >";
    ui->textEdit->setText(text);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButtonPlainText_toggled(bool checked)
{
    ui->textEdit->clear();
    ui->textEdit->setPlainText(text);
}

void MainWindow::on_radioButton_HtmlText_toggled(bool checked)
{
    ui->textEdit->clear();
    ui->textEdit->setHtml(text);

}

void MainWindow::on_radioButton_MarkDown_toggled(bool checked)
{
    ui->textEdit->clear();
    ui->textEdit->setMarkdown(text);

}

void MainWindow::on_pushButton_clicked()
{
    qDebug() <<"Plain Text: "<<ui->textEdit->toPlainText();
    qDebug() <<"------------------------------------";
    qDebug() <<"HTML: "<<ui->textEdit->toHtml();
    qDebug() <<"------------------------------------";
    qDebug() <<"Mark Down: "<<ui->textEdit->toMarkdown();

}
