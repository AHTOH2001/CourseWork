#ifndef SEATCLASS_H
#define SEATCLASS_H

#include "card.h"

#include <QLCDNumber>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QSpacerItem>
#include <QGridLayout>


class SeatClass
{
public:
    SeatClass();
    QSpinBox *perfectPair, *mainBet, *triple;
    QPushButton *multiSeat,*closeButton,*doubleButton,*hitButton,*standButton,*splitButton;
    bool isSeat = false,stillPlay = false;
    QWidget *underSeat;
    QVector<Card*> cards;
    QLCDNumber *sumCounter;
    QLabel *pairStatus, *tripleStatus;
    int aceCount = 0,prevBetPair = 10,prevBetMain = 10,prevBetTriple = 10;//prevbet=0
    QGridLayout *gridLayoutLeft,*gridLayoutRight;
    QSpacerItem *horizontalSpacerLeft, *horizontalSpacerRight;
    struct TypeForExtraSeat
    {
        QPushButton *hitButton,*standButton;
        bool isExist = false,stillPlay = false;
        QVector<Card*> cards;
        QLCDNumber *sumCounter;
        int aceCount = 0;
        QSpacerItem *horizontalSpacer;
    };
    TypeForExtraSeat extra;
};

#endif // SEATCLASS_H
