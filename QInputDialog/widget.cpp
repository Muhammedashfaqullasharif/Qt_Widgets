#include "widget.h"
#include<QLabel>
#include<QHBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
    QHBoxLayout *hbx = new QHBoxLayout(this);
    QLabel *label = new QLabel(this);
    label->setText("Choose Languages : ");
    label->setFont(QFont("Times",14));


    lineedit = new QLineEdit();
    lineedit->setFont(QFont("Times",14));

    QPushButton *btn = new QPushButton();
    btn->setText("Choose Language");
    btn->setFont(QFont("Times",14));

    //connect(btn,SIGNAL(clicked()), this,SLOT(getMyItem()));

    connect(btn,SIGNAL(clicked()), this,SLOT(getMyText()));



    hbx->addWidget(label);
    hbx->addWidget(lineedit);
    hbx->addWidget(btn);
}
Widget::~Widget()
{
}

void Widget::getMyItem()
{

    QList<QString> language = {"cpp","python","java","c#"};
    QString text = QInputDialog::getItem(this,"InputDialog","List of Languages",language,0,false);
    if(!text.isEmpty()){
        lineedit->setText(text);

    }
}

void Widget::getMyText()
{

    QString text = QInputDialog::getText(this,"Get UserName","Enter Your Name : ");
    if(!text.isEmpty()){
        lineedit->setText(text);
    }
}

