#ifndef TASK_H
#define TASK_H

#include <QMainWindow>

namespace Ui {
class task;
}

class task : public QMainWindow
{
    Q_OBJECT

public:
    explicit task(QWidget *parent = nullptr);
    ~task();

private slots:
    void on_pushButton_clicked();

private:
    Ui::task *ui;
};

#endif // TASK_H
