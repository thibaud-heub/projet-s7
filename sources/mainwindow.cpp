#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_csvButton_clicked()
{
    ui->content->setCurrentIndex(0);
}


void MainWindow::on_imageButton_clicked()
{
    ui->content->setCurrentIndex(1);
}


void MainWindow::on_helpButton_clicked()
{
    ui->content->setCurrentIndex(2);
}


void MainWindow::on_csvAnalyzeButton_clicked()
{
    ui->content->setCurrentIndex(3);
}


void MainWindow::on_imageAnalyseButton_clicked()
{
    ui->content->setCurrentIndex(4);
}

