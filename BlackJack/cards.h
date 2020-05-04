#ifndef CARDS_H
#define CARDS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QDebug>
#include <QImage>
#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QLineEdit>

class cards : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit cards(QImage* cardsList,MainWindow* parent,Ui::MainWindow* ui);        
    ~cards();

public slots:
    void NextColorSlot();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QImage* cardsList;    
    Ui::MainWindow* ui;
    MainWindow* parent;
    double koefW=1,koefH=1;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);    


public slots:

};
#endif // CARDS_H
