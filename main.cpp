#include "mainwindow.h"
#include "./Src/UIData/stumsg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // StuMsg s;
    // s.show();
    return a.exec();
}
