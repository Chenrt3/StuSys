#ifndef CURRICULUM_H
#define CURRICULUM_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
namespace Ui {
class Curriculum;
}

class Curriculum : public QWidget
{
    Q_OBJECT

public:
    explicit Curriculum(QWidget *parent = nullptr);
    ~Curriculum();

private:
    Ui::Curriculum *ui;
    QTableWidget *Cutable;
};

#endif // CURRICULUM_H
