#include "task.h"
#include "global.h"
#include "ui_task.h"

task::task(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task)
{
    ui->setupUi(this);
    ui->listWidget->clear();
    for (int i = 0; i < Mram.size(); ++i){
        if(Mram[i] == 1){
        ui->listWidget->addItem(NombreArchivo[i]);

        }
    }
}

task::~task()
{
    delete ui;
}

void task::on_pushButton_clicked()
{
    ui->listWidget->clear();
    for (int i = 0; i < Mram.size(); ++i){
        if(Mram[i] == 1){
        ui->listWidget->addItem(NombreArchivo[i]);

        }
    }
}
