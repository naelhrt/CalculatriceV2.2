#include "calculatricev2.h"
#include "ui_calculatricev2.h"

CalculatriceV2::CalculatriceV2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatriceV2)
{
    ui->setupUi(this);
}

CalculatriceV2::~CalculatriceV2()
{
    delete ui;
}

