#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    resize(300,200);
    QVBoxLayout *vbx = new QVBoxLayout(this);
    lcd  = new QLCDNumber(this);
    lcd->setStyleSheet("background-color:red");
    lcd->setFont(QFont("Times",14));


    QPushButton *btn = new QPushButton(this);
    btn->setFont(QFont("Times",14));
    btn->setText("RANDOM GENERATOR");
    connect(btn,SIGNAL(clicked(bool)),this,SLOT(randGenerator()));
    vbx->addWidget(lcd);
    vbx->addWidget(btn);


}

Widget::~Widget()
{
}

void Widget::randGenerator()
{
int randomNumber = rand();
lcd->display(randomNumber);
}

