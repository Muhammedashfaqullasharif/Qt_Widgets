#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setWindowTitle("QVBox");
    resize(500,400);

    QPushButton *b1 = new QPushButton(this);
    b1->setText("1");
    QPushButton *b2 = new QPushButton(this);
    b2->setText("2");
    QPushButton *b3 = new QPushButton(this);
    b3->setText("3");
    QPushButton *b4 = new QPushButton(this);
    b4->setText("4");


    // QVBoxLayout

    QVBoxLayout *lt = new QVBoxLayout(this);
    lt->addWidget(b1);
    lt->addWidget(b2);
    lt->addWidget(b3);
    lt->addWidget(b4);



}

Widget::~Widget()
{
}

