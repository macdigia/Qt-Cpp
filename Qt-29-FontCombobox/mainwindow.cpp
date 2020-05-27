#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Qt Creator provides a cross-platform, complete integrated "
                       "development environment (IDE) for application developers to create "
                       "applications for multiple desktop, "
                       "embedded, and mobile device platforms,"
                       " such as Android and iOS. It is available for Linux, "
                       "macOS and Windows operating systems. For more information, "
                       "see Supported Platforms. "
                       "તેને અજમાવી જુઓ, નીચે તમારી ભાષા અને ઇનપુટ સાધન પસંદ કરો અને લખવાનું શરૂ કરો");

    ui->fontComboBox->setWritingSystem(QFontDatabase::Gujarati);

    ui->fontComboBox->setFontFilters(QFontComboBox::ScalableFonts);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->label->setFont(f);
}
