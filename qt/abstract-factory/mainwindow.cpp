#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->verticalHeader()->setDefaultSectionSize(170);
    ui->tableView->horizontalHeader()->setDefaultSectionSize(200);

    QImage mc("/home/gaba/Desktop/coursework2019/images/mc.png");
    QImage ms("/home/gaba/Desktop/coursework2019/images/ms.png");
    QImage mct("/home/gaba/Desktop/coursework2019/images/mct.png");
    QImage vc("/home/gaba/Desktop/coursework2019/images/vc.png");
    QImage vs("/home/gaba/Desktop/coursework2019/images/vs.png");
    QImage vct("/home/gaba/Desktop/coursework2019/images/vct.png");

    QStandardItemModel *model = new QStandardItemModel();

    QStandardItem *item00 = new QStandardItem();
    item00->setData(QVariant(QPixmap::fromImage(mc)), Qt::DecorationRole);
    model->setItem(0, 0, item00);

    QStandardItem *item01 = new QStandardItem();
    item01->setData(QVariant(QPixmap::fromImage(ms)), Qt::DecorationRole);
    model->setItem(0, 1, item01);

    QStandardItem *item02 = new QStandardItem();
    item02->setData(QVariant(QPixmap::fromImage(vs)), Qt::DecorationRole);
    model->setItem(0, 2, item02);

    QStandardItem *item10 = new QStandardItem();
    item10->setData(QVariant(QPixmap::fromImage(vc)), Qt::DecorationRole);
    model->setItem(1, 0, item10);

    QStandardItem *item11 = new QStandardItem();
    item11->setData(QVariant(QPixmap::fromImage(mct)), Qt::DecorationRole);
    model->setItem(1, 1, item11);

    QStandardItem *item12 = new QStandardItem();
    item12->setData(QVariant(QPixmap::fromImage(vct)), Qt::DecorationRole);
    model->setItem(1, 2, item12);

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

