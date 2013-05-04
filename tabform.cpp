#include "tabform.h"

#include <QFile>
#include <QTextStream>
#include <QFileDialog>

TabForm::TabForm(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Tab Example");

    //
    // Menu
    //

    m_menu = new QMenuBar();
    m_file_menu = new QMenu(tr("File"), this);

    m_open_file_action = new QAction(tr("&Open file"), this);
    m_exit_action = new QAction(tr("&Quit"), this);
    m_file_menu->addAction(m_open_file_action);
    m_file_menu->addAction(m_exit_action);

    m_menu->addMenu(m_file_menu);

    connect(m_open_file_action, SIGNAL(triggered()), this, SLOT(openFile()));
    connect(m_exit_action, SIGNAL(triggered()), this, SLOT(close()));

    //
    // Tabs
    //
    m_tab_1 = new QPlainTextEdit();
    m_tab_1->setReadOnly(true);
    m_tab_1->appendPlainText("hello1");
    m_tab_1->appendPlainText("hello2");
    m_tab_1->appendHtml("<h1>hello3</h1>");
    loadFile(m_tab_1, "C:/DevSpaces/QtProjects/qt_experiment/file1.log");

    m_tab_2 = new QPlainTextEdit();
    m_tab_2->setReadOnly(true);
    loadFile(m_tab_2, "C:/DevSpaces/QtProjects/qt_experiment/file2.log");

    m_tab_3 = new QPlainTextEdit();
    m_tab_3->setReadOnly(true);
    loadFile(m_tab_3, "C:/DevSpaces/QtProjects/qt_experiment/file3.log");

    m_tabs = new QTabWidget();
    m_tabs->addTab(m_tab_1, "Tab_1");
    m_tabs->addTab(m_tab_2, "Tab_2");
    m_tabs->addTab(m_tab_3, "Tab_3");

    //
    // Layout
    //

    m_vlayout = new QVBoxLayout();
    m_vlayout->addWidget(m_tabs);
    m_vlayout->setMenuBar(m_menu);

    setLayout(m_vlayout);
}

void TabForm::openFile()
{
    QFileDialog* fd = new QFileDialog();
    fd->setFileMode(QFileDialog::ExistingFile);
    fd->setViewMode(QFileDialog::Detail);
    int result = fd->exec();

    QStringList selected_files;
    if (result) {
        selected_files = fd->selectedFiles();
        QPlainTextEdit* new_tab;
        for (QString filename : selected_files) {
            new_tab = new QPlainTextEdit();
            new_tab->setReadOnly(true);
            loadFile(new_tab, filename);
            m_tabs->addTab(new_tab, filename);
        }
    }
}

void TabForm::loadFile(QPlainTextEdit* textEdit, const QString& filePath)
{
    if (!textEdit) {
        return;
    }

    QFile file(filePath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in(&file);
    QString line;

    while (!in.atEnd()) {
        line = in.readLine();
        textEdit->appendPlainText(line);
    }
}
