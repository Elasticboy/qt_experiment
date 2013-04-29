#ifndef ETERNITYFORM_H
#define ETERNITYFORM_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>

class EternityForm : public QWidget
{
    Q_OBJECT
public:
    explicit EternityForm(QWidget *parent = 0);

private:
    QTextEdit *m_edit_log;

    QVBoxLayout *m_vlayout;
    QHBoxLayout *m_hlayout;

signals:
    
public slots:
    
};

#endif // ETERNITYFORM_H
