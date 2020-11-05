#include "task.h"
#include "global.h"
#include "ui_task.h"

task::task(QWidget *parent, int idTask) :
    QMainWindow(parent),
    ui(new Ui::task)
{
    ui->setupUi(this);
    id = idTask;
    NombreArchivo[id] = "Task Manager";
    ui->listWidget->clear();
    for (int i = 0; i < Mram.size(); ++i){
        if(Mram[i] == 1){
        ui->listWidget->addItem(NombreArchivo[i]);

        }
    }
}

task::~task()
{
    Mram[id] = 0;
    NombreArchivo[id] = "";
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
