#include "pbutton.h"
#include "ui_pbutton.h"
#include<QPushButton>
#include<QLabel>
#include<Qmenu>
Pbutton::Pbutton(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pbutton)
{
  setWindowTitle("Q_Push_button");
  resize(500,400);
  setStyleSheet("Background-color:lightgreen");
 QPushButton *button = new QPushButton(this);
 button->setText("Login");
 button->setStyleSheet("BAckground-color:crimson");
 button->setGeometry(200,350,80,30);
 button->setFont(QFont("Times",13));
 button->setIcon(QIcon(":/images/skulogo.jpg"));
 button->setIconSize(QSize(20,20));

 QPushButton *button1 = new QPushButton(this);
 button1->setText("File");
 button1->setStyleSheet("BAckground-color:lightyellow");
 button1->setGeometry(1,1,40,20);
 button1->setFont(QFont("Times",8));

 QPushButton *button2 = new QPushButton(this);
 button2->setText("Edit");
 button2->setStyleSheet("BAckground-color:lightyellow");
 button2->setGeometry(40,1,40,20);
 button2->setFont(QFont("Times",8));

 QPushButton *button3 = new QPushButton(this);
 button3->setText("View");
 button3->setStyleSheet("BAckground-color:lightyellow");
 button3->setGeometry(80,1,40,20);
 button3->setFont(QFont("Times",8));

    QMenu *menu = new QMenu();
    menu->addAction("new File");
    menu->addAction("copy");
    menu->addAction("cut");
    menu->addAction("Paste");
    button1->setMenu(menu);

     QMenu *menu1 = new QMenu();
        menu1->addAction("Undo");
        menu1->addAction("Redo");
        button2->setMenu(menu1);

        QMenu *menu2 = new QMenu();
         menu2->addAction("OutPut");
         menu2->addAction("Clear");
         button3->setMenu(menu2);

            QLabel *bkgnd = new QLabel(this);
           // bkgnd->setPixmap(QPixmap(":/images/skulogo.jpg"));
            bkgnd->setAutoFillBackground(true);
            bkgnd->setStyleSheet("Background-color:white");
            bkgnd->setGeometry(1,22,120,400);
}

Pbutton::~Pbutton()
{
    delete ui;
}

