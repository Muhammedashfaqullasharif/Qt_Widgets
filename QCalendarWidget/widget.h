#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QCalendarWidget>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QCalendarWidget *calendar;

    QLabel *label;
public slots:
    void selectdate();


};
#endif // WIDGET_H
