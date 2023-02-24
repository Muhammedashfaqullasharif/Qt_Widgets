#include "widget.h"
#include<QHBoxLayout>
#include<QLabel>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
   QHBoxLayout  *hbx = new QHBoxLayout(this);

   QLabel *label = new QLabel();
   label->setText("Laptop price: ");
   label->setFont(QFont("Arial",15));


   price = new QLineEdit();
   price->setFont(QFont("Georgia",18));


   total = new QLineEdit();
   total->setFont(QFont("Tohoma",15));

   spinbox = new QSpinBox();
   spinbox->setFont(QFont("vardana",15));
    connect(spinbox, SIGNAL(valueChanged(int)),this,SLOT(changeSpin()));



   hbx->addWidget(label);
   hbx->addWidget(price);
   hbx->addWidget(spinbox);
   hbx->addWidget(total);



}

Widget::~Widget()
{
}

void Widget::changeSpin()
{
   int myprice = price->text().toInt();
   int totalNumber = spinbox->value()*myprice;
   total->setText(QString::number(totalNumber));
}

