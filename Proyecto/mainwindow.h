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

private slots:
    void on_actionEscribir_triggered();

    void on_actionCerrar_triggered();

    void on_actionArchivos_triggered();

    void on_actionDibujar_triggered();

private:
    Ui::MainWindow *ui;

    void cargarVentana(QWidget *widget);
};
#endif // MAINWINDOW_H
