#include "eternityform.h"

EternityForm::EternityForm(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("Eternity Manager");

    m_btn_eternity = new QTextEdit(this);
}
