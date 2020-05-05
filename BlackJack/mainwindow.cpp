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
    seat[1].perfectPair = ui->spinBox_4;
    seat[1].mainBet = ui->spinBox_5;
    seat[1].triple = ui->spinBox_6;
    seat[1].multiSeat = ui->multiSeatButton_2;
    seat[1].closeButton = ui->closeButton_2;
    seat[2].perfectPair = ui->spinBox_7;
    seat[2].mainBet = ui->spinBox_8;
    seat[2].triple = ui->spinBox_9;
    seat[2].multiSeat = ui->multiSeatButton_3;
    seat[2].closeButton = ui->closeButton_3;
    seat[3].perfectPair = ui->spinBox_10;
    seat[3].mainBet = ui->spinBox_11;
    seat[3].triple = ui->spinBox_12;
    seat[3].multiSeat = ui->multiSeatButton_4;
    seat[3].closeButton = ui->closeButton_4;
    seat[4].perfectPair = ui->spinBox_13;
    seat[4].mainBet = ui->spinBox_14;
    seat[4].triple = ui->spinBox_15;
    seat[4].multiSeat = ui->multiSeatButton_5;
    seat[4].closeButton = ui->closeButton_5;
    seat[5].perfectPair = ui->spinBox_16;
    seat[5].mainBet = ui->spinBox_17;
    seat[5].triple = ui->spinBox_18;
    seat[5].multiSeat = ui->multiSeatButton_6;
    seat[5].closeButton = ui->closeButton_6;

    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(-3,-3);
    ui->CentralLabel->setGraphicsEffect(effect);
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(-3,-3);
    ui->DealNow->setGraphicsEffect(effect);
    ui->DealNow->hide();
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(-3,-3);
    ui->lcdTimer->setGraphicsEffect(effect);
    ui->lcdTimer->hide();


    TimerForDealNow = new QTimer();
    connect(TimerForDealNow,SIGNAL(timeout()),this,SLOT(NextColorSlot()));

    TimerForHit = new QTimer();
    connect(TimerForHit,SIGNAL(timeout()),this,SLOT(HitNext()));


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

    for (auto & i : seat)
    {
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
    }
    QStringList temp = {"€","$","£","₽","Br","₪","￥"};
    ui->comboBoxCurrency->addItems(temp);

}

MainWindow::~MainWindow()
{
    //for (int i =0;i<18;i++)
    delete ui;
}

void MainWindow::HighlightCentralLabel()
{
    ui->CentralLabel->setStyleSheet("QLabel{"
                                    "color:  rgb(102,180,50);"
                                    "padding: 2px;"
                                    "border: 3px inset red;"
                                    "border-radius: 31px;}");
    QTimer *timer = new QTimer();
    QObject *context = new QObject(this);
    connect(timer, &QTimer::timeout,context, [=]() {
        ui->CentralLabel->setStyleSheet("QLabel{"
                                        "color:  rgb(102,180,50);"
                                        "padding: 2px;"
                                        "border: 3px solid rgb(231,181,77);"
                                        "border-radius: 31px;}");
        delete context;
    } );
    timer->start(800);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
    //qDebug() << seat[0].cards[0]->CardAnimation->state();
    //seat[0].cards[0]->CardAnimation->setEndValue(QRect(rand()%1400,800,200,200));

    //seat[0].cards[0]->CardAnimation->setDuration(10000);
    //seat[0].cards[0]->CardAnimation->start();
    //seat[0].cards[0]->CardAnimation->start();
}

void MainWindow::on_Exit_clicked()
{
    //save!
    qApp->exit();
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << " real: " << this->width();
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
            seat[i].multiSeat->setGeometry(seatX[i]*koefW,seatY[i]*koefH,97*koefW, 135*koefH);

        image.load("images/takeseat");
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
        if (strcmp(ui->CentralLabel->text().toLatin1(),"TAKE A SEAT")!=0)
        {
            ui->CentralLabel->setText("TAKE A SEAT");
            HighlightCentralLabel();
        }
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
            ui->CentralLabel->setText("PLACE YOUR BETS");
            HighlightCentralLabel();
        }
        for (int i = 0;i<6;i++)
            if (!seat[i].isSeat)
            {
                seat[i].multiSeat->setGeometry(seatX[i]*koefW,seatY[i]*koefH,97*koefW, 135*koefH);
            }
            else
            {
                seat[i].underSeat->show();
                seat[i].underSeat->setGeometry((seatX[i]-62+3)*koefW,(seatY[i]+135+10)*koefH,(221-3)*koefW,100*koefH);                
                int counter = 0;
                for (auto &card:seat[i].cards)
                {
                    if (card->CardAnimation->state()==QAbstractAnimation::State::Stopped)
                        card->setGeometry(QRect((seatX[i]+counter*15)*koefW,(seatY[i]-counter*30)*koefH,92*koefW,135*koefH));
                    else
                        card->CardAnimation->setEndValue(QRect((seatX[i]+counter*15)*koefW,(seatY[i]-counter*30)*koefH,92*koefW,135*koefH));

                    counter++;
                }
            }
    }
    ui->gridLayoutWidget->setGeometry(QRect(10*koefW,765*koefH,251*koefW,111*koefH));
    ui->comboBoxCurrency->setFont(QFont("Times", 36*koefW));
    ui->labelBalance->setFont(QFont("BankGothic Lt BT", 20*koefW));
    ui->comboBoxCurrency->setMinimumSize(80*koefW,65*koefH);
    ui->comboBoxCurrency->setMaximumSize(80*koefW,65*koefH);

    ui->gridLayoutWidget_2->setGeometry(QRect(1320*koefW,765*koefH,161*koefW,111*koefH));
    ui->labelTotalBet->setFont(QFont("BankGothic Lt BT", 18*koefW));



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
    seat[i].isSeat = false;
    seat[i].underSeat->hide();
    seat[i].multiSeat->show();
    isSeat = false;
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat) isSeat = true;
    for (int i = 0;i<6;i++)
        if (!isSeat)
            seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/sit_here.png);}"
                                             "QPushButton:hover{border-image: url(images/sit_here_hover.png);}"
                                             "QPushButton:pressed{ border-image: url(images/sit_here_pressed.png);}");
        else
            seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/multi_seat.png);}"
                                             "QPushButton:hover{border-image: url(images/multi_seat_hover.png);}"
                                             "QPushButton:pressed{ border-image: url(images/multi_seat_pressed.png);}");

    seat[i].perfectPair->setValue(0);
    ValueChangedByUserSlot(seat[i].perfectPair);
    seat[i].mainBet->setValue(0);
    ValueChangedByUserSlot(seat[i].mainBet);
    seat[i].triple->setValue(0);
    ValueChangedByUserSlot(seat[i].triple);
    update();

}
void MainWindow::on_closeButton_1_clicked()
{
    closeFunc (0);
}

