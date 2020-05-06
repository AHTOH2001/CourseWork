#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(QTime::currentTime().msec());
    //this->showFullScreen();
    this->resize(1500,900);
    this->showMaximized();
    seat[0].underSeat = ui->gridLayoutWidget_3;
    seat[1].underSeat = ui->gridLayoutWidget_14;
    seat[2].underSeat = ui->gridLayoutWidget_15;
    seat[3].underSeat = ui->gridLayoutWidget_16;
    seat[4].underSeat = ui->gridLayoutWidget_17;
    seat[5].underSeat = ui->gridLayoutWidget_18;
    seat[0].perfectPair = ui->spinBox_1;
    seat[0].mainBet = ui->spinBox_2;
    seat[0].triple = ui->spinBox_3;
    seat[0].multiSeat = ui->multiSeatButton_1;
    seat[0].closeButton = ui->closeButton_1;
    seat[0].sumCounter = ui->lcdNumber_1;
    seat[0].doubleButton = ui->doubleButton_1;
    seat[0].hitButton = ui->hitButton_1;
    seat[0].standButton = ui->standButton_1;
    seat[0].splitButton = ui->splitButton_1;
    seat[1].perfectPair = ui->spinBox_4;
    seat[1].mainBet = ui->spinBox_5;
    seat[1].triple = ui->spinBox_6;
    seat[1].multiSeat = ui->multiSeatButton_2;
    seat[1].closeButton = ui->closeButton_2;
    seat[1].sumCounter = ui->lcdNumber_2;
    seat[1].doubleButton = ui->doubleButton_2;
    seat[1].hitButton = ui->hitButton_2;
    seat[1].standButton = ui->standButton_2;
    seat[1].splitButton = ui->splitButton_2;
    seat[2].perfectPair = ui->spinBox_7;
    seat[2].mainBet = ui->spinBox_8;
    seat[2].triple = ui->spinBox_9;
    seat[2].multiSeat = ui->multiSeatButton_3;
    seat[2].closeButton = ui->closeButton_3;
    seat[2].sumCounter = ui->lcdNumber_3;
    seat[2].doubleButton = ui->doubleButton_3;
    seat[2].hitButton = ui->hitButton_3;
    seat[2].standButton = ui->standButton_3;
    seat[2].splitButton = ui->splitButton_3;
    seat[3].perfectPair = ui->spinBox_10;
    seat[3].mainBet = ui->spinBox_11;
    seat[3].triple = ui->spinBox_12;
    seat[3].multiSeat = ui->multiSeatButton_4;
    seat[3].closeButton = ui->closeButton_4;
    seat[3].sumCounter = ui->lcdNumber_4;
    seat[3].doubleButton = ui->doubleButton_4;
    seat[3].hitButton = ui->hitButton_4;
    seat[3].standButton = ui->standButton_4;
    seat[3].splitButton = ui->splitButton_4;
    seat[4].perfectPair = ui->spinBox_13;
    seat[4].mainBet = ui->spinBox_14;
    seat[4].triple = ui->spinBox_15;
    seat[4].multiSeat = ui->multiSeatButton_5;
    seat[4].closeButton = ui->closeButton_5;
    seat[4].sumCounter = ui->lcdNumber_5;
    seat[4].doubleButton = ui->doubleButton_5;
    seat[4].hitButton = ui->hitButton_5;
    seat[4].standButton = ui->standButton_5;
    seat[4].splitButton = ui->splitButton_5;
    seat[5].perfectPair = ui->spinBox_16;
    seat[5].mainBet = ui->spinBox_17;
    seat[5].triple = ui->spinBox_18;
    seat[5].multiSeat = ui->multiSeatButton_6;
    seat[5].closeButton = ui->closeButton_6;
    seat[5].sumCounter = ui->lcdNumber_6;
    seat[5].doubleButton = ui->doubleButton_6;
    seat[5].hitButton = ui->hitButton_6;
    seat[5].standButton = ui->standButton_6;
    seat[5].splitButton = ui->splitButton_6;

    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->CentralLabel->setGraphicsEffect(effect);
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->DealNow->setGraphicsEffect(effect);
    ui->DealNow->hide();
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->lcdTimer->setGraphicsEffect(effect);
    ui->lcdTimer->hide();
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->RepeatButton->setGraphicsEffect(effect);
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->DoubleButton->setGraphicsEffect(effect);


    TimerForDealNow = new QTimer();
    connect(TimerForDealNow,SIGNAL(timeout()),this,SLOT(NextColorSlot()));

    TimerForHit = new QTimer();
    connect(TimerForHit,SIGNAL(timeout()),this,SLOT(HitNext()));

    TimerForCommit = new QTimer();
    connect(TimerForCommit,SIGNAL(timeout()),this,SLOT(NextSecond()));


    QString s = "images/cards/";
    for (int i = 0;i<13;i++)
        for (int j = 0;j<4;j++)
        {
            s.resize(13);
            s.append(QString(QString::number(i+2) + "_" + QString::number(j+1)));
            cardsList[i][j].load(s);
        }
    /*DealButtonAnimation = new QPropertyAnimation(ui->DealNow, "geometry");
    DealButtonAnimation->setDuration(800);
    connect(DealButtonAnimation,SIGNAL(finished()),DealButtonAnimation,SLOT(start()));
    DealButtonAnimation->start();*/


    // animation->start();
    int counter = 0;
    for (auto & i : seat)
    {
        i.sumCounter->hide();
        i.underSeat->hide();
        timersForColor[i.perfectPair] = new QTimer();
        connect(i.perfectPair,SIGNAL(valueChanged(int)),this,SLOT(valueChangedSlot(int)));
        connect(i.perfectPair,SIGNAL(editingFinished()),this,SLOT(ValueChangedByUserSlot()));
        timersForColor[i.mainBet] = new QTimer();
        connect(i.mainBet,SIGNAL(valueChanged(int)),this,SLOT(valueChangedSlot(int)));
        connect(i.mainBet,SIGNAL(editingFinished()),this,SLOT(ValueChangedByUserSlot()));
        timersForColor[i.triple] = new QTimer();
        connect(i.triple,SIGNAL(valueChanged(int)),this,SLOT(valueChangedSlot(int)));
        connect(i.triple,SIGNAL(editingFinished()),this,SLOT(ValueChangedByUserSlot()));
        i.pairStatus = new QLabel(ui->centralwidget);
        i.pairStatus->setStyleSheet("QLabel{\n"
                                    "color:  rgb(102,180,50);\n"
                                    "padding: 2px;\n"
                                    "border: 3px solid rgb(231,181,77);\n"
                                    "border-radius: 31px;\n}");
        i.pairStatus->setAlignment(Qt::AlignCenter);
        i.tripleStatus = new QLabel(ui->centralwidget);
        i.tripleStatus->setStyleSheet("QLabel{\n"
                                      "color:  rgb(102,180,50);\n"
                                      "padding: 2px;\n"
                                      "border: 3px solid rgb(231,181,77);\n"
                                      "border-radius: 31px;\n}");
        i.tripleStatus->setAlignment(Qt::AlignCenter);
        connect(i.hitButton,SIGNAL(clicked()),this,SLOT(Hit()));
        connect(i.standButton,SIGNAL(clicked()),this,SLOT(Stand()));
        connect(i.closeButton,SIGNAL(clicked()),this,SLOT(closeFunc()));
        connect(i.multiSeat,SIGNAL(clicked()),this,SLOT(multiSeatFunc()));
        seatIdentifier[i.doubleButton] = counter;
        seatIdentifier[i.hitButton] = counter;
        seatIdentifier[i.standButton] = counter;
        seatIdentifier[i.splitButton] = counter;
        seatIdentifier[i.closeButton] = counter;
        seatIdentifier[i.multiSeat] = counter;
        i.doubleButton->hide();
        i.hitButton->hide();
        i.standButton->hide();
        i.splitButton->hide();
        counter++;
    }
    QStringList temp = {"€","$","£","₽","Br","₪","￥"};
    ui->comboBoxCurrency->addItems(temp);

    dealerSumCounterAnimation = new QPropertyAnimation(ui->dealerSumCounter,"geometry");
    dealerSumCounterAnimation->setDuration(300);
    ui->dealerSumCounter->hide();
}

