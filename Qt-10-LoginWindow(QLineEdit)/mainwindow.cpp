#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login Window");

    //-Placeholder text.
    ui->lineEditUser->setPlaceholderText("User");
    ui->lineEditPassword->setPlaceholderText("Password");

    //-Clear Button Enable
    ui->lineEditUser->setClearButtonEnabled(true);
    ui->lineEditPassword->setClearButtonEnabled(true);

    //-Password mode set
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);

    //icons
    QIcon user("/Users/macdigia/Pictures/user.png");
    QIcon pass("/Users/macdigia/Pictures/password.png");

    ui->lineEditUser->addAction(user,QLineEdit::LeadingPosition);
    ui->lineEditPassword->addAction(pass,QLineEdit::LeadingPosition);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEditPassword_returnPressed()
{
    ui->labelMessage->setText("Login Successful");
}
