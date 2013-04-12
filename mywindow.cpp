#include "mywindow.h"

#include <QFont>

MyWindow::MyWindow() : QWidget()
{
    setFixedSize(500, 200);

    // Create a button with window as parent
    m_button = new QPushButton("Click me !", this);

    // Customized the button
    m_button->setToolTip("Help text");
    m_button->setFont(QFont("Courier", 20, QFont::Bold, false));
    m_button->setCursor(Qt::PointingHandCursor);

    m_button->move(60, 50);
}
