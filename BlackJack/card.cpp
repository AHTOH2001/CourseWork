#include "card.h"
#include "mainwindow.h"


Card::Card(int key, QWidget *parent) : QWidget(parent)
{    

    this->value = key%52%13;
    this->suit = key%52/13;
    image = ((MainWindow*)parent)->cardsList[value][suit];
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
