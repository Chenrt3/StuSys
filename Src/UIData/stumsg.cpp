#include "stumsg.h"
#include "ui_stumsg.h"

StuMsg::StuMsg(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StuMsg)
{
    ui->setupUi(this);
    Msgtable=new QTableWidget(this);
    Msgtable->resize(891,600);
    Msgtable->setRowCount(5);
    Msgtable->setColumnCount(9);
    Msgtable->setHorizontalHeaderLabels(QStringList()<<""<<"编号"<<"姓名"<<"性别"<<"生日"<<"加入时间"<<"学习目标"<<"当前进度"<<"照片");
    for(int i=0;i<9;++i){
        Msgtable->setColumnWidth(i,99);
    }
    for(int i=0;i<5;++i){
        Msgtable->setRowHeight(i,50);
    }
}

StuMsg::~StuMsg()
{
    delete ui;
}
