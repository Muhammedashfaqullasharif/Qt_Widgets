#include "widget.h"
#include "ui_widget.h"
#include<QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
   setWindowTitle("QLineEdit");
   resize(500,400);

   QLineEdit *lineEdit = new QLineEdit(this);
   lineEdit->setGeometry(20,20,200,50);
   lineEdit->setFont(QFont("Times",15));
   lineEdit->setEnabled(true);
   lineEdit->setEchoMode(QLineEdit::EchoMode::Password);



}

Widget::~Widget()
{
    delete ui;
}

