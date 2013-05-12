#include "translucentroundwindow.h"

#include <QPainter>

TranslucentRoundWindow::TranslucentRoundWindow(QWidget *parent) :
    QWidget(parent)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
}

QSize TranslucentRoundWindow::sizeHint() const
{
    return QSize(300, 300);
}

void TranslucentRoundWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(255, 0, 0, 127));

    painter.drawEllipse(0, 0, width(), height());
}
