#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{


    QHBoxLayout *hbx = new QHBoxLayout();
    check1= new QCheckBox(this);
    check1->setText("python");
    check1->setFont(QFont("times",10));
    check1->setIcon(QIcon(":/images/python.png"));
    check1->setIconSize(QSize(40,40));
    connect(check1,SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));



    check2= new QCheckBox(this);
    check2->setText("Cpp");
    check2->setFont(QFont("times",10));
    check2->setIcon(QIcon(":/images/cpp.png"));
    check2->setIconSize(QSize(40,40));
    connect(check2,SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    check3= new QCheckBox(this);
    check3->setText("java");
    check3->setFont(QFont("times",10));
    check3->setIcon(QIcon(":/images/java.png"));
    check3->setIconSize(QSize(40,40));
    connect(check3,SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));
        label = new QLabel("HI...");
        label->setFont(QFont("sanserif",15));

    QVBoxLayout *vbx = new QVBoxLayout(this);
    vbx->addWidget(label);

    hbx->addWidget(check1);
    hbx->addWidget(check2);
    hbx->addWidget(check3);
    vbx->addLayout(hbx);

}

Widget::~Widget()
{
}

void Widget::changeCheck()
{
    QString value ="";

    if(check1->isChecked()){
        value = check1->text();
    }
    if(check2->isChecked()){

        value = check2->text();

    }
    if(check3->isChecked()){
        value = check3->text();
    }


        label->setText("You Have Selected : " +value);
}

