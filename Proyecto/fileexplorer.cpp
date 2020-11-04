#include "fileexplorer.h"
#include "ui_fileexplorer.h"
#include "escribir.h"
#include "global.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"


FileExplorer::FileExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileExplorer)

{

    ui->setupUi(this);
    papa = parent; //guardar parent

    archivo = new QFileSystemModel(this);
    archivo->setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    archivo->setRootPath(dirMemoria);

    ui->listView->setModel(archivo);

    ui->listView->setRootIndex(archivo->setRootPath(dirMemoria)); //muestra la carpeta con archivos

}

FileExplorer::~FileExplorer()
{
    delete ui;
}

void FileExplorer::on_treeView_clicked(const QModelIndex &index)
{


}

void FileExplorer::on_listView_doubleClicked(const QModelIndex &index)
{
    QModelIndex iindex = ui->listView->currentIndex();
    QString itemText = iindex.data(Qt::DisplayRole).toString();
    QString directo = itemText; //toma la ruta del arhivo selecionado
    ((MainWindow*)papa)->archivoGuardado(directo); //señarl para abrir archivo
}

void FileExplorer::on_listView_clicked(const QModelIndex &index)
{

}
