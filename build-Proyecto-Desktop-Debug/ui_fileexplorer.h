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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorer
{
public:
    QWidget *centralwidget;
    QTreeView *treeView;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menuArchivos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FileExplorer)
    {
        if (FileExplorer->objectName().isEmpty())
            FileExplorer->setObjectName(QString::fromUtf8("FileExplorer"));
        FileExplorer->resize(668, 327);
        centralwidget = new QWidget(FileExplorer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(20, 10, 321, 281));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(365, 10, 271, 271));
        FileExplorer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FileExplorer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 22));
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
