#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    public slots:
        void Warning();
        void setInfo();
        void setAbout();

};
#endif // WIDGET_H
