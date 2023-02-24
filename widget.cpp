#include "widget.h"
#include "ui_widget.h"
#include<Qlabel>
#include<QMovie>
Widget::Widget(QWidget *parent)
    : QWidget(parent)

{

    setWindowTitle("Qlabel");
    resize(500,400);

    QLabel *label = new QLabel(this);

   /* label->setText("This is the label");
    label->move(100,100);
    label->setFont(QFont("Times",15));
    label->setStyleSheet("color:green");*/
    label->setGeometry(100,100,400,400);


   // label->setPixmap(QPixmap(":/images/skulogo.jpg"  ));

    QMovie *movie = new QMovie(":/images/f6f43a7990b450c77d84224ff70bf613_w200.gif");

    label->setMovie(movie);
    movie->start();








}

Widget::~Widget()
{
    delete ui;
}

