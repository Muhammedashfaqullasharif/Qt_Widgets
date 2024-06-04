#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbx = new QHBoxLayout();
    QLabel *label = new QLabel();
    label->setText("Select Account Type :");
    label->setFont(QFont("times",14));

    cbx = new QComboBox();
    cbx->setFont(QFont("Times",14));
    cbx->addItem("Current Account");
    cbx->addItem("Deposit Account");
    cbx->addItem("saving Account");
    connect(cbx,SIGNAL(currentTextChanged(QString)),this,SLOT(comboChanged()));

    labelresult = new QLabel("HELLO");
    labelresult->setFont(QFont("ariel",15));
    QVBoxLayout *vbx = new QVBoxLayout(this);
    vbx->addLayout(hbx);
    vbx->addWidget(labelresult);
    hbx->addWidget(label);
    hbx->addWidget(cbx);

}

Widget::~Widget()
{
}

void Widget::comboChanged()
{
    QString item = cbx->currentText();
    labelresult->setText("your account  type is: " + item);
}

