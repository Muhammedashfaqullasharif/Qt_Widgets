#include "widget.h"
#include<QHBoxLayout>
#
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QHBoxLayout *hbx = new QHBoxLayout(this);
    slider = new QSlider();
    slider->setOrientation(Qt::Horizontal);
    slider->setTickPosition(QSlider::TicksAbove);
    slider->setTickInterval(5);
    slider->setMinimum(1);
    slider->setMaximum(100);

    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(changeSlider()));

    labelresult = new QLabel("Hello");
    labelresult->setFont(QFont("Times",15));



    hbx->addWidget(slider);
    hbx->addWidget(labelresult);
}

Widget::~Widget()
{
}

void Widget::changeSlider()
{
    int value = slider->value();
    labelresult->setText(QString::number(value));
}

