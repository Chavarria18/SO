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
    papa = parent;


    QString dir = "../Proyecto/MemoriaSec";

    archivo = new QFileSystemModel(this);
    archivo->setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    archivo->setRootPath(dirMemoria);

    ui->listView->setModel(archivo);

    ui->listView->setRootIndex(archivo->setRootPath(dirMemoria));

}

FileExplorer::~FileExplorer()
{
    delete ui;
}

/*void FileExplorer::cargarVentana2(QWidget *widget){
    auto window = ((MainWindow*)parentWidget())->ui-> mdiArea -> addSubWindow(widget);
    window -> setWindowTitle(widget -> windowTitle());
     window -> setWindowIcon(widget -> windowIcon());

     window -> show();
}*/

void FileExplorer::on_treeView_clicked(const QModelIndex &index)
{


}

void FileExplorer::on_listView_doubleClicked(const QModelIndex &index)
{
    ((MainWindow*)papa)->on_actionEscribir_triggered();

    //cargarVentana2(new Escribir());
    /*Escribir *escribir = new Escribir(papa);
    escribir->show();
    QModelIndex iindex = ui->listView->currentIndex();
    QString itemText = iindex.data(Qt::DisplayRole).toString();
    ui->listWidget->addItem(dirMemoria + "/" + itemText);*/
}

void FileExplorer::on_listView_clicked(const QModelIndex &index)
{

}
