#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,150);

    QVBoxLayout *vbx = new QVBoxLayout(this);
 textedit = new QTextEdit();
 QPushButton *btn = new QPushButton();
 btn->setText("Open Font");
 vbx-> addWidget(textedit);
 vbx->addWidget(btn);

connect(btn,SIGNAL(clicked()),this,SLOT(ChangeFont()));
}

Widget::~Widget()
{
}

void Widget::ChangeFont()
{

    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("Helvetical[cronyx]",12),this);

    if(ok){
        textedit->setFont(font);

    }
}

