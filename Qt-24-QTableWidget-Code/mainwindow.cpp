#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TableWidgetDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TableWidgetDisplay()
{
   QTableWidget *table = new QTableWidget(this);
   table->setRowCount(4);
   table->setColumnCount(4);

   QStringList hLabels;
   hLabels <<"Name" <<"Surname" <<"Age" <<"Address";
   table->setHorizontalHeaderLabels(hLabels);

   //-Insert Data in the cell.

   for(int i = 0 ; i < table->rowCount(); i++)
   {
       QTableWidgetItem *item;
       for(int j = 0; j < table->columnCount(); j++)
       {
           item = new QTableWidgetItem;

           if(j == 0)
               item->setText("Name" + QString::number(i));
           if(j == 1)
               item->setText("Surname" + QString::number(i));
           if(j == 2)
               item->setText("Age" + QString::number(i));
           if(j == 3)
               item->setText("Address,City,State,Country" + QString::number(i));

           table->setItem(i,j,item);
       }
   }

   table->setStyleSheet("QTableWidget{"
                        "background-color: #C0C0C0;"
                        "alternate-background-color:	#606060;"
                        "selection-background-color:#282828;"
                        "}");

   table->setAlternatingRowColors(true);

   //-Cell Items Properties
   table->setSelectionMode(QAbstractItemView::ExtendedSelection);
   table->setSelectionBehavior(QAbstractItemView::SelectRows);
   table->setTextElideMode(Qt::ElideRight);

   //Table Properties
   table->setShowGrid(true);
   table->setGridStyle(Qt::DotLine);
   table->setSortingEnabled(true);
   table->setCornerButtonEnabled(true);

   //-Header Properties.
   table->horizontalHeader()->setVisible(true);
   table->horizontalHeader()->setDefaultSectionSize(150);
   table->horizontalHeader()->setStretchLastSection(true);

   this->setCentralWidget(table);
}


