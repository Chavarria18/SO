#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escribir.h"
#include "fileexplorer.h"
#include "paint.h"
#include "task.h"
#include "global.h"
#include <QMdiSubWindow>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui ->mdiArea);

    for(int in = 0; in < 100; ++in) {
        Mram[in] = 0;
    }

    for(int in = 0; in < 100; ++in) {
        NombreArchivo[in] = "";
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::addID(){
    for (int i = 0; i < Mram.size(); ++i) {
        if(Mram[i] == 0){
            return i;
        }
    }
    return -1;
}

void MainWindow::on_actionEscribir_triggered()
{
    int myid = addID();
    if(myid != -1){
        Mram[myid] = 1;
        cargarVentana(new Escribir(this, myid));
    }else {
        QMessageBox::information(0, "error", "Memoria llena");
    }


}

void MainWindow::archivoGuardado(QString direct){
    QString extencion = direct.right(4);

    int myid = addID();
    if(myid != -1){
        Mram[myid] = 1;
        if(extencion == ".txt"){
            cargarVentana(new Escribir(this, myid, direct));
        }else{
            cargarVentana(new paint(this, myid, direct));
        }
    }else {
        QMessageBox::information(0, "error", "Memoria llena");
    }
}

void MainWindow::on_actionCerrar_triggered()
{
    close();
}



void MainWindow::cargarVentana(QWidget *widget){
    auto window = ui -> mdiArea -> addSubWindow(widget);
    window -> setWindowTitle(widget -> windowTitle());
     window -> setWindowIcon(widget -> windowIcon());

     window -> show();
}

void MainWindow::on_actionArchivos_triggered()
{
    int myid = addID();
    if(myid != -1){
        Mram[myid] = 1;
        cargarVentana(new FileExplorer(this, myid));
    }else {
        QMessageBox::information(0, "error", "Memoria llena");
    }
}

void MainWindow::on_actionDibujar_triggered()
{
    int myid = addID();
    if(myid != -1){
        Mram[myid] = 1;
        cargarVentana(new paint(this, myid));
    }else {
        QMessageBox::information(0, "error", "Memoria llena");
    }


}

void MainWindow::on_actionTasks_triggered()
{
    int myid = addID();
    if(myid != -1){
        Mram[myid] = 1;
        cargarVentana(new task(this, myid));
    }else {
        QMessageBox::information(0, "error", "Memoria llena");
    }

}
