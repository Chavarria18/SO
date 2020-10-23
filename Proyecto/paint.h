#ifndef PAINT_H
#define PAINT_H

#include <QMainWindow>

namespace Ui {
class paint;
}

class QPainter;
class QImage;
class paint : public QMainWindow
{
    Q_OBJECT

public:
    explicit paint(QWidget *parent = nullptr);
    ~paint();
protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e)override;
    void mouseMoveEvent(QMouseEvent *e)override;
    void mouseReleaseEvent(QMouseEvent *e)override;

private:
    Ui::paint *ui;
    QPainter *mPainter; //Donde se va a pintar
    QImage *mImage;
    QPoint mBegin;
    QPoint mEnd;
    bool mEnabled;
};

#endif // PAINT_H
