/********************************************************************************
** Form generated from reading UI file 'escribir.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCRIBIR_H
#define UI_ESCRIBIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Escribir
{
public:
    QAction *actionGuardar;
    QAction *actionAbrir;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Escribir)
    {
        if (Escribir->objectName().isEmpty())
            Escribir->setObjectName(QString::fromUtf8("Escribir"));
        Escribir->resize(464, 333);
        actionGuardar = new QAction(Escribir);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionAbrir = new QAction(Escribir);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        centralwidget = new QWidget(Escribir);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        Escribir->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Escribir);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 464, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        Escribir->setMenuBar(menubar);
        statusbar = new QStatusBar(Escribir);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Escribir->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionGuardar);
        menuMenu->addAction(actionAbrir);

        retranslateUi(Escribir);

        QMetaObject::connectSlotsByName(Escribir);
    } // setupUi

    void retranslateUi(QMainWindow *Escribir)
    {
        Escribir->setWindowTitle(QApplication::translate("Escribir", "MainWindow", nullptr));
        actionGuardar->setText(QApplication::translate("Escribir", "Guardar", nullptr));
        actionAbrir->setText(QApplication::translate("Escribir", "Abrir", nullptr));
        menuMenu->setTitle(QApplication::translate("Escribir", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Escribir: public Ui_Escribir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCRIBIR_H