MainWindow::~MainWindow()
{
    //for (int i =0;i<18;i++)
    delete ui;
}

void MainWindow::HighlightLabel(QLabel *label,bool hideLater,int timeMs)
{        
    label->setStyleSheet("QLabel{"
                         "color:  rgb(102,180,50);"
                         "padding: 2px;"
                         "border: 3px inset red;"
                         "border-radius: 31px;}");
    QTimer *timer = new QTimer();
    QObject *context = new QObject(this);
    connect(timer, &QTimer::timeout,context, [=]() {
        label->setStyleSheet("QLabel{"
                             "color:  rgb(102,180,50);"
                             "padding: 2px;"
                             "border: 3px solid rgb(231,181,77);"
                             "border-radius: 31px;}");
        if (hideLater)
            label->hide();
        delete context;
    } );
    timer->start(timeMs);
    label->raise();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->pos();    
    //Hit(7);
}

void MainWindow::on_Exit_clicked()
{
    //save!
    qApp->exit();
}

int debugcounter = 0;
void MainWindow::paintEvent(QPaintEvent *event)
{    
    QPainter painter(this);

    koefH = height()/900.;
    koefW = width()/1500.;
    ui->Exit->setGeometry(width()-40,0,40,25);
    QImage image;
    if (!isSeat)
    {
        for (int i = 0;i<6;i++)
            seat[i].multiSeat->setGeometry((seatX[i]-2)*koefW,seatY[i]*koefH,97*koefW, 135*koefH);

        image.load("images/takeseat");        
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
        if (strcmp(ui->CentralLabel->text().toLatin1(),"TAKE A SEAT")!=0)
        {            
            ui->CentralLabel->setText("TAKE A SEAT");
            HighlightLabel(ui->CentralLabel);
        }        
        ui->RepeatButton->hide();
        ui->DoubleButton->hide();
        //image.load("images/label_take_seat");
        //painter->drawImage((1500-image.size().width())/2*koefW,(900-image.size().height()-100)/2*koefH,image.scaled(image.size().width()*koefW,image.size().height()*koefH,Qt::KeepAspectRatio));

    }
    else
    {
        image.load("images/background");
        painter.drawLine(100,100,500,500);
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));        
        if (strcmp(ui->CentralLabel->text().toLatin1(),"TAKE A SEAT")==0)
        {
            ui->RepeatButton->show();
            ui->DoubleButton->show();
            ui->CentralLabel->setText("PLACE YOUR BETS");
            HighlightLabel(ui->CentralLabel);
        }
        for (int i = 0;i<6;i++)
            if (!seat[i].isSeat)
            {
                seat[i].multiSeat->setGeometry((seatX[i]-2)*koefW,seatY[i]*koefH,97*koefW, 135*koefH);
            }
            else
            {
                seat[i].underSeat->show();
                seat[i].underSeat->setGeometry((seatX[i]-62+3)*koefW,(seatY[i]+135+10)*koefH,(221-3)*koefW,100*koefH);                
                int counter = 0;
                for (auto &card:seat[i].cards)
                {
                    if (card->CardAnimation->state()==QAbstractAnimation::Stopped)
                        card->setGeometry(QRect((seatX[i]+counter*15)*koefW,(seatY[i]-counter*30)*koefH,92*koefW,135*koefH));
                    else
                        card->CardAnimation->setEndValue(QRect((seatX[i]+counter*15)*koefW,(seatY[i]-counter*30)*koefH,92*koefW,135*koefH));

                    counter++;
                    int tempW = seat[i].pairStatus->text().count()*20;
                    int tempH = 65;
                    seat[i].pairStatus->setFont(QFont("Segoe Print", 20*koefW));
                    seat[i].pairStatus->setGeometry((seatX[i]+92/2-tempW/2)*koefW,(seatY[i]-(tempH+31))*koefH,tempW*koefW,tempH*koefH);
                    tempW = seat[i].tripleStatus->text().count()*20;
                    seat[i].tripleStatus->setFont(QFont("Segoe Print", 20*koefW));
                    seat[i].tripleStatus->setGeometry((seatX[i]+92/2-tempW/2)*koefW,(seatY[i]-(tempH+31))*koefH,tempW*koefW,tempH*koefH);
                }
            }
        int counter = 0;
        int shiftUnit = (941-579) / (dealerCards.count()+1);
        if (dealerSumCounterAnimation->state()==QAbstractAnimation::Stopped)
            ui->dealerSumCounter->setGeometry(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
        else
            dealerSumCounterAnimation->setEndValue(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));

        for (auto &card:dealerCards)
        {
            if (card->CardAnimation->state()==QAbstractAnimation::Stopped)
                card->setGeometry(QRect((579+(counter+1)*shiftUnit-92/2+5)*koefW,5*koefH,92*koefW,135*koefH));
                        else
                        card->CardAnimation->setEndValue(QRect((579+(counter+1)*shiftUnit-92/2+5)*koefW,5*koefH,92*koefW,135*koefH));
            counter++;
        }
    }
    ui->gridLayoutWidget->setGeometry(QRect(10*koefW,760*koefH,251*koefW,111*koefH));
    ui->comboBoxCurrency->setFont(QFont("Times", 36*koefW));
    ui->labelBalance->setFont(QFont("BankGothic Lt BT", 20*koefW));
    ui->comboBoxCurrency->setMinimumSize(80*koefW,65*koefH);
    ui->comboBoxCurrency->setMaximumSize(80*koefW,65*koefH);

    ui->gridLayoutWidget_2->setGeometry(QRect(1320*koefW,760*koefH,161*koefW,111*koefH));
    ui->labelTotalBet->setFont(QFont("BankGothic Lt BT", 18*koefW));
    ui->RepeatButton->setGeometry(705*koefW,620*koefH,81*koefW,81*koefH);
    ui->DoubleButton->setGeometry(705*koefW,730*koefH,81*koefW,81*koefH);


    ui->CentralLabel->setFont(QFont("Segoe Print", 30*koefW));
    int tempW = ui->CentralLabel->text().count()*36;
    int tempH = 65;
    ui->CentralLabel->setGeometry((1500-tempW)/2*koefW,(900-tempH+40)/2*koefH,tempW*koefW,tempH*koefH);
    //painter->drawImage((1500-image.size().width())/2*koefW,(900-image.size().height()-100)/2*koefH,image.scaled(image.size().width()*koefW,image.size().height()*koefH,Qt::KeepAspectRatio));
    //QRect DealNowButtonGeometry(630*koefW,520*koefH,251*koefW,81*koefH);
    // DealButtonAnimation->setStartValue(DealNowButtonGeometry);
    //DealButtonAnimation->setKeyValueAt(0, DealNowButtonGeometry);
    //    DealButtonAnimation->setKeyValueAt(0.5, DealNowButtonGeometry.adjusted(-10*koefW,0,10*koefW,0));
    //    DealButtonAnimation->setEndValue(DealNowButtonGeometry);
    //DealButtonAnimation->setKeyValueAt(1, DealNowButtonGeometry);
    ui->DealNow->setFont(QFont("MS Shell Dlg 2", 20*koefW));
    ui->lcdTimer->setGeometry(712*koefW,630*koefH,61*koefW,61*koefH);

    if (DEBUGMODE)
    {
    debugcounter++;
    qDebug() << "paintevent!" << debugcounter << event->region();
    painter.setPen(QPen(qRgb(debugcounter%25*10,debugcounter%25*10,debugcounter%25*10)));
    painter.setBrush(QBrush(qRgb(debugcounter%25*10,debugcounter%25*10,debugcounter%25*10),Qt::Dense4Pattern));
    painter.drawRect(event->rect().adjusted(-1,-1,1,1));
    }
}

