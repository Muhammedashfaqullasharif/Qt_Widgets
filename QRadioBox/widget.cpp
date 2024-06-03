#include "widget.h"
#include<QHBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbx = new QHBoxLayout();

    rd1 = new QRadioButton(this);
    rd1->setText("Python");
    rd1->setFont(QFont("times",15));
    rd1->setIcon(QIcon(":/images/python.png"));
    connect(rd1, SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));


    rd2 = new QRadioButton(this);
    rd2->setText("C++");
    rd2->setIcon(QIcon(":/images/cpp.png"));
    rd2->setFont(QFont("times",15));
    connect(rd2, SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));

    rd3 = new QRadioButton(this);
    rd3->setText("Java");
    rd3->setFont(QFont("times",15));
    rd3->setIcon(QIcon(":/images/java.png"));
    connect(rd3, SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));


    QVBoxLayout *vbx = new QVBoxLayout(this);
    label = new QLabel("HI..");
    label->setFont(QFont("Times",18));

    vbx->addWidget(label);

    hbx->addWidget(rd1);
    hbx->addWidget(rd2);
    hbx->addWidget(rd3);
    vbx->addLayout(hbx);
}

Widget::~Widget()
{
}

void Widget::ChangeRad()
{
    if(rd1->isChecked()){
        label->setText("This is Python");

    }
    if(rd2->isChecked()){
        label->setText("This is cpp");

    }
    if(rd3->isChecked()){
        label->setText("This is Java");
    }

}

