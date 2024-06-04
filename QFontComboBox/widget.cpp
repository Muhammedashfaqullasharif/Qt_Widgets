#include "widget.h"
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
    QVBoxLayout *vbx = new QVBoxLayout(this);

    fontcombo = new QFontComboBox();

    connect(fontcombo,SIGNAL(currentFontChanged(QFont)),this,SLOT(changeFont));

    edit = new QTextEdit();

    vbx->addWidget(fontcombo);
    vbx->addWidget(edit);
}

Widget::~Widget()
{
}

void Widget::changeFont()
{
    QFont myFont = QFont(fontcombo->itemText(fontcombo->currentIndex()));
    edit->setFont(myFont);
}