void MainWindow::closeFunc(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr) i = seatIdentifier[sender];
    seat[i].isSeat = false;
    seat[i].underSeat->hide();
    seat[i].multiSeat->show();
    isSeat = false;
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat) isSeat = true;

    seat[i].perfectPair->setValue(0);
    ValueChangedByUserSlot(seat[i].perfectPair);
    seat[i].mainBet->setValue(0);
    ValueChangedByUserSlot(seat[i].mainBet);
    seat[i].triple->setValue(0);
    ValueChangedByUserSlot(seat[i].triple);
    update();

}

void MainWindow::multiSeatFunc(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr) i = seatIdentifier[sender];
    seat[i].isSeat = true;
    isSeat = true;
    seat[i].multiSeat->hide();
    for (int i = 0;i<6;i++)
        seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/multi_seat.png);}"
                                         "QPushButton:hover{border-image: url(images/multi_seat_hover.png);}"
                                         "QPushButton:pressed{ border-image: url(images/multi_seat_pressed.png);}");
    update();
}

void MainWindow::changeColor(QSpinBox *SpinBox, QString Color)
{    
    SpinBox->setStyleSheet(Color);
    QObject *context = new QObject(this);
    connect(timersForColor[SpinBox], &QTimer::timeout,context, [=]() {
        SpinBox->setStyleSheet("");
        delete context;
    } );
    timersForColor[SpinBox]->start(500);
}

