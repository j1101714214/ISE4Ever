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



void MainWindow::on_SourceControl_clicked()
{
    pickframe->show();
}

void MainWindow::on_GernerateButton_clicked()
{
    //generate button event
}

void MainWindow::on_n_1_activated(int index)
{
    pickframe->show();
}


