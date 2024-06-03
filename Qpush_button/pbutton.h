#ifndef PBUTTON_H
#define PBUTTON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Pbutton; }
QT_END_NAMESPACE

class Pbutton : public QMainWindow
{
    Q_OBJECT

public:
    Pbutton(QWidget *parent = nullptr);
    ~Pbutton();

private:
    Ui::Pbutton *ui;
};
#endif // PBUTTON_H
