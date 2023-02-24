  #ifndef WIDGET_H
#define WIDGET_H
#include<QRadioButton>
#include<QLabel>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void ChangeRad();


private:

    QLabel *label;
    QRadioButton *rd1;
    QRadioButton *rd2;
    QRadioButton *rd3;









};
#endif // WIDGET_H
