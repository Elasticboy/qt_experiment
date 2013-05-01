#include "tabform.h"

#include <QFile>
#include <QTextStream>

TabForm::TabForm(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Tab Example");

    m_tab_1 = new QPlainTextEdit();
    m_tab_1->setReadOnly(true);
    m_tab_1->appendPlainText("hello1");
    m_tab_1->appendPlainText("hello2");
    m_tab_1->appendHtml("<h1>hello3</h1>");

    loadFile(m_tab_1);
    m_tab_2 = new QPlainTextEdit();
    m_tab_2->setReadOnly(true);

    m_tab_3 = new QPlainTextEdit();
    m_tab_3->setReadOnly(true);

    m_tabs = new QTabWidget();
    m_tabs->addTab(m_tab_1, "Tab_1");
    m_tabs->addTab(m_tab_2, "Tab_2");
    m_tabs->addTab(m_tab_3, "Tab_3");

    m_vlayout = new QVBoxLayout();
    m_vlayout->addWidget(m_tabs);

    setLayout(m_vlayout);
}


void TabForm::loadFile(QPlainTextEdit* textEdit, const std::string& filePath) {

    if (!textEdit) {
        return;
    }

    QFile file(filePath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    QString line;
    while ((line = in.readLine()) != in.atEnd()) {
        textEdit->appendPlainText(line);
    }
}
