#ifndef TABFORM_H
#define TABFORM_H

#include <QWidget>
#include <QTabWidget>
#include <QPlainTextEdit>
#include <QString>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

class TabForm : public QWidget
{
    Q_OBJECT
public:
    explicit TabForm(QWidget *parent = 0);
    
private:
    QVBoxLayout *m_vlayout;

    QMenuBar* m_menu;
    QMenu * m_file_menu;
    QAction * m_exit_action;

    QTabWidget* m_tabs;
    QPlainTextEdit* m_tab_1;
    QPlainTextEdit* m_tab_2;
    QPlainTextEdit* m_tab_3;

    void loadFile(QPlainTextEdit* textEdit, const QString& filePath);

signals:
    
public slots:
    
};

#endif // TABFORM_H
