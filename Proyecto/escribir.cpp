#include "escribir.h"
#include "ui_escribir.h"
#include "global.h"
#include <iostream>
#include <fstream>
#include <QFileSystemModel>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QString>
#include<QTextStream>
#include <QMessageBox>
using namespace std;

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
QString dirMemoria2 =  "/home/gabriel/Escritorio/SO/Proyecto/MemoriaSec/file.txt";
void Escribir::on_actionGuardar_triggered()
{
    QFile file(dirMemoria2);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");

    }else{
        QTextStream out(&file);
        QString text = ui -> plainTextEdit->toPlainText();
        out <<text;
        file.flush(); //todo el string del out
        file.close();
        QMessageBox::warning(this,"title","the file was saved");

    }




    //El archivo esta abierto o no

}

void Escribir::on_actionAbrir_triggered()
{
    QFile file(dirMemoria2);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");

    }QTextStream in(&file);
    QString text = in.readAll();
    ui -> plainTextEdit -> setPlainText(text);
    file.close();

}


