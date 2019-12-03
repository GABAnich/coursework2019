#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "FurnitureFactory.h"
#include "Item.h"

#include <vector>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setTable();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    vector<Item> items;
    FurnitureFactory *factory;
};
#endif // MAINWINDOW_H
