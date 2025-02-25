#include "curriculum.h"
#include "ui_curriculum.h"

Curriculum::Curriculum(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Curriculum)
{
    ui->setupUi(this);
    Cutable=new QTableWidget(this);
    Cutable->resize(891,600);
    Cutable->setColumnCount(6);
    Cutable->setRowCount(7);
    Cutable->setVerticalHeaderLabels(QStringList()<<"星期一"<<"星期二"<<"星期三"<<"星期四"<<"星期五"<<"星期六"<<"星期日");
    Cutable->setHorizontalHeaderLabels(QStringList()<<"上午1"<<"上午2"<<"下午1"<<"下午2"<<"晚上1"<<"晚上2");
    for(int i=0;i<7;i++){
        Cutable->setRowHeight(i,80);
    }
    for(int i=0;i<6;i++){
        Cutable->setColumnWidth(i,140);
    }
}

Curriculum::~Curriculum()
{
    delete ui;
}
