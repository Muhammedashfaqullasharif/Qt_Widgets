#include "widget.h"
#include<QVBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    resize(500,200);
    QVBoxLayout *vbx = new QVBoxLayout(this);
    calendar = new QCalendarWidget();
    calendar->setGridVisible(true);
    calendar->setStyleSheet("Background-color:purple");
    connect(calendar,SIGNAL(selectionChanged()),this,SLOT(selectdate()));

    label = new QLabel("HELLO>>>");
    label->setFont(QFont("Times",15));
     label->setStyleSheet("background-color: lightyellow");


    vbx->addWidget(calendar);
    vbx->addWidget(label);
}

Widget::~Widget()
{
}

void Widget::selectdate()
{
    QString dateselected = calendar->selectedDate().toString();
    label->setText(dateselected);
}

