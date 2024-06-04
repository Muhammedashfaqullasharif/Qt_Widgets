#include"widget.h"
#include<QHBoxLayout>
#include<QTime>
#include<QTimer>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("LCD");
    resize(300,200);


QHBoxLayout *hbx = new QHBoxLayout(this);
lcd = new QLCDNumber(this);
lcd->setFont(QFont("Times",15));
lcd->setStyleSheet("background-color:yellow");
    hbx->addWidget(lcd);
showTime();

QTimer *timer = new QTimer(this);
connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
timer->start(1000);
};

Widget::~Widget()
{
}

void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second() % 2) == 0)
        text[2] = ' ';
    lcd->display(text);

}