QMap<QSpinBox*,int> prevValueForColor;
void MainWindow::valueChangedSlot(int newValue)
{
    auto* sender=dynamic_cast<QSpinBox*>(QObject::sender());
    if (prevValueForColor[sender]>newValue)
    {
        changeColor(sender,"QSpinBox{"
                           "border-style: outset;"
                           "border-color: red;}"
                           "QSpinBox::down-button {"
                           "border-image: url(images/spin/spindown_pressed.png) 1;}");
    }
    else
        if (prevValueForColor[sender]<newValue)
        {

            changeColor(sender,"QSpinBox{"
                               "border-style: outset;"
                               "border-color: rgb(0,200,0);}"
                               "QSpinBox::up-button {"
                               "border-image: url(images/spin/spinup_pressed.png) 1; }");

        }

    prevValueForColor[sender] = newValue;
}

void MainWindow::DeleteTrash()
{
    if (ui->TotalBetAmount->value()-(int)ui->TotalBetAmount->value()<0.0000000001) ui->TotalBetAmount->display((int)ui->TotalBetAmount->value());
    if (ui->BalanceAmount->value()-(int)ui->BalanceAmount->value()<0.0000000001) ui->BalanceAmount->display((int)ui->BalanceAmount->value());
}

void MainWindow::ValueChangedByUserSlot(QSpinBox *SpinBox)
{
    auto* sender=dynamic_cast<QSpinBox*>(QObject::sender());
    if (sender==nullptr) sender = (QSpinBox*)SpinBox;

    if (sender->value()-RealValueSpinBox[sender]>ui->BalanceAmount->value())
    {
        QMessageBox::critical(this,"Error","Not enough money");
        sender->setValue(RealValueSpinBox[sender]);
        return;
    }
    changeColor(sender,"QSpinBox{"
                       "border-style: outset;"
                       "border-color: orange;}");
    ui->TotalBetAmount->display(ui->TotalBetAmount->value()+(sender->value()-RealValueSpinBox[sender]));
    ui->BalanceAmount->display(ui->BalanceAmount->value()-(sender->value()-RealValueSpinBox[sender]));
    DeleteTrash();
    RealValueSpinBox[sender] = sender->value();

    bool NoOneIsZero = true;
    for (int i = 0;i<6;i++)
        if (seat[i].mainBet->value()==0 && seat[i].isSeat) NoOneIsZero = false;
    if (NoOneIsZero && ui->TotalBetAmount->value()!=0)
    {
        ui->lcdTimer->show();
        ui->DealNow->show();
        TimerForDealNow->start(100);
        for (int i = 0;i<6;i++)
        {
            seat[i].multiSeat->setDisabled(true);
            seat[i].multiSeat->setStyleSheet("border-image: url(images/multi_seat_blocked.png);");
        }
        ui->comboBoxCurrency->setDisabled(true);
        ui->RepeatButton->hide();
    }
    else
    {
        ui->lcdTimer->hide();
        ui->DealNow->hide();
        TimerForDealNow->stop();
        tick = 0;
        for (int i = 0;i<6;i++)
        {
            seat[i].multiSeat->setDisabled(false);
            if (!isSeat)
                seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/sit_here.png);}"
                                                 "QPushButton:hover{border-image: url(images/sit_here_hover.png);}"
                                                 "QPushButton:pressed{ border-image: url(images/sit_here_pressed.png);}");
            else
                seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/multi_seat.png);}"
                                                 "QPushButton:hover{border-image: url(images/multi_seat_hover.png);}"
                                                 "QPushButton:pressed{ border-image: url(images/multi_seat_pressed.png);}");
        }
        ui->comboBoxCurrency->setDisabled(false);
        ui->RepeatButton->show();
    }


}

