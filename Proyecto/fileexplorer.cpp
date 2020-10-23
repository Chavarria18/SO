#include "fileexplorer.h"
#include "ui_fileexplorer.h"

FileExplorer::FileExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileExplorer)

{
    ui->setupUi(this);
    QString dir = "/home/";
    directorio = new QFileSystemModel(this);
    directorio->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    directorio->setRootPath(dir);

    ui->treeView->setModel(directorio);

    archivo = new QFileSystemModel(this);
    archivo->setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    archivo->setRootPath(dir);

    ui->listView->setModel(archivo);
}

FileExplorer::~FileExplorer()
{
    delete ui;
}

void FileExplorer::on_treeView_clicked(const QModelIndex &index)
{
    QString dir = directorio->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(archivo->setRootPath(dir));
}
