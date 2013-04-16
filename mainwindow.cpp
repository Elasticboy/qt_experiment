#include "mainwindow.h"

#include <memory>
#include <QFont>

#include "eternityform.h"

MainWindow::MainWindow() : QWidget()
{
    setWindowTitle("Qt Experiments");

    //
    // Eternity Button
    //

    m_btn_eternity  = new QPushButton("Eternity");
    connect(m_btn_eternity, SIGNAL(clicked()), this, SLOT(openEternityForm()));

    //
    // Other Buttons
    //

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
    //m_btn_exit->setFont(QFont("Courier", 20, QFont::Bold, false));
    m_btn_exit->setCursor(Qt::PointingHandCursor);
    // Connect m_button signal "clicked()" with Application slot "quit()"
    connect(m_btn_exit, SIGNAL(clicked()), qApp, SLOT(quit()));

    //
    // Layout
    //
    m_grid_layout = new QGridLayout();
    m_grid_layout->addWidget(m_btn_eternity, 0, 0);
    m_grid_layout->addWidget(m_btn_2, 0, 1);
    m_grid_layout->addWidget(m_btn_3, 1, 0);
    m_grid_layout->addWidget(m_btn_4, 1, 1);
    m_grid_layout->addWidget(m_btn_exit, 2, 0, 1, 2);
    //m_grid_layout->addWidget(m_btn_exit, 2, 0, 2, Qt::AlignRight|Qt::AlignBottom);

    setLayout(m_grid_layout);
}

void MainWindow::openEternityForm() {
    m_btn_2->setText("Hello");
    m_btn_2->setEnabled(false);
    auto* form = new EternityForm();
    form->setWindowFlags(Qt::Window);
    form->show();
}
