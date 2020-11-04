#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "escribir.h"
#include "fileexplorer.h"
#include "paint.h"
#include "task.h"
#include "global.h"
#include <QMdiSubWindow>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui ->mdiArea);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionEscribir_triggered()
{
    cargarVentana(new Escribir(this));
    tasks << "Archivo de Texto";
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
    cargarVentana(new FileExplorer(this));
    tasks << "FileExplorer";
}

void MainWindow::on_actionDibujar_triggered()
{
    cargarVentana(new paint(this));
    tasks << "Paint";
}

void MainWindow::on_actionTasks_triggered()
{
    cargarVentana(new task(this));
}
