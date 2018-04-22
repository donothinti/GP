#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "form.h"
#include "media.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    Form* myform;
    media* mymedia;
};

#endif // WIDGET_H
