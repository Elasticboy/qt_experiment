#include "eternityform.h"

EternityForm::EternityForm(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Eternity Manager");

    m_edit_log = new QTextEdit();

    m_vlayout = new QVBoxLayout();
    m_hlayout = new QHBoxLayout();

    m_vlayout->addWidget(m_edit_log);
    setLayout(m_vlayout);
}
