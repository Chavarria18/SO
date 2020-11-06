/********************************************************************************
** Form generated from reading UI file 'paint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paint
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *paint)
    {
        if (paint->objectName().isEmpty())
            paint->setObjectName(QString::fromUtf8("paint"));
        paint->resize(800, 600);
        centralwidget = new QWidget(paint);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        paint->setCentralWidget(centralwidget);
        menubar = new QMenuBar(paint);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        paint->setMenuBar(menubar);
        statusbar = new QStatusBar(paint);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        paint->setStatusBar(statusbar);

        retranslateUi(paint);

        QMetaObject::connectSlotsByName(paint);
    } // setupUi

    void retranslateUi(QMainWindow *paint)
    {
        paint->setWindowTitle(QApplication::translate("paint", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paint: public Ui_paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
