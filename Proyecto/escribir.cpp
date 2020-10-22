#include "escribir.h"
#include "ui_escribir.h"
#include <QFileSystemModel>

Escribir::Escribir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Escribir)
{
    ui->setupUi(this);

}

Escribir::~Escribir()
{
    delete ui;
}
