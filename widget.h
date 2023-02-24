#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QtextEdit>
#include<QFontDialog>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
     QTextEdit *textedit;
     QFontDialog *font;
public slots:
     void ChangeFont();

};
#endif // WIDGET_H
