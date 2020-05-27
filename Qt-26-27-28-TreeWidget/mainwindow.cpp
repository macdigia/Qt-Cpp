#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    displayTree();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayTree()
{
    ui->treeWidget->setColumnCount(3);

    QStringList labels;
    labels <<"FileName" <<"FilePath" <<"Widget";
    ui->treeWidget->setHeaderLabels(labels);

    QTreeWidgetItem *root = new QTreeWidgetItem(ui->treeWidget);
    root->setText(0,"RootFile");
    root->setText(1,"Root File Path");
    root->setCheckState(0,Qt::Unchecked);
    root->setIcon(0,QIcon(":/icons/resource/dir.png"));
    ui->treeWidget->addTopLevelItem(root);
    ui->treeWidget->setItemWidget(root,2,new QPushButton("OK"));


    QTreeWidgetItem *child1 = new QTreeWidgetItem();
    child1->setText(0,"Child1File");
    child1->setText(1,"Child1 File Path");
    root->addChild(child1);

    child1->setCheckState(0,Qt::Unchecked);
    child1->setIcon(0,QIcon(":/icons/resource/file.png"));
    ui->treeWidget->setItemWidget(child1,2,new QPushButton("OK"));


    QTreeWidgetItem *child2 = new QTreeWidgetItem();
    child2->setText(0,"Child2File");
    child2->setText(1,"Child2 File Path");
    root->addChild(child2);
    child2->setCheckState(0,Qt::Unchecked);
    child2->setIcon(0,QIcon(":/icons/resource/file.png"));
    ui->treeWidget->setItemWidget(child2,2,new QPushButton("OK"));


    QTreeWidgetItem *child3 = new QTreeWidgetItem();
    child3->setText(0,"Child3File");
    child3->setText(1,"Child3 File Path");
    root->addChild(child3);
    child3->setCheckState(0,Qt::Unchecked);
    child3->setIcon(0,QIcon(":/icons/resource/file.png"));
    ui->treeWidget->setItemWidget(child3,2,new QPushButton("OK"));


    QTreeWidgetItem *child1_of_3 = new QTreeWidgetItem();
    child1_of_3->setText(0,"Child1_of_3File");
    child1_of_3->setText(1,"Child1_of_3 File Path");
    child3->addChild(child1_of_3);

    child1_of_3->setCheckState(0,Qt::Unchecked);
    child1_of_3->setIcon(0,QIcon(":/icons/resource/dir.png"));
    ui->treeWidget->setItemWidget(child1_of_3,2,new QPushButton("OK"));


    QTreeWidgetItem *child2_of_3 = new QTreeWidgetItem();
    child2_of_3->setText(0,"Child12_of_3File");
    child2_of_3->setText(1,"Child2_of_3 File Path");
    child3->addChild(child2_of_3);

    child2_of_3->setCheckState(0,Qt::Unchecked);
    child2_of_3->setIcon(0,QIcon(":/icons/resource/file.png"));
    ui->treeWidget->setItemWidget(child2_of_3,2,new QPushButton("OK"));


    QTreeWidgetItem *child3_of_3 = new QTreeWidgetItem();
    child3_of_3->setText(0,"Child3_of_3File");
    child3_of_3->setText(1,"Child3_of_3 File Path");
    child3->addChild(child3_of_3);

    child3_of_3->setCheckState(0,Qt::Unchecked);
    child3_of_3->setIcon(0,QIcon(":/icons/resource/file.png"));
    ui->treeWidget->setItemWidget(child3_of_3,2,new QPushButton("OK"));


}

void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
//    ui->label->setText(item->text(0) + "<br>" + item->text(1));
}




void MainWindow::on_treeWidget_itemSelectionChanged()
{
    ui->label->setText(ui->treeWidget->currentItem()->text(0) + "<br>" + ui->treeWidget->currentItem()->text(1));
}
