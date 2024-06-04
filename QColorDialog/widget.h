#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTextEdit>
#include<QColorDialog>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void ChangeColor();

private:
    QTextEdit *edit;
    QColorDialog *colordialog;
};
#endif // WIDGET_H
