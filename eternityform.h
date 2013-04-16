#ifndef ETERNITYFORM_H
#define ETERNITYFORM_H

#include <QWidget>
#include <QTextEdit>

class EternityForm : public QWidget
{
    Q_OBJECT
public:
    explicit EternityForm(QWidget *parent = 0);

private:
    QTextEdit *m_btn_eternity;

signals:
    
public slots:
    
};

#endif // ETERNITYFORM_H
