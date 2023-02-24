#include "widget.h"
#include<QVBoxLayout>
#include<QListWidget>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{   resize(500,100);
    QVBoxLayout *vbx = new QVBoxLayout(this);
    QListWidget *list = new QListWidget();
    list->setFont(QFont("Times",15));
    list->setStyleSheet("background-color:violet");

    list->insertItem(0,"C++");
    list->insertItem(1,"Python");
    list->insertItem(2,"java");
    list->insertItem(3,"c#");
    vbx->addWidget(list);
}

Widget::~Widget()
{
}

