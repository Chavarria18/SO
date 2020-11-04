#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui;

    void cargarVentana(QWidget *widget);

private slots:


    void on_actionCerrar_triggered();

    void on_actionArchivos_triggered();

    void on_actionDibujar_triggered();

    void on_actionTasks_triggered();

    void on_actionEscribir_triggered();

    int addID();

private:




public slots:

    void archivoGuardado(QString direct); //Abrir archivo de texto existente
};
#endif // MAINWINDOW_H