void MainWindow::on_closeButton_2_clicked()
{
    closeFunc (1);
}

void MainWindow::on_closeButton_3_clicked()
{
    closeFunc (2);
}

void MainWindow::on_closeButton_4_clicked()
{
    closeFunc (3);
}

void MainWindow::on_closeButton_5_clicked()
{
    closeFunc (4);
}

void MainWindow::on_closeButton_6_clicked()
{
    closeFunc (5);
}

void MainWindow::multiSeatFunc(int i)
{
    seat[i].isSeat = true;
    isSeat = true;
    seat[i].multiSeat->hide();
    for (int i = 0;i<6;i++)
        seat[i].multiSeat->setStyleSheet("QPushButton {border-image: url(images/multi_seat.png);}"
                                         "QPushButton:hover{border-image: url(images/multi_seat_hover.png);}"
                                         "QPushButton:pressed{ border-image: url(images/multi_seat_pressed.png);}");
    update();
}
void MainWindow::on_multiSeatButton_1_clicked()
{
    multiSeatFunc(0);
}

void MainWindow::on_multiSeatButton_2_clicked()
{
    multiSeatFunc(1);
}

void MainWindow::on_multiSeatButton_3_clicked()
{
    multiSeatFunc(2);
}

void MainWindow::on_multiSeatButton_4_clicked()
{
    multiSeatFunc(3);
}

void MainWindow::on_multiSeatButton_5_clicked()
{
    multiSeatFunc(4);
}

void MainWindow::on_multiSeatButton_6_clicked()
{
    multiSeatFunc(5);
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
            seat[i].multiSeat->setDisabled(true);
        ui->comboBoxCurrency->setDisabled(true);
    }
    else
    {
        ui->lcdTimer->hide();
        ui->DealNow->hide();
        TimerForDealNow->stop();
        tick = 0;
        for (int i = 0;i<6;i++)
            seat[i].multiSeat->setDisabled(false);
        ui->comboBoxCurrency->setDisabled(false);
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
    for (int i = 0;i<6;i++)
    {
        seat[i].perfectPair->setDisabled(true);
        if (seat[i].mainBet->value()==0)
            seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]);
        seat[i].mainBet->setDisabled(true);
        seat[i].triple->setDisabled(true);
        seat[i].closeButton->hide();
    }
    tick = 0;
    TimerForDealNow->stop();
    ui->lcdTimer->hide();
    ui->DealNow->hide();
    ui->CentralLabel->setText("BETS CLOSED AND ACCEPTED");
    HighlightCentralLabel();
    //TODO cool background effects
    QTimer *timer = new QTimer();
    QObject *context = new QObject(this);
    connect(timer, &QTimer::timeout,context, [=]() {
        ui->CentralLabel->setText("DEALING");
        HighlightCentralLabel();
        Dealing();
        delete context;
    } );
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
    {
        on_DealNow_clicked();
        //func
    }
}

QQueue<int> QueueForHit;
void MainWindow::Hit(int i)
{
    QueueForHit.enqueue(i);
    TimerForHit->start(500);
}
void MainWindow::HitNext()
{
    if (QueueForHit.empty())
    {
        TimerForHit->stop();
        return;
    }
    Card *Q = new Card(rand(),this);
    int i = QueueForHit.dequeue();
    seat[i].cards.append(Q);
    Q->setGeometry(seatX[i],seatY[i],92,135);
    Q->show();
    Q->CardAnimation->setDuration(1000);
    Q->CardAnimation->setStartValue(QRect((1500-92)/2*koefW,-140*koefH,92*koefW,135*koefH));    
    Q->CardAnimation->setEndValue(QRect((seatX[i]+(seat[i].cards.count()-1)*15)*koefW,(seatY[i]-(seat[i].cards.count()-1)*30)*koefH,92*koefW,135*koefH));//TODO
    Q->CardAnimation->start();
}

void MainWindow::Dealing()
{

    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
            Hit(i);
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
            Hit(i);

}