int prevCurrency = 0;
void MainWindow::on_comboBoxCurrency_currentIndexChanged(int index)
{
    double koef = course[index]/course[prevCurrency];
    double delta = 0;
    for (int i = 0;i<6;i++)
    {
        RealValueSpinBox[seat[i].perfectPair] *= koef;
        delta += RealValueSpinBox[seat[i].perfectPair] - (int)RealValueSpinBox[seat[i].perfectPair];
        RealValueSpinBox[seat[i].perfectPair] = (int)RealValueSpinBox[seat[i].perfectPair];

        RealValueSpinBox[seat[i].mainBet] *= koef;
        delta += RealValueSpinBox[seat[i].mainBet] - (int)RealValueSpinBox[seat[i].mainBet];
        RealValueSpinBox[seat[i].mainBet] = (int)RealValueSpinBox[seat[i].mainBet];

        RealValueSpinBox[seat[i].triple] *= koef;
        delta += RealValueSpinBox[seat[i].triple] - (int)RealValueSpinBox[seat[i].triple];
        RealValueSpinBox[seat[i].triple] = (int)RealValueSpinBox[seat[i].triple];

        seat[i].perfectPair->setValue((int)RealValueSpinBox[seat[i].perfectPair]);
        seat[i].mainBet->setValue((int)RealValueSpinBox[seat[i].mainBet]);
        seat[i].triple->setValue((int)RealValueSpinBox[seat[i].triple]);
    }
    ui->TotalBetAmount->display(ui->TotalBetAmount->value()*koef - delta);
    ui->BalanceAmount->display(ui->BalanceAmount->value()*koef + delta);
    DeleteTrash();
    prevCurrency = index;
}

