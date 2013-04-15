#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

class MainWindow : public QWidget
{
public:
    MainWindow();

private:
    QPushButton *m_btn_1;
    QPushButton *m_btn_2;
    QPushButton *m_btn_3;
    QPushButton *m_btn_4;
    QPushButton *m_btn_exit;

    QHBoxLayout *m_horizontal_layout_1;
    QHBoxLayout *m_horizontal_layout_2;
    QHBoxLayout *m_horizontal_layout_exit;
    QVBoxLayout *m_vertical_layout_main;
};

#endif // MAINWINDOW_H
