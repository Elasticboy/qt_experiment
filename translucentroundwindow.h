#ifndef TRANSLUCENTROUNDWINDOW_H
#define TRANSLUCENTROUNDWINDOW_H

#include <QWidget>
#include <QSize>

class TranslucentRoundWindow : public QWidget
{
    Q_OBJECT
public:
    explicit TranslucentRoundWindow(QWidget *parent = 0);
    virtual QSize sizeHint() const;

protected:
    virtual void paintEvent(QPaintEvent *paintEvent);
    
signals:
    
public slots:
    
};

#endif // TRANSLUCENTROUNDWINDOW_H
