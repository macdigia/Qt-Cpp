#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>
#include <QCombobox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readDataBase()
{
    QString dbfile = QDir::homePath() + "/Qt_Samples/resource/ProgramDb.db" ;

    qDebug() << "db file:" <<dbfile;
    
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("QSQLITE","DBConnection"); //Driver name, Connection name.
    database.setDatabaseName(dbfile);

    if(!database.open())
    {
        qDebug() <<"Database open Error" << database.lastError().text();
        return;
    }

    QSqlQuery query(database);

    QString query_str = "SELECT * from company";

    if(!query.exec(query_str))
    {
        qDebug() <<"Query not executed";
        return;
    }


    ui->tableWidget->setColumnCount(9);

    QStringList header;
    header << ""<< "Name" <<"Company" << "Address" <<"Photo" <<"Gender" <<"Company Website" <<"Resume" <<"Is Intrested";
    ui->tableWidget->setHorizontalHeaderLabels(header);

    int rowCount = 0;

    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);

        QTableWidgetItem *select = new QTableWidgetItem;
        QTableWidgetItem *name = new QTableWidgetItem;
        QTableWidgetItem *company = new QTableWidgetItem;
        QTableWidgetItem *address = new QTableWidgetItem;
        QTableWidgetItem *photo = new QTableWidgetItem;
        QTableWidgetItem *gender = new QTableWidgetItem;
        QTableWidgetItem *company_link = new QTableWidgetItem;
        QTableWidgetItem*resume_link = new QTableWidgetItem;
        QTableWidgetItem *is_intrested = new QTableWidgetItem;

        //-Set Checkbox
        if(query.value(1).toString() == "0")
        {
            select->setCheckState(Qt::Unchecked);
        }
        else
        {
            select->setCheckState(Qt::Checked);
        }
        name->setText(query.value(2).toString());
        company->setText(query.value(3).toString());
        address->setText(query.value(4).toString());
        QString img_path = QDir::homePath() + query.value(5).toString();
        photo->setData(Qt::DecorationRole,QPixmap(img_path).scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        photo->setText(query.value(5).toString());
        gender->setText(query.value(6).toString());
        company_link->setText(query.value(7).toString());
        resume_link->setText(QDir::homePath() + query.value(8).toString());
        is_intrested->setText(query.value(9).toString());

        ui->tableWidget->setItem(rowCount,0,select);
        ui->tableWidget->setItem(rowCount,1,name);
        ui->tableWidget->setItem(rowCount,2,company);
        ui->tableWidget->setItem(rowCount,3,address);
        ui->tableWidget->setItem(rowCount,4,photo);
        ui->tableWidget->setItem(rowCount,5,gender);
        ui->tableWidget->setItem(rowCount,6,company_link);
        ui->tableWidget->setItem(rowCount,7,resume_link);

        QComboBox *combo = new QComboBox;
        combo->insertItem(0,"Select");
        combo->insertItem(1,"NO");
        combo->insertItem(2,"Yes");

        ui->tableWidget->setCellWidget(rowCount,8,combo);
//        ui->tableWidget->setItem(rowCount,8,is_intrested);

        ui->tableWidget->setColumnWidth(4,110);
        ui->tableWidget->setRowHeight(rowCount,110);

        rowCount++;

    }

    database.close();

}


void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    ui->label->setPixmap(QPixmap(QDir::homePath() + ui->tableWidget->item(row,4)->text()));

    ui->label_2->setText( "Name: " + ui->tableWidget->item(row,1)->text() + "<br>"
                          "Company: " + ui->tableWidget->item(row,2)->text() + "<br>"
                          "Address: " + ui->tableWidget->item(row,3)->text() + "<br>"
                          "Gender: " + ui->tableWidget->item(row,5)->text() + "<br>"
                          "Company Link: " + "<a href=\"url\">" +  ui->tableWidget->item(row,6)->text() + "</a><br>"
                          "Resume: " + "<a href=\"url\">" + ui->tableWidget->item(row,7)->text() + "</a><br>"
                          );


}
