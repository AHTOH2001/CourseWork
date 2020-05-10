#ifndef CARD_H
#define CARD_H

#include <QWidget>
#include <QPainter>
#include <QPropertyAnimation>

class Card : public QWidget
{
    Q_OBJECT
public:
    explicit Card(int key, QWidget *parent = nullptr);
    QPropertyAnimation *CardAnimation;
    int value();
    int suit();
    int number();
    bool isOpen = true,isBlur = false;

signals:

private:
    void paintEvent(QPaintEvent *event) override;
    QImage image;
    int i,j,_value,_suit,_number;

};

#endif // CARD_H
