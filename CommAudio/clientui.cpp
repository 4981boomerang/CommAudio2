#include "clientui.h"
#include "ui_clientui.h"

ClientUI::ClientUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientUI)
{
    ui->setupUi(this);
//    ClientUI::setButtons();
}

ClientUI::~ClientUI()
{
    delete ui;
}

void ClientUI::setButtons(){
    QPalette pal = ui->serverConnectButton->palette();
    pal.setColor(QPalette::Button, QColor(Qt::blue));
    ui->serverConnectButton->setAutoFillBackground(true);
    ui->serverConnectButton->setPalette(pal);
    ui->serverConnectButton->update();
}
