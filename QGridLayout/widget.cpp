#include "widget.h"
#include<QGridLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QGrridLayout");
    resize(500,400 );


    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("1");


    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("2");


    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("3");


            QGridLayout *grid = new QGridLayout(this);
            grid->addWidget(btn1,0,0);
            grid->addWidget(btn2,0,1);
            grid->addWidget(btn3,1,0);






}

Widget::~Widget()
{
}

