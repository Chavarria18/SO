/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEscribir;
    QAction *actionCerrar;
    QAction *actionArchivos;
    QAction *actionDibujar;
    QAction *actionTasks;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionEscribir = new QAction(MainWindow);
        actionEscribir->setObjectName(QString::fromUtf8("actionEscribir"));
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionArchivos = new QAction(MainWindow);
        actionArchivos->setObjectName(QString::fromUtf8("actionArchivos"));
        actionDibujar = new QAction(MainWindow);
        actionDibujar->setObjectName(QString::fromUtf8("actionDibujar"));
        actionTasks = new QAction(MainWindow);
        actionTasks->setObjectName(QString::fromUtf8("actionTasks"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(10, 10, 731, 561));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionEscribir);
        menuMenu->addAction(actionCerrar);
        menuMenu->addAction(actionArchivos);
        menuMenu->addAction(actionDibujar);
        menuMenu->addAction(actionTasks);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEscribir->setText(QApplication::translate("MainWindow", "Escribir", nullptr));
        actionCerrar->setText(QApplication::translate("MainWindow", "Cerrar", nullptr));
        actionArchivos->setText(QApplication::translate("MainWindow", "Archivos", nullptr));
        actionDibujar->setText(QApplication::translate("MainWindow", "Dibujar", nullptr));
        actionTasks->setText(QApplication::translate("MainWindow", "Tasks", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
