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
    if(nombreArchivo != ""){
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
QString dirMemoria3 =  dirMemoria + "/file.txt";
    QFile file2(dirMemoria3);
    if(!file2.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not saved");

    }else{
        QTextStream out(&file2);
        QString text = ui -> plainTextEdit->toPlainText();
        out <<text;
        file2.flush(); //todo el string del out
        file2.close();
        QMessageBox::warning(this,"title","the file was saved");

    }




    //El archivo esta abierto o no

}

void Escribir::on_actionAbrir_triggered()
{
    QString dirMemoria3 =  dirMemoria + "/file.txt";
    QFile file(dirMemoria3);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");

    }QTextStream in(&file);
    QString text = in.readAll();
    ui -> plainTextEdit -> setPlainText(text);
    file.close();

}


