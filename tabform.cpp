#include "tabform.h"

TabForm::TabForm(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Tab Example");

    m_tab_1 = new QPlainTextEdit();
    m_tab_1->appendPlainText("hello1");
    m_tab_1->appendPlainText("hello2");
    m_tab_1->appendHtml("<h1>hello3</h1>");

    m_tab_2 = new QPlainTextEdit();
    m_tab_3 = new QPlainTextEdit();

    m_tabs = new QTabWidget();
    m_tabs->addTab(m_tab_1, "Tab_1");
    m_tabs->addTab(m_tab_2, "Tab_2");
    m_tabs->addTab(m_tab_3, "Tab_3");

    m_vlayout = new QVBoxLayout();
    m_vlayout->addWidget(m_tabs);

    setLayout(m_vlayout);
}
