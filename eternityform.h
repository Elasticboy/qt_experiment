#ifndef ETERNITYFORM_H
#define ETERNITYFORM_H

#include <QWidget>
#include <QTextEdit>
#include <QHBoxLayout>

class EternityForm : public QWidget
{
    Q_OBJECT

public:
    explicit EternityForm(QWidget *parent = 0);

private:
    QTextEdit *m_edit_log;

    QHBoxLayout *m_layout;

signals:
    
public slots:
    
};

#endif // ETERNITYFORM_H
