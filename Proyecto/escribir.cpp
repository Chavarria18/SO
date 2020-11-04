#include "escribir.h"
#include "ui_escribir.h"
#include <iostream>
#include <fstream>
#include <QFileSystemModel>
#include <QTextStream>
#include <QMessageBox>

Escribir::Escribir(QWidget *parent, QString carpeta) :
    QMainWindow(parent),
    ui(new Ui::Escribir)
{
    ui->setupUi(this);

    //leer archivo de texto
    if(carpeta != ""){
    QFile file(carpeta);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        ui->plainTextEdit->insertPlainText(line);
        ui->plainTextEdit->insertPlainText("\n");
    }

    file.close();}

}

Escribir::~Escribir()
{
    delete ui;
}
