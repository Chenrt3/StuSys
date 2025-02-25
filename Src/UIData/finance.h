#ifndef FINANCE_H
#define FINANCE_H

#include <QWidget>

namespace Ui {
class Finance;
}

class Finance : public QWidget
{
    Q_OBJECT

public:
    explicit Finance(QWidget *parent = nullptr);
    ~Finance();

private:
    Ui::Finance *ui;
};

#endif // FINANCE_H
