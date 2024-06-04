#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QInputDialog>
#include<QLineEdit>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private:
    //QInputDialog *dialog;
    QLineEdit *lineedit;

public slots:
    void getMyItem();
    void getMyText();




};
#endif // WIDGET_H
