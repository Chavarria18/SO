#include "task.h"
#include "global.h"
#include "ui_task.h"

task::task(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task)
{
    ui->setupUi(this);
}

task::~task()
{
    delete ui;
}

void task::on_pushButton_clicked()
{
    ui->listWidget->clear();
    for (int i = 0; i < tasks.size(); ++i){
        ui->listWidget->addItem(tasks.at(i).toLocal8Bit().constData());}
}
