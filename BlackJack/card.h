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

signals:

private:
    void paintEvent(QPaintEvent *event) override;
    QImage image;
    int value,suit;
};

#endif // CARD_H
