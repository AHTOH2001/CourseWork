#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QDebug>
#include <QGraphicsItem>
#include <QGridLayout>
#include <QLabel>
#include <QTimer>
#include <QMessageBox>
#include <QGraphicsDropShadowEffect>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QPainter>
#include <QPaintEvent>
#include "card.h"
#include <QTime>
#include <QQueue>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:    
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool DEBUGMODE = false;
    QImage cardsList[13][4];
public slots:

    void on_DealNow_clicked();

private slots:
    void on_Exit_clicked();
    void on_pushButton_clicked();

    void on_multiSeatButton_1_clicked();

    void on_multiSeatButton_2_clicked();

    void on_multiSeatButton_3_clicked();

    void on_multiSeatButton_4_clicked();

    void on_multiSeatButton_5_clicked();

    void on_multiSeatButton_6_clicked();

    void on_closeButton_1_clicked();

    void on_closeButton_2_clicked();

    void on_closeButton_3_clicked();

    void on_closeButton_4_clicked();

    void on_closeButton_5_clicked();

    void on_closeButton_6_clicked();

    void on_comboBoxCurrency_currentIndexChanged(int index);

    void valueChangedSlot(int newValue);

    void ValueChangedByUserSlot(QSpinBox *SpinBox = nullptr);

    void NextColorSlot();

    void HitNext();    

    void on_RepeatButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QMap<QSpinBox*,QTimer*> timersForColor;
    QTimer *TimerForDealNow;
    QTimer* TimerForHit;
    void paintEvent(QPaintEvent *event) override;
    void closeFunc(int i);
    void multiSeatFunc(int i);
    void changeColor(QSpinBox *SpinBox,QString color);
    QMap<QSpinBox*,double> RealValueSpinBox;
    void DeleteTrash();    
    void Dealing();
    double koefW=1,koefH=1;
    int tick = 0;
    void Hit(int i);
    bool isSeat = false,isNowPlay = false;
    const int seatX[6] = {88,311,531,880,1100,1326};
    const int seatY[6] = {513,573,624,625,575,512};
    const double course[7] = {0.920387,1,0.759763,62.84,2.2055,3.6550,7.3377};
    struct TypeForSeat
    {
        QSpinBox *perfectPair, *mainBet, *triple;
        QPushButton *multiSeat;
        bool isSeat = false;
        QWidget *underSeat;
        QPushButton *closeButton;
        QVector<Card*> cards;
        QLCDNumber* sumCounter;        
        int aceCount = 0,prevBetPair = 0,prevBetMain = 10,prevBetTriple = 0;//prevbet=0
    };
    TypeForSeat seat[6];
    void HighlightCentralLabel();
    void mousePressEvent(QMouseEvent *event) override;


};
#endif // MAINWINDOW_H
