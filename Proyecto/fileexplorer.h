#ifndef FILEEXPLORER_H
#define FILEEXPLORER_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

#include <QFileSystemModel>

namespace Ui {
class FileExplorer;
}

class FileExplorer : public QMainWindow
{
    Q_OBJECT

public:
    explicit FileExplorer(QWidget *parent = nullptr);
    ~FileExplorer();

private slots:
    void on_treeView_clicked(const QModelIndex &index);


    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::FileExplorer *ui;
    QFileSystemModel *directorio;
    QFileSystemModel *archivo;
};

#endif // FILEEXPLORER_H
