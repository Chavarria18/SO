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
    explicit task(QWidget *parent = nullptr, int idTask = -1);
    ~task();

private slots:
    void on_pushButton_clicked();

private:
    Ui::task *ui;
    int id;
};

#endif // TASK_H
