#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(1) + " * " + QString::number(i+1) + " = " + QString::number((1)*(i+1)));
        ui->tableWidget->setItem(i, 0, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(2) + " * " + QString::number(i+1) + " = " + QString::number((2)*(i+1)));
        ui->tableWidget->setItem(i, 1, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(3) + " * " + QString::number(i+1) + " = " + QString::number((3)*(i+1)));
        ui->tableWidget->setItem(i, 2, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(4) + " * " + QString::number(i+1) + " = " + QString::number((4)*(i+1)));
        ui->tableWidget->setItem(i, 3, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(5) + " * " + QString::number(i+1) + " = " + QString::number((5)*(i+1)));
        ui->tableWidget->setItem(i, 4, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(6) + " * " + QString::number(i+1) + " = " + QString::number((6)*(i+1)));
        ui->tableWidget->setItem(i, 5, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(7) + " * " + QString::number(i+1) + " = " + QString::number((7)*(i+1)));
        ui->tableWidget->setItem(i, 6, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(8) + " * " + QString::number(i+1) + " = " + QString::number((8)*(i+1)));
        ui->tableWidget->setItem(i, 7, item);
    }
    for(int i = 0; i<9; i++){
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(QString::number(9) + " * " + QString::number(i+1) + " = " + QString::number((9)*(i+1)));
        ui->tableWidget->setItem(i, 8, item);
    }
}

