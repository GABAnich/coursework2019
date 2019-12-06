#include "ModernFurnitureFactory.cpp"
#include "VictorianFurnitureFactory.cpp"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QPixmap>
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->verticalHeader()->setDefaultSectionSize(170);
    ui->tableView->horizontalHeader()->setDefaultSectionSize(200);

    this->factory = new ModernFurnitureFactory();
}

void MainWindow::setTable()
{
    int i = 0;
    QStandardItemModel *model = new QStandardItemModel();
    for (auto el = this->items.begin(); el != this->items.end(); ++el)
    {
        QString imageURL = QString::fromStdString(el->getImageURL());
        QImage image(imageURL);
        QStandardItem *item = new QStandardItem();
        item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
        model->setItem(i / 3, i % 3, item);
        i++;
    }
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Chair *chair = this->factory->createChair();
    this->items.push_back(*chair);
    setTable();
}

void MainWindow::on_pushButton_2_clicked()
{
    Sofa *sofa = this->factory->createSofa();
    this->items.push_back(*sofa);
    setTable();
}

void MainWindow::on_pushButton_3_clicked()
{
    CoffeeTable *coffeeTable = this->factory->createCoffeeTable();
    this->items.push_back(*coffeeTable);
    setTable();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) {
        this->factory = new ModernFurnitureFactory();
    } else if (index == 1) {
        this->factory = new VictorianFurnitureFactory();
    }
}
