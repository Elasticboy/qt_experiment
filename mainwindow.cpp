#include "mainwindow.h"

#include <memory>
#include <QFont>

MainWindow::MainWindow() : QWidget()
{
    setWindowTitle("Qt Experiments");
    setFixedSize(500, 200);


    m_btn_1 = new QPushButton("btn 1");
    m_btn_2 = new QPushButton("btn 2");
    m_btn_3 = new QPushButton("btn 3");
    m_btn_4 = new QPushButton("btn 4");
    //
    // Exit Button
    //

    // Create a button with window as parent
    m_btn_exit = new QPushButton("Quit");

    // Customized the button
    m_btn_exit->setToolTip("Help text");
    m_btn_exit->setFont(QFont("Courier", 20, QFont::Bold, false));
    m_btn_exit->setCursor(Qt::PointingHandCursor);

    // Connect m_button signal "clicked()" with Application slot "quit()"
    QObject::connect(m_btn_exit, SIGNAL(clicked()), qApp, SLOT(quit()));

    //
    // Horizontal Layouts
    //
    m_horizontal_layout_1 = new QHBoxLayout();
    m_horizontal_layout_1->addWidget(m_btn_1);
    m_horizontal_layout_1->addWidget(m_btn_2);

    m_horizontal_layout_2 = new QHBoxLayout();
    m_horizontal_layout_2->addWidget(m_btn_3);
    m_horizontal_layout_2->addWidget(m_btn_4);

    m_horizontal_layout_exit = new QHBoxLayout();
    m_horizontal_layout_exit->addWidget(m_btn_exit);
    m_horizontal_layout_exit->setAlignment(Qt::AlignRight|Qt::AlignBottom);


    //
    // Vertical Layout
    //

    m_vertical_layout_main = new QVBoxLayout();
    m_vertical_layout_main->addLayout(m_horizontal_layout_1);
    m_vertical_layout_main->addLayout(m_horizontal_layout_2);
    m_vertical_layout_main->addLayout(m_horizontal_layout_exit);
    setLayout(m_vertical_layout_main);
}
