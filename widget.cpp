#include "widget.h"
#include<QTableWidget>
#include<QTableWidgetItem>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
    QTableWidget *table = new QTableWidget(this);
    table->setFont(QFont("Times",15));
    table->setStyleSheet("background-color:yellow");

    table->setRowCount(3);
    table->setColumnCount(3);

    QTableWidgetItem *name = new QTableWidgetItem("NAME");
    QTableWidgetItem *email = new QTableWidgetItem("EMAIL");
    QTableWidgetItem *jujubeee = new QTableWidgetItem("jujubbeee");
    QTableWidgetItem *myemail = new QTableWidgetItem("jujubeee@gmail.com");


    table->setItem(0,0,name);
    table->setItem(0,1,email);

    table->setItem(1,0,jujubeee);
    table->setItem(1,1,myemail);


}

Widget::~Widget()
{
}