void MainWindow::on_DealNow_clicked()
{
    stillPlayingAmount = 0;
    for (int i = 0;i<6;i++)
    {
        seat[i].perfectPair->setDisabled(true);
        if (seat[i].mainBet->value()==0)
            seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]);
        seat[i].mainBet->setDisabled(true);
        seat[i].triple->setDisabled(true);
        seat[i].closeButton->hide();        
        if (seat[i].isSeat)
        {
            seat[i].prevBetPair = seat[i].perfectPair->value();
            seat[i].prevBetMain = seat[i].mainBet->value();
            seat[i].prevBetTriple = seat[i].triple->value();
            stillPlayingAmount++;
        }        
    }    
    tick = 0;
    TimerForDealNow->stop();
    ui->lcdTimer->hide();
    ui->DealNow->hide();
    ui->DoubleButton->hide();
    ui->CentralLabel->setText("BETS CLOSED AND ACCEPTED");
    HighlightLabel(ui->CentralLabel);
    //TODO cool background effects
    QTimer *timer = new QTimer();
    QObject *context = new QObject(this);
    connect(timer, &QTimer::timeout,context, [=]() {
        ui->CentralLabel->setText("DEALING");
        HighlightLabel(ui->CentralLabel);
        Dealing();
        delete context;
    });
    timer->start(2000);    
}

void MainWindow::NextColorSlot()
{
    tick++;

    ui->DealNow->setStyleSheet("QPushButton {"
                               "border: 2px solid rgb(66, 20, 20);"
                               "border-radius: 40px;"
                               "color: rgb("+QString::number((int)(100 + tick)) +", 10, 10);"
                               "background: rgb(0," + QString::number((int)(100 + tick)) + ",57);}"
                               "QPushButton:hover {"
                               "color: rgb("+QString::number((int)(80 + tick)) +", 30, 30);"
                               "background: rgb(30," + QString::number((int)(100 + tick)) + ",87);}");

    //ui->DealNow->resize(ui->DealNow->size().width()-(150-tick),ui->DealNow->size().height());
    ui->DealNow->setGeometry((460+tick)*koefW,520*koefH,(565-2*tick)*koefW,81*koefH);
    ui->lcdTimer->display((150-tick)/10);
    if (tick==150)
        on_DealNow_clicked();
}

