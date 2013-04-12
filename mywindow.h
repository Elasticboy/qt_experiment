#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyWindow : public QWidget
{
public:
    MyWindow();

private:
    QPushButton *m_button;
};

#endif // MYWINDOW_H
