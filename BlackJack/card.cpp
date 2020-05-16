#include "card.h"
#include "mainwindow.h"


Card::Card(int key, QWidget *parent) : QWidget(parent)
{
    this->raise();
    i = key%52%13;
    j = key%52/13;
    _number = i+2;
    image = ((MainWindow*)parent)->cardsList[i][j];
    if (i<=8) _value = i+2;
    else
        if (i<=11) _value = 10;
        else _value = 11;
    _suit = j+1;
    CardAnimation = new QPropertyAnimation(this, "geometry");
    //QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect();
    //effect->setBlurRadius(5);
    //effect->setOffset(-2,-2);
    //this->setGraphicsEffect(effect);
}

int Card::value()
{
    if (isOpen) return _value;
    return 0;
}

int Card::suit()
{
    if (isOpen) return  _suit;
    return -1;
}

int Card::number()
{
    if (isOpen) return _number;
    return 0;
}

void Card::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    if (isOpen)
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
    else
    {
        QImage tempImage;
        if (isBlur)
            tempImage.load(":/images/cards/closed_blur");
        else
        tempImage.load(":/images/cards/closed");

        painter.drawImage(0,0,tempImage.scaled(width(), height(),Qt::IgnoreAspectRatio));
    }
    Q_UNUSED(event);
}
