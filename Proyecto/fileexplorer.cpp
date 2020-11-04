#include "fileexplorer.h"
#include "ui_fileexplorer.h"
#include "global.h"

FileExplorer::FileExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FileExplorer)


{

    ui->setupUi(this);
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

void FileExplorer::on_treeView_clicked(const QModelIndex &index)
{


}

void FileExplorer::on_listView_doubleClicked(const QModelIndex &index)
{
    QModelIndex iindex = ui->listView->currentIndex();
    QString itemText = iindex.data(Qt::DisplayRole).toString();
    ui->listWidget->addItem(dirMemoria + "/" + itemText);
}
