#include "eternityform.h"

EternityForm::EternityForm(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Eternity Manager");

    m_edit_log = new QTextEdit();

    m_layout = new QHBoxLayout();
    m_layout->addWidget(m_edit_log);
    setLayout(m_layout);
}
