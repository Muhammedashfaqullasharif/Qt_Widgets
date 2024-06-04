#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTextEdit>
#include<QHBoxLayout>
#include<QFontComboBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QFontComboBox *fontcombo;
    QTextEdit *edit;
public slots:
    void changeFont();


};
#endif // WIDGET_H
