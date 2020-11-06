/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *task)
    {
        if (task->objectName().isEmpty())
            task->setObjectName(QString::fromUtf8("task"));
        task->resize(227, 251);
        centralwidget = new QWidget(task);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        task->setCentralWidget(centralwidget);
        menubar = new QMenuBar(task);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 227, 22));
        task->setMenuBar(menubar);
        statusbar = new QStatusBar(task);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        task->setStatusBar(statusbar);

        retranslateUi(task);

        QMetaObject::connectSlotsByName(task);
    } // setupUi

    void retranslateUi(QMainWindow *task)
    {
        task->setWindowTitle(QApplication::translate("task", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("task", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task: public Ui_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
