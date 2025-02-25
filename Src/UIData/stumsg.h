#ifndef STUMSG_H
#define STUMSG_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
namespace Ui {
class StuMsg;
}

class StuMsg : public QWidget
{
    Q_OBJECT

public:
    explicit StuMsg(QWidget *parent = nullptr);
    ~StuMsg();

private:
    Ui::StuMsg *ui;
    QTableWidget *Msgtable;
};

#endif // STUMSG_H
