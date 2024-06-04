#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // TITLE
        setWindowTitle("QHbox");
        resize(500,400);

    // PUSHBUTTONS
     QPushButton *btn1 = new QPushButton(this);
     btn1->setText("one");
     QPushButton *btn2 = new QPushButton(this);
     btn2->setText("two");
     QPushButton *btn3 = new QPushButton(this);
     btn3->setText("three");


    // QHBoxLayout

     QHBoxLayout *lyout = new QHBoxLayout(this);
     lyout->addWidget(btn1);
     lyout->addWidget(btn2);
     lyout->addWidget(btn3);






































}

Widget::~Widget()
{
}

