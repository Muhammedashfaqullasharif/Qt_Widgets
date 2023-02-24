#ifndef WIDGET_H
#define WIDGET_H
#include<QLineEdit>
#include<QSpinBox>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLineEdit *price;
    QLineEdit *total;
    QSpinBox *spinbox;


public slots:
        void changeSpin();





};
#endif // WIDGET_H
