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
    explicit Escribir(QWidget *parent = nullptr, QString carpeta = ""); //carpeta es el direcorio
    ~Escribir();

private:
    Ui::Escribir *ui;
 ;
};

#endif // ESCRIBIR_H
