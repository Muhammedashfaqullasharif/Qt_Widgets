#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QComboBox>
#include<QLabel>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QComboBox *cbx;
    QLabel *labelresult;

public slots:
    void comboChanged();


};
#endif // WIDGET_H