void MainWindow::Stand(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr) i = seatIdentifier[sender];
    seat[i].doubleButton->hide();
    seat[i].hitButton->hide();
    seat[i].standButton->hide();
    seat[i].splitButton->hide();    
    ui->lcdTimer->display(11);
    stillPlayingAmount--;
    if (stillPlayingAmount==0) CommitsEnd();
}
QQueue<int> QueueForHit;
void MainWindow::Hit(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr) i = seatIdentifier[sender];
    QueueForHit.enqueue(i);
    TimerForHit->start(500);
    ui->lcdTimer->display(11);
}
void MainWindow::HitNext()
{
    if (QueueForHit.empty())
    {
        TimerForHit->stop();
        if (!isDealingEnd)
        {
            isDealingEnd = true;
            for (int i = 0;i<6;i++)
                if (seat[i].isSeat && seat[i].sumCounter->value()<21)
            {
                seat[i].doubleButton->show();
                seat[i].hitButton->show();
                seat[i].standButton->show();
                seat[i].splitButton->show();
            }
            ui->lcdTimer->show();
            ui->lcdTimer->display(10);
            TimerForCommit->start(1000);
            ui->CentralLabel->hide();
            CountExtraBets();
        }
        return;
    }
    Card *card = new Card(rand(),this);
    int i = QueueForHit.dequeue();
    if (i==7)
    {
        if (dealerCards.count()==1) card->isOpen=false;
        dealerCards.append(card);
        card->show();
        card->CardAnimation->setDuration(300);
        int shiftUnit = (941-579) / (dealerCards.count()+1);
        if (dealerCards.count()==1)
        {
            ui->dealerSumCounter->show();
            ui->dealerSumCounter->setGeometry(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
        }
        else
        {
            dealerSumCounterAnimation->setStartValue(ui->dealerSumCounter->geometry());
            dealerSumCounterAnimation->setEndValue(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
            dealerSumCounterAnimation->start();
        }

        for (int j = 0;j<dealerCards.count();j++)
        {
            dealerCards[j]->CardAnimation->setStartValue(dealerCards[j]->geometry());
            dealerCards[j]->CardAnimation->setEndValue(QRect((579+(j+1)*shiftUnit-92/2+5)*koefW,5*koefH,92*koefW,135*koefH));
            dealerCards[j]->CardAnimation->start();
        }
        card->CardAnimation->setStartValue(QRect((1500-92)/2*koefW,-140*koefH,92*koefW,135*koefH));
        RecountSum(ui->dealerSumCounter,card,dealerCards.count(),&dealerAceCount);

    }
    else
    {
        seat[i].cards.append(card);
        card->show();
        card->CardAnimation->setDuration(1000);
        card->CardAnimation->setStartValue(QRect((1500-92)/2*koefW,-140*koefH,92*koefW,135*koefH));
        card->CardAnimation->setEndValue(QRect((seatX[i]+(seat[i].cards.count()-1)*15)*koefW,(seatY[i]-(seat[i].cards.count()-1)*30)*koefH,92*koefW,135*koefH));//TODO
        card->CardAnimation->start();
        RecountSum(seat[i].sumCounter,card,seat[i].cards.count(),&seat[i].aceCount);
        if (seat[i].sumCounter->value()>=21) Stand(i);
    }
}

void MainWindow::RecountSum(QLCDNumber *sumCounter, Card *card,const int cardsAmount, int *aceCounter)
{
    sumCounter->display(sumCounter->value()+card->value());
    if (card->value()==11)
        (*aceCounter)++;

    if (sumCounter->value()>21)
    {
        if ((*aceCounter)>0)
        {
            (*aceCounter)--;
            sumCounter->display(sumCounter->value()-10);
        }
        else
        {
            sumCounter->setStyleSheet("background: red;");
        }
    }
    else
        if (sumCounter->value()==21 && cardsAmount==2)
        {
            sumCounter->setStyleSheet("border-image: url(images/blackjack.png);");
            sumCounter->display("");
        }
}

void MainWindow::Dealing()
{    
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            seat[i].sumCounter->show();
            Hit(i);
        }
    Hit(7);
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
            Hit(i);
    Hit(7);
    /*Hit(7);
    Hit(7);
    Hit(7);
    Hit(7);
    Hit(7);
    Hit(7);
    Hit(7);
    Hit(7);*/
}

void MainWindow::on_RepeatButton_clicked()
{
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            seat[i].perfectPair->setValue(seat[i].prevBetPair);
            ValueChangedByUserSlot(seat[i].perfectPair);
            seat[i].mainBet->setValue(seat[i].prevBetMain);
            ValueChangedByUserSlot(seat[i].mainBet);
            seat[i].triple->setValue(seat[i].prevBetTriple);
            ValueChangedByUserSlot(seat[i].triple);
        }
}

