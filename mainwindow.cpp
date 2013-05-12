#include "mainwindow.h"

#include <memory>
#include <QFont>

#include "eternityform.h"
#include "tabform.h"
#include "translucentroundwindow.h"

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

    m_btn_tab = new QPushButton("TabForm");
    connect(m_btn_tab, SIGNAL(clicked()), this, SLOT(openTabForm()));


    m_btn_shaped_window = new QPushButton("Shape");
    connect(m_btn_shaped_window, SIGNAL(clicked()), this, SLOT(openShapeForm()));

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
    m_grid_layout->addWidget(m_btn_tab, 0, 1);
    m_grid_layout->addWidget(m_btn_shaped_window, 1, 0);
    m_grid_layout->addWidget(m_btn_4, 1, 1);
    m_grid_layout->addWidget(m_btn_exit, 2, 0, 1, 2);
    //m_grid_layout->addWidget(m_btn_exit, 2, 0, 2, Qt::AlignRight|Qt::AlignBottom);

    setLayout(m_grid_layout);
}

void MainWindow::openEternityForm() {
    auto* form = new EternityForm();
    form->setWindowModality(Qt::WindowModal);
    form->show();
}

void MainWindow::openTabForm() {
    auto* form = new TabForm();
    form->setWindowModality(Qt::WindowModal);
    form->show();
}

void MainWindow::openShapeForm() {
    auto* form = new TranslucentRoundWindow();
    form->setWindowModality(Qt::WindowModal);
    form->show();
}
