#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MainWindow : public QWidget
{
public:
    MainWindow();

private:
    QPushButton *m_exit_button;
};

#endif // MAINWINDOW_H
