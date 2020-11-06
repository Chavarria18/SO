#ifndef ESCRIBIR_H
#define ESCRIBIR_H

#include <QMainWindow>


namespace Ui {
class Escribir;
}

class Escribir : public QMainWindow
{
    Q_OBJECT

public:
    explicit Escribir(QWidget *parent = nullptr, int id = -1, QString nombreArchivo = "NewArchivoTexto.txt"); //carpeta es el direcorio
    ~Escribir();

private slots:
    void on_actionGuardar_triggered();

    void on_actionAbrir_triggered();

    void on_pushButton_clicked();

private:
    Ui::Escribir *ui;
 ;
    int escribirID;

    QString nombre;
};

#endif // ESCRIBIR_H
