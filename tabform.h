#ifndef TABFORM_H
#define TABFORM_H

#include <string>
#include <QWidget>
#include <QTabWidget>
#include <QPlainTextEdit>
#include <QVBoxLayout>

class TabForm : public QWidget
{
    Q_OBJECT
public:
    explicit TabForm(QWidget *parent = 0);
    
private:
    QVBoxLayout *m_vlayout;
    QTabWidget* m_tabs;
    QPlainTextEdit* m_tab_1;
    QPlainTextEdit* m_tab_2;
    QPlainTextEdit* m_tab_3;

    void loadFile(QPlainTextEdit* textEdit, const std::string& filePath);

signals:
    
public slots:
    
};

#endif // TABFORM_H
