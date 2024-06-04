#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbx = new QVBoxLayout(this);

    edit = new QTextEdit();
    QPushButton *btn = new QPushButton();
    btn->setText("Change Color ");
    vbx->addWidget(edit);
    vbx->addWidget(btn);

    connect(btn,SIGNAL(clicked()),this,SLOT(ChangeColor()));
}

Widget::~Widget()
{
}

void Widget::ChangeColor()
{
    colordialog = new QColorDialog();
    QColor color = colordialog->getColor(Qt::yellow);
    edit->setTextColor(color);

}

