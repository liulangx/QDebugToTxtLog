#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug() << "this is widget";
}

Widget::~Widget()
{

}
