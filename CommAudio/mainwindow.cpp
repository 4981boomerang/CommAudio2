#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientui.h"
#include "serverui.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_serverButton_clicked()
{
    this->hide();
    ServerUI *sui = new ServerUI();
    sui->show();
}

void MainWindow::on_clientButton_clicked()
{
    this->hide();
    ClientUI *cui = new ClientUI();
    cui->show();
}
