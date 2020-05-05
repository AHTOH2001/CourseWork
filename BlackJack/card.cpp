#include "card.h"
#include "mainwindow.h"


Card::Card(int key, QWidget *parent) : QWidget(parent)
{    

    i = key%52%13;
    j = key%52/13;
    image = ((MainWindow*)parent)->cardsList[i][j];
    if (i<=8) value = i+2;
    else
        if (i<=11) value = 10;
        else value = 11;
    suit = j+1;
    CardAnimation = new QPropertyAnimation(this, "geometry");
    //QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect();
    //effect->setBlurRadius(5);
    //effect->setOffset(-2,-2);
    //this->setGraphicsEffect(effect);
}

void Card::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
    Q_UNUSED(event);
}
