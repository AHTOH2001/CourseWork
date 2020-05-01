#include "cards.h"

cards::cards(QImage* cardsList,MainWindow* parent,Ui::MainWindow* ui) :
    QObject(), QGraphicsItem()
{
    this->ui = ui;
    this->cardsList = cardsList;
    this->parent = parent;
}
cards::~cards()
{

}

QRectF cards::boundingRect() const
{
    return QRectF (-200,-200,4000,4000);
}

void cards::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    koefH = parent->height()/900.;
    koefW = parent->width()/1500.;
    ui->Exit->setGeometry(parent->width()-40,0,40,25);
    QImage image;
    if (!parent->isSeat)
    {
        for (int i = 0;i<6;i++)
        {
            parent->seat[i].multiSeat->setGeometry(parent->seatX[i]*koefW,parent->seatY[i]*koefH,97*koefW, 135*koefH);
            parent->seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/sit_here.png);}"
                                                     "QPushButton:hover{border-image: url(images/sit_here_hover.png);}"
                                                     "QPushButton:pressed{ border-image: url(images/sit_here_pressed.png);}");
        }
        image.load("images/takeseat");
        painter->drawImage(0,0,image.scaled(parent->width(), parent->height(),Qt::IgnoreAspectRatio));
        image.load("images/label_take_seat");
        painter->drawImage((1500-image.size().width())/2*koefW,(900-image.size().height()-100)/2*koefH,image.scaled(image.size().width()*koefW,image.size().height()*koefH,Qt::KeepAspectRatio));

    }
    else
    {
        image.load("images/background");
        //qDebug() << "paint!";
        painter->drawImage(0,0,image.scaled(parent->width(), parent->height(),Qt::IgnoreAspectRatio));
        for (int i = 0;i<6;i++)
            if (!parent->seat[i].isSeat)
            {

                // if ()
                // image.load("images/multi_seat");
                // parent->underSeat[i]->hide();
                // painter->drawImage(parent->seatX[i]*koefW,parent->seatY[i]*koefH,image.scaled(97*koefW, 135*koefH,Qt::IgnoreAspectRatio));
                parent->seat[i].multiSeat->setGeometry(parent->seatX[i]*koefW,parent->seatY[i]*koefH,97*koefW, 135*koefH);
                parent->seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/multi_seat.png);}"
                                                         "QPushButton:hover{border-image: url(images/multi_seat_hover.png);}"
                                                         "QPushButton:pressed{ border-image: url(images/multi_seat_pressed.png);}");
            }
            else
            {
                parent->underSeat[i]->show();
                parent->underSeat[i]->setGeometry((parent->seatX[i]-62+3)*koefW,(parent->seatY[i]+135+10)*koefH,(221-3)*koefW,100*koefH);
            }
    }        
    ui->gridLayoutWidget->setGeometry(QRect(10*koefW,750*koefH,251*koefW,111*koefH));
    ui->comboBoxCurrency->setFont(QFont("Times", 36*koefW));
    ui->labelBalance->setFont(QFont("BankGothic Lt BT", 20*koefW));
    ui->comboBoxCurrency->setMinimumSize(80*koefW,65*koefH);
    ui->comboBoxCurrency->setMaximumSize(80*koefW,65*koefH);
    //ui->comboBoxCurrency->setFont(QFont("Times", 36));
//    Qfont *font;
//    ui->labelBalance->setFont()
    Q_UNUSED(option);
    Q_UNUSED(widget);
}


void cards::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
   /* if (!parent->isNowPlay)
    {
        for (int i = 0;i<6;i++)
            if (event->pos().rx()>parent->seatX[i]*koefW && event->pos().rx()<(parent->seatX[i]+97)*koefW &&
                    event->pos().ry()>parent->seatY[i]*koefH && event->pos().ry()<(parent->seatY[i]+135)*koefH)
            {
                parent->seat[i].isSeat = true;
                parent->isSeat = true;
                update();
            }
    }*/
    qDebug() << event->pos();
    //QLineEdit *x = (QLineEdit*)parent->underSeat[0]->itemAt(0)->widget();
    parent->seat[0].mainBet->setValue(89);
     //   parent->timerForColor->start(1000);
}

void cards::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    //qDebug() << event->pos();
}
