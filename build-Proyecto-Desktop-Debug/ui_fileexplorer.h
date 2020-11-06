/********************************************************************************
** Form generated from reading UI file 'fileexplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXPLORER_H
#define UI_FILEEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorer
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menuArchivos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FileExplorer)
    {
        if (FileExplorer->objectName().isEmpty())
            FileExplorer->setObjectName(QString::fromUtf8("FileExplorer"));
        FileExplorer->resize(347, 327);
        centralwidget = new QWidget(FileExplorer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);

        FileExplorer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FileExplorer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 347, 22));
        menuArchivos = new QMenu(menubar);
        menuArchivos->setObjectName(QString::fromUtf8("menuArchivos"));
        FileExplorer->setMenuBar(menubar);
        statusbar = new QStatusBar(FileExplorer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FileExplorer->setStatusBar(statusbar);

        menubar->addAction(menuArchivos->menuAction());

        retranslateUi(FileExplorer);

        QMetaObject::connectSlotsByName(FileExplorer);
    } // setupUi

    void retranslateUi(QMainWindow *FileExplorer)
    {
        FileExplorer->setWindowTitle(QApplication::translate("FileExplorer", "MainWindow", nullptr));
        menuArchivos->setTitle(QApplication::translate("FileExplorer", "Archivos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileExplorer: public Ui_FileExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORER_H
