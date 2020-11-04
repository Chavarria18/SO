#include "escribir.h"
#include "ui_escribir.h"
#include "global.h"
#include <iostream>
#include <fstream>
#include <QFileSystemModel>
#include <QTextStream>
#include <QMessageBox>

Escribir::Escribir(QWidget *parent, int id, QString nombreArchivo ) :
    QMainWindow(parent),
    ui(new Ui::Escribir)
{
    ui->setupUi(this);

    escribirID = id;
    nombre = nombreArchivo;
    NombreArchivo[id]=nombre;

    //leer archivo de texto
    if(nombreArchivo != "NewArchivoTexto.txt"){
        QString directorioText = dirMemoria + "/" + nombre;
    QFile file(directorioText);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        ui->plainTextEdit->insertPlainText(line);
        ui->plainTextEdit->insertPlainText("\n");
    }

    file.close();
    }



}

Escribir::~Escribir()
{
    NombreArchivo[escribirID] = "";
    Mram[escribirID] = 0;
    delete ui;
}

void Escribir::on_actionGuardar_triggered()
{

}
