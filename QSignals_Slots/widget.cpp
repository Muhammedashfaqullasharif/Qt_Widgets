#include "widget.h"
#include<QLabel>
#include<QPushButton>
#include<QHBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("ChangeText");
    connect(btn1,SIGNAL(clicked()),this,SLOT(ChangeText()));

    label = new QLabel(this);
    label->setText("Hello");


    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(btn1);
    hbox->addWidget(label);










}

Widget::~Widget()
{
}

void Widget::ChangeText()
{

    label->setText("Changed");
    label->setFont(QFont("Times",15));
    label->setStyleSheet("background-color:skyblue");

}

