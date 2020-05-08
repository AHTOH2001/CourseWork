#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "seatclass.h"
#include "card.h"

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

    void on_comboBoxCurrency_currentIndexChanged(int index);

    void valueChangedSlot(int newValue);

    bool ValueChangedByUserSlot(QSpinBox *SpinBox = nullptr);

    void NextColorSlot();

    void HitNext();

    void on_RepeatButton_clicked();

    void on_DoubleButton_clicked();

    void Hit(int i = -7);

    void Stand(int i = -7);

    void closeFunc(int i = -7);

    void multiSeatFunc(int i = -7);

    void NextSecond();

    void DoubleDown(int i = -7);

    void Split(int i = -7);

    void OpenCardProcess();
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QMap<QSpinBox*,QTimer*> timersForColor;
    QTimer *TimerForDealNow, *TimerForHit, *TimerForCommit, *TimerForOpenCard;
    void paintEvent(QPaintEvent *event) override;

    void changeColor(QSpinBox *SpinBox,QString color);
    QMap<QSpinBox*,double> RealValueSpinBox;
    void DeleteTrash();
    void Dealing();
    double koefW=1,koefH=1;
    int tick = 0;
    bool isSeat = false,isNowPlay = false, isDealingEnd = false;
    const int seatX[6] = {88,311,531,880,1100,1326};
    const int seatY[6] = {513,573,624,625,575,512};
    const double course[7] = {0.920387,1,0.759763,62.84,2.2055,3.6550,7.3377};
    SeatClass seat[6];
    QVector<Card*> dealerCards;
    QPropertyAnimation* dealerSumCounterAnimation;
    QMap<QPushButton*,int> seatIdentifier;
    int dealerAceCount = 0,stillPlayingAmount = 0;
    void HighlightLabel(QLabel *label,bool hideLater = false,int timeMs = 800);
    void RecountSum(QLCDNumber* sumCounter, Card *card, const int cardsAmount, int *aceCounter);
    void mousePressEvent(QMouseEvent *event) override;
    void CountExtraBets();
    void CommitsEnd();
};
#endif // MAINWINDOW_H
