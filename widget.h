#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLabel>
#include<QSlider>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void changeSlider();

private:
    QSlider *slider;
    QLabel *labelresult;
};
#endif // WIDGET_H
