#include "finance.h"
#include "ui_finance.h"

Finance::Finance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Finance)
{
    ui->setupUi(this);
}

Finance::~Finance()
{
    delete ui;
}
