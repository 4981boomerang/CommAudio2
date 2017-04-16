#include "serverui.h"
#include "ui_serverui.h"

ServerUI::ServerUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerUI)
{
    ui->setupUi(this);
    ServerUI::setButtons();
}

ServerUI::~ServerUI()
{
    delete ui;
}
void ServerUI::setButtons(){
}
