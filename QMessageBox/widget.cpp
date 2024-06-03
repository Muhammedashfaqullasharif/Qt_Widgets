#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>
#include<QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,150);
    QHBoxLayout *hbx = new QHBoxLayout(this);
    QPushButton *btn1 = new QPushButton();
    btn1->setText("WARNING");
    hbx->addWidget(btn1);
    connect(btn1,SIGNAL(clicked()),this,SLOT(Warning()));
    QPushButton *btn2 = new QPushButton();
    btn2->setText("INFO");
    hbx->addWidget(btn2);
    connect(btn2,SIGNAL(clicked()),this,SLOT(setInfo()));
    QPushButton *btn3 = new QPushButton();
    btn3->setText("ABOUT");
    hbx->addWidget(btn3);
    connect(btn3,SIGNAL(clicked()),this,SLOT(setAbout()));
}

Widget::~Widget()
{
}

void Widget::Warning()
{
    QMessageBox::warning(this,"Warning","This is Warning");
}

void Widget::setInfo()
{
    QMessageBox::information(this, "Information","This is information");
}

void Widget::setAbout()
{
    QMessageBox::about(this, "about","This is about");
}

