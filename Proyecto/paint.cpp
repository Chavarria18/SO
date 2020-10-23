#include "paint.h"
#include "ui_paint.h"
#include <QDesktopWidget>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>
#include <QFileSystemModel>

paint::paint(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::paint)
{
    ui->setupUi(this);
    mImage = new QImage(QApplication::desktop()->size(),QImage::Format_ARGB32_Premultiplied);
    mPainter = new QPainter(mImage);
    mEnabled = false;
}

paint::~paint()
{
    delete ui;

}



void paint::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    painter.drawImage(0,0,*mImage);
    e->accept();

}
void paint::mousePressEvent(QMouseEvent *e){
    mEnabled =true;
    mBegin = e ->pos();

}
void paint::mouseMoveEvent(QMouseEvent *e){
    if(!mEnabled){
        e ->accept();
        return;
    }

    mEnd = e->pos();
    mPainter -> setPen(QPen(Qt::black));

    mPainter ->drawLine(mBegin,mEnd);
    update();
    e ->accept();

}
void paint::mouseReleaseEvent(QMouseEvent *e){
    mEnabled = false;
    e -> accept();

}
