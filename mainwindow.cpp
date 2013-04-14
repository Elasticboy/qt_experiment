#include "mainwindow.h"

#include <memory>
#include <QHBoxLayout>
#include <QFont>

MainWindow::MainWindow() : QWidget()
{
    setWindowTitle("Qt Experiments");
    setFixedSize(500, 200);

    //
    // Exit Button
    //

    // Create a button with window as parent
    m_exit_button = new QPushButton("Quit");

    // Customized the button
    m_exit_button->setToolTip("Help text");
    m_exit_button->setFont(QFont("Courier", 20, QFont::Bold, false));
    m_exit_button->setCursor(Qt::PointingHandCursor);

    // Connect m_button signal "clicked()" with Application slot "quit()"
    QObject::connect(m_exit_button, SIGNAL(clicked()), qApp, SLOT(quit()));

    //
    // Horizontal Layout
    //

    auto layout = new QHBoxLayout();
    layout->addWidget(m_exit_button);
    layout->setAlignment(Qt::AlignRight|Qt::AlignBottom);
    setLayout(layout);
}