void MainWindow::on_DoubleButton_clicked()
{
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            seat[i].perfectPair->setValue(seat[i].perfectPair->value()*2);
            ValueChangedByUserSlot(seat[i].perfectPair);
            seat[i].mainBet->setValue(seat[i].mainBet->value()*2);
            ValueChangedByUserSlot(seat[i].mainBet);
            seat[i].triple->setValue(seat[i].triple->value()*2);
            ValueChangedByUserSlot(seat[i].triple);
        }
}

void MainWindow::CountExtraBets()
{
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            Card *card1 = seat[i].cards[0];
            Card *card2 = seat[i].cards[1];
            Card *card3 = dealerCards[0];
            bool isPair = false,isTriple = false;

            if (card1->number()==card2->number())
            {
                if (card1->suit()==card2->suit())
                {
                    seat[i].perfectPair->setValue(seat[i].perfectPair->value()*26);
                    isPair = true;
                    seat[i].pairStatus->setText("Perfect Pair");
                }
                else
                    if (card1->suit() % 2 == card2->suit() % 2)
                    {
                        seat[i].perfectPair->setValue(seat[i].perfectPair->value()*13);
                        isPair = true;
                        seat[i].pairStatus->setText("Coloured Pair");
                    }
                    else
                    {
                        seat[i].perfectPair->setValue(seat[i].perfectPair->value()*7);
                        isPair = true;
                        seat[i].pairStatus->setText("Mixed Pair");
                    }
            }
            else
                seat[i].perfectPair->setValue(0);

            if (card1->number()>card2->number()) qSwap(card1,card2);
            if (card1->number()>card3->number()) qSwap(card1,card3);
            if (card2->number()>card3->number()) qSwap(card2,card3);

            if (card1->number()==card2->number() && card2->number()==card3->number())
            {
                if (card1->suit()==card2->suit() && card2->suit()==card3->suit())
                {
                    seat[i].triple->setValue(seat[i].triple->value()*101);
                    isTriple = true;
                    seat[i].tripleStatus->setText("Suited Trips");
                }
                else
                {
                    seat[i].triple->setValue(seat[i].triple->value()*31);
                    isTriple = true;
                    seat[i].tripleStatus->setText("Three of a Kind");
                }
            }
            else
                if ((card1->number()+1==card2->number() && card2->number()+1==card3->number()) || (card1->number()==2 && card2->number()==3 && card3->number()==14))
                {
                    if (card1->suit()==card2->suit() && card2->suit()==card3->suit())
                    {
                        seat[i].triple->setValue(seat[i].triple->value()*41);
                        isTriple = true;
                        seat[i].tripleStatus->setText("Straight Flush");
                    }
                    else
                    {
                        seat[i].triple->setValue(seat[i].triple->value()*11);
                        isTriple = true;
                        seat[i].tripleStatus->setText("Straight");
                    }
                }
                else
                    if (card1->suit()==card2->suit() && card2->suit()==card3->suit())
                    {
                        seat[i].triple->setValue(seat[i].triple->value()*6);
                        isTriple = true;
                        seat[i].tripleStatus->setText("Flush");
                    }
                    else
                        seat[i].triple->setValue(0);

            if (isPair)
            {
                seat[i].pairStatus->show();
                HighlightLabel(seat[i].pairStatus,true,2000);
                if (isTriple)
                {
                    QTimer *timer = new QTimer();
                    QObject *context = new QObject(this);
                    connect(timer, &QTimer::timeout,context, [=]() {
                        seat[i].tripleStatus->show();
                        HighlightLabel(seat[i].tripleStatus,true,2000);
                        delete context;
                    } );
                    timer->start(2007);
                }
            }
            else
            {
                if (isTriple)
                {
                    seat[i].tripleStatus->show();
                    HighlightLabel(seat[i].tripleStatus,true,2000);
                }
            }

        }
}

void MainWindow::NextSecond()
{

    ui->lcdTimer->display(ui->lcdTimer->value()-1);
    if (ui->lcdTimer->value()==0)
    {
        for (int i = 0;i<6;i++)
            if (seat[i].isSeat)
                Stand(i);
        CommitsEnd();
    }


}

void MainWindow::CommitsEnd()
{
    ui->lcdTimer->hide();
    TimerForCommit->stop();
}





