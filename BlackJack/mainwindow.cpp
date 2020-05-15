#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(QTime::currentTime().msec());
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
    seat[0].extra.horizontalSpacer = ui->horizontalSpacer_1;
    seat[0].extra.sumCounter = ui->lcdNumberExtra_1;
    seat[0].gridLayoutLeft = ui->gridLayoutLeft_1;
    seat[0].gridLayoutRight = ui->gridLayoutRight_1;
    seat[0].extra.hitButton = ui->hitButtonExtra_1;
    seat[0].extra.standButton = ui->standButtonExtra_1;
    seat[0].horizontalSpacerLeft = ui->horizontalSpacerLeft_1;
    seat[0].horizontalSpacerRight = ui->horizontalSpacerRight_1;
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
    seat[1].extra.horizontalSpacer = ui->horizontalSpacer_2;
    seat[1].extra.sumCounter = ui->lcdNumberExtra_2;
    seat[1].gridLayoutLeft = ui->gridLayoutLeft_2;
    seat[1].gridLayoutRight = ui->gridLayoutRight_2;
    seat[1].extra.hitButton = ui->hitButtonExtra_2;
    seat[1].extra.standButton = ui->standButtonExtra_2;
    seat[1].horizontalSpacerLeft = ui->horizontalSpacerLeft_2;
    seat[1].horizontalSpacerRight = ui->horizontalSpacerRight_2;
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
    seat[2].extra.horizontalSpacer = ui->horizontalSpacer_3;
    seat[2].extra.sumCounter = ui->lcdNumberExtra_3;
    seat[2].gridLayoutLeft = ui->gridLayoutLeft_3;
    seat[2].gridLayoutRight = ui->gridLayoutRight_3;
    seat[2].extra.hitButton = ui->hitButtonExtra_3;
    seat[2].extra.standButton = ui->standButtonExtra_3;
    seat[2].horizontalSpacerLeft = ui->horizontalSpacerLeft_3;
    seat[2].horizontalSpacerRight = ui->horizontalSpacerRight_3;
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
    seat[3].extra.horizontalSpacer = ui->horizontalSpacer_4;
    seat[3].extra.sumCounter = ui->lcdNumberExtra_4;
    seat[3].gridLayoutLeft = ui->gridLayoutLeft_4;
    seat[3].gridLayoutRight = ui->gridLayoutRight_4;
    seat[3].extra.hitButton = ui->hitButtonExtra_4;
    seat[3].extra.standButton = ui->standButtonExtra_4;
    seat[3].horizontalSpacerLeft = ui->horizontalSpacerLeft_4;
    seat[3].horizontalSpacerRight = ui->horizontalSpacerRight_4;
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
    seat[4].extra.horizontalSpacer = ui->horizontalSpacer_5;
    seat[4].extra.sumCounter = ui->lcdNumberExtra_5;
    seat[4].gridLayoutLeft = ui->gridLayoutLeft_5;
    seat[4].gridLayoutRight = ui->gridLayoutRight_5;
    seat[4].extra.hitButton = ui->hitButtonExtra_5;
    seat[4].extra.standButton = ui->standButtonExtra_5;
    seat[4].horizontalSpacerLeft = ui->horizontalSpacerLeft_5;
    seat[4].horizontalSpacerRight = ui->horizontalSpacerRight_5;
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
    seat[5].extra.horizontalSpacer = ui->horizontalSpacer_6;
    seat[5].extra.sumCounter = ui->lcdNumberExtra_6;
    seat[5].gridLayoutLeft = ui->gridLayoutLeft_6;
    seat[5].gridLayoutRight = ui->gridLayoutRight_6;
    seat[5].extra.hitButton = ui->hitButtonExtra_6;
    seat[5].extra.standButton = ui->standButtonExtra_6;
    seat[5].horizontalSpacerLeft = ui->horizontalSpacerLeft_6;
    seat[5].horizontalSpacerRight = ui->horizontalSpacerRight_6;


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
    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setOffset(3,3);
    ui->AdditionalStatus->setGraphicsEffect(effect);


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
        connect(i.doubleButton,SIGNAL(clicked()),this,SLOT(DoubleDown()));
        connect(i.hitButton,SIGNAL(clicked()),this,SLOT(Hit()));
        connect(i.standButton,SIGNAL(clicked()),this,SLOT(Stand()));
        connect(i.splitButton,SIGNAL(clicked()),this,SLOT(Split()));
        connect(i.closeButton,SIGNAL(clicked()),this,SLOT(closeFunc()));
        connect(i.multiSeat,SIGNAL(clicked()),this,SLOT(multiSeatFunc()));
        connect(i.extra.hitButton,SIGNAL(clicked()),this,SLOT(Hit()));
        connect(i.extra.standButton,SIGNAL(clicked()),this,SLOT(Stand()));
        seatIdentifier[i.doubleButton] = counter;
        seatIdentifier[i.hitButton] = counter;
        seatIdentifier[i.standButton] = counter;
        seatIdentifier[i.splitButton] = counter;
        seatIdentifier[i.closeButton] = counter;
        seatIdentifier[i.multiSeat] = counter;
        seatIdentifier[i.extra.hitButton] = counter+6;
        seatIdentifier[i.extra.standButton] = counter+6;
        i.doubleButton->hide();
        //i.doubleButton->setStyleSheet("border-image: url(images/double.png);");
        i.hitButton->hide();
        //i.hitButton->setStyleSheet("border-image: url(images/hit.png);");
        i.standButton->hide();
//        i.standButton->setStyleSheet("border-image: url(images/stand.png);");
        i.splitButton->hide();
//        i.splitButton->setStyleSheet("border-image: url(images/split.png);");
        i.extra.hitButton->hide();
        //i.extra.hitButton->setStyleSheet("border-image: url(images/hit.png);");
        i.extra.standButton->hide();
        //i.extra.standButton->setStyleSheet("border-image: url(images/stand.png);");
        i.horizontalSpacerLeft->changeSize(0,0);
        i.horizontalSpacerRight->changeSize(0,0);
        counter++;

        i.extra.horizontalSpacer->changeSize(0,0);
        i.extra.sumCounter->hide();
    }
//    QStringList temp = {"€","$","£","₽","Br","₪","￥"};
//    ui->comboBoxCurrency->addItems(temp);
//    QString temps = "fds";
//    ui->comboBoxCurrency->addItem(temps);
//    ui->comboBoxCurrency->addItem("fdsf");

    dealerSumCounterAnimation = new QPropertyAnimation(ui->dealerSumCounter,"geometry");
    dealerSumCounterAnimation->setDuration(300*koefSpeed);
    ui->dealerSumCounter->hide();
    ui->DeltaBalanceStatus->hide();    
    ui->InsuranceYes->hide();
    ui->InsuranceNo->hide();
    ui->AdditionalStatus->hide();
   // qDebug() << QDir::currentPath();
//    qDebug() << QCoreApplication::applicationDirPath();
    downloader = new Downloader(this);
    connect(downloader,SIGNAL(onReady(bool)),this,SLOT(AfterDownloadingCurrency(bool)));
    downloader->getData();

    ui->SettingsFrame->hide();

//    ui->textBrowser->setText(downloader->data);

}

MainWindow::~MainWindow()
{
    //for (int i =0;i<18;i++)
    delete ui;
}

void MainWindow::HighlightLabel(QLabel *label,bool hideLater,int timeMs)
{
    label->show();
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
        delete context;
    } );
    if (hideLater)
    {
        QTimer *timer = new QTimer();
        QObject *context = new QObject(this);
        connect(timer, &QTimer::timeout,context, [=]() {
                label->hide();
            delete context;
        } );
        timer->start(timeMs);
    }
    timer->start(timeMs/2);
    label->raise();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (!ui->SettingsFrame->geometry().contains(event->pos()))
        ui->SettingsFrame->hide();
    qDebug() << event->pos();
    qDebug() << ui->BalanceAmount->value() << "balance";
    qDebug() << ui->TotalBetAmount->value() << "totalbet";

    qDebug() << minimumBet*downloader->course->koef[downloader->course->ind[ui->comboBoxCurrency->currentIndex()]] << "minbetreal";
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            qDebug() << "Seat[" << i << "]////////////////";
            qDebug() << RealValueSpinBox[seat[i].perfectPair];
            qDebug() << RealValueSpinBox[seat[i].mainBet];
            qDebug() << RealValueSpinBox[seat[i].triple];
        }
//    ui->horizontalSpacer_1->changeSize(15,20);
//    ui->lcdNumberExtra_1->show();
//    Hit(-1);
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
    int tempW;
    if (!isSeat)
    {
        for (int i = 0;i<6;i++)
            seat[i].multiSeat->setGeometry(seatX[i]*koefW,seatY[i]*koefH,92*koefW, 135*koefH);

        image.load("images/takeseat");
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
        if (ui->CentralLabel->text()!="TAKE A SEAT" && ui->CentralLabel->text()!="YOUR BALANCE IS TOO LOW TO PLAY")
        {
            ui->CentralLabel->setText("TAKE A SEAT");
            HighlightLabel(ui->CentralLabel);
        }
        ui->RepeatButton->hide();
        ui->DoubleButton->hide();
        if (stashCard!=nullptr)
            stashCard->isBlur = true;

        if (ui->AdditionalStatus->text()!="COURSES LOADED" && ui->AdditionalStatus->text()!="FAILED TO LOAD COURSES")
        {
            ui->AdditionalStatus->hide();
            ui->AdditionalStatus->setText("");
        }
    }
    else
    {
        image.load("images/background");
        painter.drawImage(0,0,image.scaled(width(), height(),Qt::IgnoreAspectRatio));
        if (ui->CentralLabel->text()=="TAKE A SEAT")
        {
            ui->RepeatButton->show();
            ui->DoubleButton->show();
            ui->CentralLabel->setText("PLACE YOUR BETS");
            HighlightLabel(ui->CentralLabel);
            ui->AdditionalStatus->setText("MINIMUM BET " + QString::number(ui->MinimumBetNumber->value()));
            HighlightLabel(ui->AdditionalStatus);
        }
        for (int i = 0;i<6;i++)
            if (!seat[i].isSeat)
            {
                seat[i].multiSeat->setGeometry(seatX[i]*koefW,seatY[i]*koefH,92*koefW, 135*koefH);
            }
            else
            {
                seat[i].underSeat->show();
                seat[i].underSeat->setGeometry((seatX[i]-60)*koefW,(seatY[i]+135+10)*koefH,212*koefW,100*koefH);

                if (!seat[i].blockCardAnimation)
                {
                    int counter = 0;
                    for (auto &card:seat[i].cards)
                        if (card->CardAnimation->state()==QAbstractAnimation::Stopped)
                        {
                            if (seat[i].extra.isExist)
                                card->setGeometry((seatX[i]-92/2-5+counter*3)*koefW,(seatY[i]-counter*35)*koefH,92*koefW,135*koefH);
                            else
                                card->setGeometry((seatX[i]+counter*15)*koefW,(seatY[i]-counter*35)*koefH,92*koefW,135*koefH);

                            counter++;
                        }
                }

                if (!seat[i].extra.blockCardAnimation)
                {
                    int counter = 0;
                    for (auto &card:seat[i].extra.cards)
                        if (card->CardAnimation->state()==QAbstractAnimation::Stopped)
                        {
                            card->setGeometry((seatX[i]+92/2+5+counter*3)*koefW,(seatY[i]-counter*35)*koefH,92*koefW,135*koefH);

                            counter++;
                        }
                }
                tempW = seat[i].pairStatus->text().count()*20;
                seat[i].pairStatus->setFont(QFont("Segoe Print", 20*koefW*koefFont));
                seat[i].pairStatus->setGeometry((seatX[i]+92/2-tempW/2)*koefW,(seatY[i]-(65+36))*koefH,tempW*koefW,65*koefH);
                tempW = seat[i].tripleStatus->text().count()*20;
                seat[i].tripleStatus->setFont(QFont("Segoe Print", 20*koefW*koefFont));
                seat[i].tripleStatus->setGeometry((seatX[i]+92/2-tempW/2)*koefW,(seatY[i]-(65+36))*koefH,tempW*koefW,65*koefH);
                if (stashCard!=nullptr && stashCard->CardAnimation->state()==QAbstractAnimation::Stopped)
                {
                    stashCard->isBlur = false;
                    stashCard->setGeometry(10*koefW,10*koefH,92*koefW,135*koefH);
                }                
            }
        int counter = 0;
        int shiftUnit = (941-579) / (dealerCards.count()+1);
        if (dealerSumCounterAnimation->state()==QAbstractAnimation::Stopped)
            ui->dealerSumCounter->setGeometry(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
        else
            dealerSumCounterAnimation->setEndValue(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
        if (!dealerBlockCardAnimation)
        {
            for (auto &card:dealerCards)
                if (card->CardAnimation->state()==QAbstractAnimation::Stopped)
                {

                    card->setGeometry(QRect((579+(counter+1)*shiftUnit-92/2+5)*koefW,5*koefH,92*koefW,135*koefH));
                    //      else
                    //card->CardAnimation->setEndValue(QRect((579+(counter+1)*shiftUnit-92/2+5)*koefW,5*koefH,92*koefW,135*koefH));
                    counter++;
                }
        }
        //        if (strcmp(ui->AdditionalStatus->text().toLatin1(),"COURSES LOADED")==0)
        //            ui->AdditionalStatus->hide();


    }
    tempW = 20*ui->CurrentCurrency->text().count() + 60;
    ui->gridLayoutWidget->setGeometry(QRect(10*koefW,760*koefH,170*koefW,111*koefH));
    ui->CurrentCurrency->setFont(QFont("Times", 30*koefW*koefFont));
    ui->labelBalance->setFont(QFont("BankGothic Lt BT", 20*koefW*koefFont));
    ui->CurrentCurrency->setGeometry(QRect(ui->gridLayoutWidget->pos() + QPoint(175*koefW,60*koefH),QSize(tempW*koefW,52*koefH)));


    ui->gridLayoutWidget_2->setGeometry(QRect(1320*koefW,760*koefH,161*koefW,111*koefH));
    ui->labelTotalBet->setFont(QFont("BankGothic Lt BT", 18*koefW*koefFont));


    ui->RepeatButton->setGeometry(710*koefW,620*koefH,80*koefW,80*koefH);
    ui->DoubleButton->setGeometry(710*koefW,730*koefH,80*koefW,80*koefH);

    ui->gridLayoutWidget_4->setGeometry(QRect(1320*koefW,35*koefH,161*koefW,111*koefH));
    ui->LabelMinimumBet->setFont(QFont("BankGothic Lt BT", 15*koefW*koefFont));

    ui->CentralLabel->setFont(QFont("Segoe Print", 30*koefW*koefFont));
    tempW = ui->CentralLabel->text().count()*36;
    ui->CentralLabel->setGeometry((1500-tempW)/2*koefW,(900-65+40)/2*koefH,tempW*koefW,65*koefH);

    ui->AdditionalStatus->setFont(QFont("Segoe Print", 30*koefW*koefFont));
    tempW = ui->AdditionalStatus->text().count()*36;
    ui->AdditionalStatus->setGeometry((1500-tempW)/2*koefW,(900-65+80+130)/2*koefH,tempW*koefW,65*koefH);

    ui->DeltaBalanceStatus->setFont(QFont("Segoe Print", 30*koefW*koefFont));
    tempW = ui->DeltaBalanceStatus->text().count()*37;  
    ui->DeltaBalanceStatus->setGeometry(QRect(ui->CurrentCurrency->pos() + QPoint(ui->CurrentCurrency->width()+5*koefW,-5*koefH),QSize(tempW*koefW,62*koefH)));

    ui->DealNow->setFont(QFont("MS Shell Dlg 2", 20*koefW*koefFont));
    ui->lcdTimer->setGeometry(712*koefW,630*koefH,61*koefW,61*koefH);

    ui->InsuranceYes->setGeometry(650*koefW,530*koefH,81*koefW,41*koefH);
    ui->InsuranceNo->setGeometry(760*koefW,530*koefH,81*koefW,41*koefH);


    ui->SettingsButton->setGeometry(110*koefW,10*koefH,51*koefW,51*koefW);
    ui->SettingsFrame->setGeometry(160*koefW,60*koefH,400*koefW,270*koefH);
    ui->labelCurrency->setGeometry(15*koefW,10*koefH,ui->SettingsFrame->width() - 30*koefW,30*koefH);
    ui->comboBoxCurrency->setGeometry(10*koefW,40*koefH,ui->SettingsFrame->width() - 20*koefW,40*koefH);
    ui->comboBoxCurrency->setFont(QFont("Times", 13*koefW*koefFont));
    ui->AnimationSpeedLabel->setGeometry(15*koefW,100*koefH,ui->SettingsFrame->width() - 30*koefW,30*koefH);
    ui->AnimationSpeedSetting->setGeometry(10*koefW,130*koefH,ui->SettingsFrame->width() - 20*koefW,40*koefH);
    ui->FontSizeLabel->setGeometry(15*koefW,190*koefH,ui->SettingsFrame->width() - 30*koefW,30*koefH);
    ui->FontSizeSetting->setGeometry(10*koefW,220*koefH,ui->SettingsFrame->width() - 20*koefW,40*koefH);

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
    timersForColor[SpinBox]->start(500*koefSpeed);
}
QHash<QSpinBox*,int> prevValueForColor;
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
bool MainWindow::ValueChangedByUserSlot(QSpinBox *SpinBox)
{
    auto* sender=dynamic_cast<QSpinBox*>(QObject::sender());
    if (sender==nullptr) sender = (QSpinBox*)SpinBox;

    if (sender->value()-RealValueSpinBox[sender]>ui->BalanceAmount->value())
    {
        QMessageBox::critical(this,"BlackJack","Not enough money");
        sender->setValue(RealValueSpinBox[sender]);
        return false;
    }
    changeColor(sender,"QSpinBox{"
                       "border-style: outset;"
                       "border-color: orange;}");
    ui->TotalBetAmount->display(ui->TotalBetAmount->value()+(sender->value()-RealValueSpinBox[sender]));
    ui->BalanceAmount->display(ui->BalanceAmount->value()-(sender->value()-RealValueSpinBox[sender]));
    DeleteTrash();
    RealValueSpinBox[sender] = sender->value();
    if (isDealingEnd)
        for (int i = 0;i<6;i++)
        {
            if (seat[i].mainBet->value() > ui->BalanceAmount->value())
            {
                seat[i].doubleButton->setStyleSheet("border-image: url(images/double_blocked.png);");
                seat[i].doubleButton->setDisabled(true);
                seat[i].splitButton->setStyleSheet("border-image: url(images/split_blocked.png);");
                seat[i].splitButton->setDisabled(true);
            }
        }


    if (stillPlayingAmount==0)
    {
        bool NoOneIsZero = true;
        for (int i = 0;i<6;i++)
            if (seat[i].isSeat)
                if (RealValueSpinBox[seat[i].perfectPair]+RealValueSpinBox[seat[i].mainBet]+RealValueSpinBox[seat[i].triple] < minimumBet*downloader->course->koef[downloader->course->ind[ui->comboBoxCurrency->currentIndex()]]-0.00001 || seat[i].mainBet->value()==0)
                    NoOneIsZero = false;
        if (NoOneIsZero && ui->TotalBetAmount->value()!=0)
        {
            ui->lcdTimer->show();
            ui->DealNow->show();
            TimerForDealNow->start(100*koefSpeed);
            for (int i = 0;i<6;i++)
            {
                seat[i].multiSeat->setDisabled(true);
                seat[i].multiSeat->setStyleSheet("border-image: url(images/multi_seat_blocked.png);");
            }
            ui->comboBoxCurrency->setDisabled(true);
            ui->RepeatButton->hide();
            ui->AdditionalStatus->hide();
            ui->AdditionalStatus->setText("");
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
            ui->AdditionalStatus->setText("MINIMUM BET " + QString::number(ui->MinimumBetNumber->value()));
            HighlightLabel(ui->AdditionalStatus);
        }
    }
    return true;

}

int prevCurrency = 0;
void MainWindow::on_comboBoxCurrency_currentIndexChanged(int index)
{        
    QString ind = downloader->course->ind[index];
    double koef = downloader->course->koef[ind]/downloader->course->koef[downloader->course->ind[prevCurrency]];
//    ui->comboBoxCurrency->setItemText(prevCurrency,downloader->course->symbol[downloader->course->ind[prevCurrency]] + "     " + downloader->course->title[downloader->course->ind[prevCurrency]]);
//    ui->comboBoxCurrency->setItemText(index,downloader->course->symbol[ind]);
    ui->CurrentCurrency->setText(downloader->course->symbol[downloader->course->ind[index]]);
    ui->MinimumBetNumber->display(qCeil(minimumBet*downloader->course->koef[ind]));
    if (ui->AdditionalStatus->text()[0]=="M")
    {
        ui->AdditionalStatus->setText("MINIMUM BET " + QString::number(ui->MinimumBetNumber->value()));
        HighlightLabel(ui->AdditionalStatus);
    }
    int singleStep = ui->MinimumBetNumber->value()/3/10;
    for (int i = 10;i<1e8;i*=10)
        if (singleStep<i)
        {
            singleStep = i;
            break;
        }
//    double delta = 0;
    for (int i = 0;i<6;i++)
    {
        RealValueSpinBox[seat[i].perfectPair] *= koef;
//        delta += RealValueSpinBox[seat[i].perfectPair] - (int)RealValueSpinBox[seat[i].perfectPair];
//        RealValueSpinBox[seat[i].perfectPair] = (int)RealValueSpinBox[seat[i].perfectPair];

        RealValueSpinBox[seat[i].mainBet] *= koef;
//        delta += RealValueSpinBox[seat[i].mainBet] - (int)RealValueSpinBox[seat[i].mainBet];
//        RealValueSpinBox[seat[i].mainBet] = (int)RealValueSpinBox[seat[i].mainBet];

        RealValueSpinBox[seat[i].triple] *= koef;
//        delta += RealValueSpinBox[seat[i].triple] - (int)RealValueSpinBox[seat[i].triple];
//        RealValueSpinBox[seat[i].triple] = (int)RealValueSpinBox[seat[i].triple];

        seat[i].perfectPair->setValue(RealValueSpinBox[seat[i].perfectPair]+0.5);
        seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]+0.5);
        seat[i].triple->setValue(RealValueSpinBox[seat[i].triple]+0.5);

        seat[i].prevBetPair *= koef;
        seat[i].prevBetMain *=  koef;
        seat[i].prevBetTriple *= koef;

        seat[i].perfectPair->setSingleStep(singleStep);
        seat[i].mainBet->setSingleStep(singleStep);
        seat[i].triple->setSingleStep(singleStep);
    }
    ui->TotalBetAmount->display(ui->TotalBetAmount->value()*koef /*- delta*/);
    ui->BalanceAmount->display(ui->BalanceAmount->value()*koef /*+ delta*/);
    DeleteTrash();
    prevCurrency = index;
}

void MainWindow::on_DealNow_clicked()
{
    stillPlayingAmount = 0;
    double delta = 0;
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
    {

        if (seat[i].mainBet->value() == 0)
            seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]);
        if (seat[i].perfectPair->value()+seat[i].mainBet->value()+seat[i].triple->value() < minimumBet*downloader->course->koef[downloader->course->ind[ui->comboBoxCurrency->currentIndex()]])
        {
            seat[i].perfectPair->setValue(RealValueSpinBox[seat[i].perfectPair]);
            seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]);
            seat[i].triple->setValue(RealValueSpinBox[seat[i].triple]);
        }

        seat[i].perfectPair->setDisabled(true);
        seat[i].mainBet->setDisabled(true);
        seat[i].triple->setDisabled(true);

        delta += RealValueSpinBox[seat[i].perfectPair] - seat[i].perfectPair->value();
        RealValueSpinBox[seat[i].perfectPair] = seat[i].perfectPair->value();
        delta += RealValueSpinBox[seat[i].mainBet] - seat[i].mainBet->value();
        RealValueSpinBox[seat[i].mainBet] = seat[i].mainBet->value();
        delta += RealValueSpinBox[seat[i].triple] - seat[i].triple->value();
        RealValueSpinBox[seat[i].triple] = seat[i].triple->value();

        seat[i].closeButton->hide();

            seat[i].prevBetPair = seat[i].perfectPair->value();
            seat[i].prevBetMain = seat[i].mainBet->value();
            seat[i].prevBetTriple = seat[i].triple->value();
            seat[i].stillPlay = true;
            stillPlayingAmount++;

        if (seat[i].mainBet->value() > ui->BalanceAmount->value())
        {
            seat[i].doubleButton->setStyleSheet("border-image: url(images/double_blocked.png);");
            seat[i].doubleButton->setDisabled(true);
            seat[i].splitButton->setStyleSheet("border-image: url(images/split_blocked.png);");
            seat[i].splitButton->setDisabled(true);
        }
    }
    ui->TotalBetAmount->display(ui->TotalBetAmount->value() - delta);
    ui->BalanceAmount->display(ui->BalanceAmount->value() + delta);

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
    timer->start(2000*koefSpeed);
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

void MainWindow::DoubleDown(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr)
    {
        i = seatIdentifier[sender];
        if (seat[i].sumCounter->value()>=17)
        {
            TimerForCommit->stop();
            if (QMessageBox::warning(this, tr("BlackJack"),tr("Are you sure you want\nto get another card?"),QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
            {
                TimerForCommit->start();
                return;
            }
            TimerForCommit->start();
        }
        on_InsuranceNo_clicked();
    }
    seat[i].mainBet->setValue(seat[i].mainBet->value() * 2);
    if (ValueChangedByUserSlot(seat[i].mainBet))
    {
        Hit(i);
        Stand(i);
    }
}
void MainWindow::Split(int i)
{
    auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
    if (sender!=nullptr)
    {
        i = seatIdentifier[sender];
        on_InsuranceNo_clicked();
    }
    seat[i].mainBet->setValue(seat[i].mainBet->value() * 2);
    if (ValueChangedByUserSlot(seat[i].mainBet))
    {
        seat[i].extra.isExist = true;
        seat[i].gridLayoutLeft->addWidget(seat[i].hitButton,0,0,1,1);
        seat[i].gridLayoutLeft->addWidget(seat[i].standButton,0,1,1,1);
        seat[i].gridLayoutRight->addWidget(seat[i].extra.hitButton,0,0,1,1);
        seat[i].gridLayoutRight->addWidget(seat[i].extra.standButton,0,1,1,1);
        seat[i].splitButton->hide();
        seat[i].doubleButton->hide();
        seat[i].extra.hitButton->show();
        seat[i].extra.standButton->show();
        seat[i].extra.horizontalSpacer->changeSize(15,20);
        seat[i].extra.sumCounter->show();
        seat[i].extra.stillPlay = true;
        seat[i].extra.cards.append(seat[i].cards.takeLast());
        stillPlayingAmount++;
//        ui->lcdTimer->display(11);
        Hit(i);
        Hit(i+6);
        if (seat[i].cards[0]->value()==11)
        {
            seat[i].extra.sumCounter->display(11);
            seat[i].sumCounter->display(11);
            seat[i].aceCount = 1;
            seat[i].extra.aceCount = 1;
            Stand(i);
            Stand(i+6);
        }
        else
        {
            seat[i].extra.sumCounter->display(seat[i].sumCounter->value()/2);
            seat[i].sumCounter->display(seat[i].sumCounter->value()/2);
        }
        seat[i].cards[0]->CardAnimation->setStartValue(seat[i].cards[0]->geometry());
        seat[i].cards[0]->CardAnimation->setEndValue(QRect((seatX[i]-92/2-5)*koefW,seatY[i]*koefH,92*koefW,135*koefH));
        seat[i].cards[0]->CardAnimation->setDuration(500*koefSpeed);
        seat[i].cards[0]->CardAnimation->start();
        seat[i].extra.cards[0]->CardAnimation->setStartValue(seat[i].extra.cards[0]->geometry());
        seat[i].extra.cards[0]->CardAnimation->setEndValue(QRect((seatX[i]+92/2+5)*koefW,seatY[i]*koefH,92*koefW,135*koefH));
        seat[i].extra.cards[0]->CardAnimation->setDuration(500*koefSpeed);
        seat[i].extra.cards[0]->CardAnimation->start();

    }
}
void MainWindow::Stand(int i)
{
    if (i==-7)
    {
        auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
        if (sender!=nullptr)
        {
            i = seatIdentifier[sender];                            
            if ((i>6 && seat[i-6].extra.sumCounter->value()<=9) || (i<=6 && seat[i].sumCounter->value()<=9))
            {
                TimerForCommit->stop();
                if (QMessageBox::warning(this, tr("BlackJack"),tr("Are you sure\nyou want to stand?"),QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
                {
                    TimerForCommit->start();
                    return;
                }
                TimerForCommit->start();
            }
            on_InsuranceNo_clicked();
        }
    }
    if (i<6)
    {
        if (!seat[i].stillPlay) return;
        seat[i].stillPlay = false;
        seat[i].doubleButton->hide();
        seat[i].hitButton->hide();
        seat[i].standButton->hide();
        seat[i].splitButton->hide();
        if (seat[i].extra.stillPlay)
            seat[i].horizontalSpacerLeft->changeSize(72*koefW,20);
        else
        {
            seat[i].horizontalSpacerLeft->changeSize(0,20);
            seat[i].horizontalSpacerRight->changeSize(0,20);
        }
    }
    else
    {
        if (!seat[i-6].extra.stillPlay) return;
        seat[i-6].extra.stillPlay = false;
        seat[i-6].extra.hitButton->hide();
        seat[i-6].extra.standButton->hide();
        if (seat[i-6].stillPlay)
        {
            seat[i-6].horizontalSpacerRight->changeSize(72*koefW,20);
        }
        else
        {
            seat[i-6].horizontalSpacerLeft->changeSize(0,20);
            seat[i-6].horizontalSpacerRight->changeSize(0,20);
        }
    }
    ui->lcdTimer->display(11);
    stillPlayingAmount--;
    if (stillPlayingAmount==0)
        if (isDealingEnd) CommitsEnd();

}
QQueue<int> QueueForHit;
void MainWindow::Hit(int i)
{
    if (i==-7)
    {
        auto* sender=dynamic_cast<QPushButton*>(QObject::sender());
        if (sender!=nullptr)
        {
            i = seatIdentifier[sender];
            if ((i>6 && seat[i-6].extra.sumCounter->value()>=18) || (i<=6 && seat[i].sumCounter->value()>=18))
            {
                TimerForCommit->stop();
                if (QMessageBox::warning(this, tr("BlackJack"),tr("Are you sure you want\nto get another card?"),QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
                {
                    TimerForCommit->start();
                    return;
                }
                TimerForCommit->start();
            }

            sender->setStyleSheet("border-image: url(images/hit_blocked.png);");
            sender->setDisabled(true);
            on_InsuranceNo_clicked();
        }
    }
    QueueForHit.enqueue(i);
    TimerForHit->start(500*koefSpeed);
    ui->lcdTimer->display(11);
}
void MainWindow::HitNext()
{
    if (QueueForHit.empty())
    {
        TimerForHit->stop();
        if (!isDealingEnd)
        {
            ui->InsuranceYes->setDisabled(false);
            isDealingEnd = true;
            for (int i = 0;i<6;i++)
                if (seat[i].stillPlay)
                {
                    seat[i].doubleButton->show();
                    seat[i].hitButton->show();
                    seat[i].standButton->show();
                    seat[i].splitButton->show();
                    if (seat[i].cards[0]->number()!=seat[i].cards[1]->number())
                    {
                        seat[i].splitButton->setStyleSheet("border-image: url(images/split_blocked.png);");
                        seat[i].splitButton->setDisabled(true);
                    }
                }

            ui->lcdTimer->show();
            ui->lcdTimer->display(15);
            TimerForCommit->start(1000);
//            ui->CentralLabel->hide();
            CountExtraBets();
            if (stillPlayingAmount==0)
                CommitsEnd();
        }
        return;
    }
//    Card *card = new Card(rand()%1 + 13,this);
//    Card *card = new Card(rand()%2 + 50,this);
    Card *card = new Card(rand(),this);
    card->show();
    int i = QueueForHit.dequeue();
    if (i==-1)
    {        
        if (dealerCards.count()==1)
        {
            card->isOpen=false;
        }
        dealerCards.append(card);
        card->CardAnimation->setDuration(300*koefSpeed);
        int shiftUnit = (941-579) / (dealerCards.count()+1);
        if (dealerCards.count()==1)
        {
            ui->dealerSumCounter->show();
            ui->dealerSumCounter->setGeometry(QRect((579+shiftUnit-92/2-50)*koefW,5*koefH,50*koefW,50*koefH));
            if (dealerCards[0]->value() == 11)
            {
                double tempSum = 0;
                ui->InsuranceYes->setDisabled(true);
                for (int i = 0;i<6;i++)
                    if (seat[i].isSeat)
                        tempSum += RealValueSpinBox[seat[i].mainBet] / 2.;
                if (tempSum>ui->BalanceAmount->value())
                {
                    ui->CentralLabel->setText("INSURANCE BLOCKED");
                    HighlightLabel(ui->CentralLabel,true,2000);
                }
                else
                {
                    ui->CentralLabel->setText("INSURANCE?");
                    ui->InsuranceYes->show();
                    ui->InsuranceNo->show();
                    HighlightLabel(ui->CentralLabel);
                }
            }
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
        if (i<6)
        {
            seat[i].hitButton->setStyleSheet("QPushButton {border-image: url(images/hit.png);}"
                                             "QPushButton:hover{border-image: url(images/hit_hover.png);}"
                                             "QPushButton:pressed{border-image: url(images/hit_pressed.png);}");
            seat[i].hitButton->setDisabled(false);
            if (isDealingEnd)
            {
                seat[i].splitButton->setStyleSheet("border-image: url(images/split_blocked.png);");
                seat[i].splitButton->setDisabled(true);
            }
            seat[i].cards.append(card);
            card->CardAnimation->setDuration(1000*koefSpeed);
            card->CardAnimation->setStartValue(QRect((1500-92)/2*koefW,-140*koefH,92*koefW,135*koefH));
            if (seat[i].extra.isExist)
                card->CardAnimation->setEndValue(QRect((seatX[i]-92/2-5+(seat[i].cards.count()-1)*3)*koefW,(seatY[i]-(seat[i].cards.count()-1)*35)*koefH,92*koefW,135*koefH));
            else
                card->CardAnimation->setEndValue(QRect((seatX[i]+(seat[i].cards.count()-1)*15)*koefW,(seatY[i]-(seat[i].cards.count()-1)*35)*koefH,92*koefW,135*koefH));

            card->CardAnimation->start();
            RecountSum(seat[i].sumCounter,card,seat[i].cards.count(),&seat[i].aceCount);
            if (seat[i].extra.isExist)
                if (seat[i].sumCounter->value()==0)
                {
                    seat[i].sumCounter->display(21);
                    seat[i].sumCounter->setStyleSheet("background: rgb(66, 20, 20);");
                }
            if (seat[i].sumCounter->value()>=21 || seat[i].sumCounter->value()==0) Stand(i);
        }
        else
        {
            seat[i-6].extra.hitButton->setStyleSheet("QPushButton {border-image: url(images/hit.png);}"
                                                     "QPushButton:hover{border-image: url(images/hit_hover.png);}"
                                                     "QPushButton:pressed{border-image: url(images/hit_pressed.png);}");
            seat[i-6].extra.hitButton->setDisabled(false);
            seat[i-6].extra.cards.append(card);
            card->CardAnimation->setDuration(1000*koefSpeed);
            card->CardAnimation->setStartValue(QRect((1500-92)/2*koefW,-140*koefH,92*koefW,135*koefH));
            card->CardAnimation->setEndValue(QRect((seatX[i-6]+92/2+5+(seat[i-6].extra.cards.count()-1)*3)*koefW,(seatY[i-6]-(seat[i-6].extra.cards.count()-1)*35)*koefH,92*koefW,135*koefH));
            card->CardAnimation->start();
            RecountSum(seat[i-6].extra.sumCounter,card,seat[i-6].extra.cards.count(),&seat[i-6].extra.aceCount);
            if (seat[i-6].extra.sumCounter->value()==0)
            {
                seat[i-6].extra.sumCounter->display(21);
                seat[i-6].extra.sumCounter->setStyleSheet("background: rgb(66, 20, 20);");
            }
            if (seat[i-6].extra.sumCounter->value()>=21) Stand(i);
        }
}

void MainWindow::RecountSum(QLCDNumber *sumCounter, Card *card,const int cardsAmount, int *aceCounter)
{
    sumCounter->display(sumCounter->value()+card->value());
    if (card->value()==11)
    {
        (*aceCounter)++;
        sumCounter->setStyleSheet("background: rgb(127, 106, 0);");
    }

    if (sumCounter->value()>21)
    {
        if ((*aceCounter)>0)
        {
            (*aceCounter)--;
            sumCounter->display(sumCounter->value()-10);
            if ((*aceCounter)==0)
                sumCounter->setStyleSheet("background: rgb(66, 20, 20);");
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
    Hit(-1);
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
            Hit(i);
    Hit(-1);
}

void MainWindow::on_RepeatButton_clicked()
{
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            seat[i].perfectPair->setValue(qCeil(seat[i].prevBetPair));
            if (!ValueChangedByUserSlot(seat[i].perfectPair)) return;
            seat[i].mainBet->setValue(qCeil(seat[i].prevBetMain));
            if (!ValueChangedByUserSlot(seat[i].mainBet)) return;
            seat[i].triple->setValue(qCeil(seat[i].prevBetTriple));
            if (!ValueChangedByUserSlot(seat[i].triple)) return;
        }
}

void MainWindow::on_DoubleButton_clicked()
{
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            seat[i].perfectPair->setValue(seat[i].perfectPair->value()*2);
            if (!ValueChangedByUserSlot(seat[i].perfectPair)) return;
            seat[i].mainBet->setValue(seat[i].mainBet->value()*2);
            if (!ValueChangedByUserSlot(seat[i].mainBet)) return;
            seat[i].triple->setValue(seat[i].triple->value()*2);
            if (!ValueChangedByUserSlot(seat[i].triple)) return;
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
                    RealValueSpinBox[seat[i].perfectPair]*=26;
                    isPair = true;
                    seat[i].pairStatus->setText("Perfect Pair");
                }
                else
                    if (card1->suit() % 2 == card2->suit() % 2)
                    {
                        seat[i].perfectPair->setValue(seat[i].perfectPair->value()*13);
                        RealValueSpinBox[seat[i].perfectPair]*=13;
                        isPair = true;
                        seat[i].pairStatus->setText("Coloured Pair");
                    }
                    else
                    {
                        seat[i].perfectPair->setValue(seat[i].perfectPair->value()*7);
                        RealValueSpinBox[seat[i].perfectPair]*=7;
                        isPair = true;
                        seat[i].pairStatus->setText("Mixed Pair");
                    }
            }
            else
            {
                seat[i].perfectPair->setValue(0);
                RealValueSpinBox[seat[i].perfectPair] = 0;
            }

            if (card1->number()>card2->number()) qSwap(card1,card2);
            if (card1->number()>card3->number()) qSwap(card1,card3);
            if (card2->number()>card3->number()) qSwap(card2,card3);

            if (card1->number()==card2->number() && card2->number()==card3->number())
            {
                if (card1->suit()==card2->suit() && card2->suit()==card3->suit())
                {
                    seat[i].triple->setValue(seat[i].triple->value()*101);
                    RealValueSpinBox[seat[i].triple]*=101;
                    isTriple = true;
                    seat[i].tripleStatus->setText("Suited Trips");
                }
                else
                {
                    seat[i].triple->setValue(seat[i].triple->value()*31);
                    RealValueSpinBox[seat[i].triple]*=31;
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
                        RealValueSpinBox[seat[i].triple]*=41;
                        isTriple = true;
                        seat[i].tripleStatus->setText("Straight Flush");
                    }
                    else
                    {
                        seat[i].triple->setValue(seat[i].triple->value()*11);
                        RealValueSpinBox[seat[i].triple]*=11;
                        isTriple = true;
                        seat[i].tripleStatus->setText("Straight");
                    }
                }
                else
                    if (card1->suit()==card2->suit() && card2->suit()==card3->suit())
                    {
                        seat[i].triple->setValue(seat[i].triple->value()*6);
                        RealValueSpinBox[seat[i].triple]*=6;
                        isTriple = true;
                        seat[i].tripleStatus->setText("Flush");
                    }
                    else
                    {
                        seat[i].triple->setValue(0);
                        RealValueSpinBox[seat[i].triple] = 0;
                    }

            if (seat[i].sumCounter->value()==0)
            {
                isPair = true;
                seat[i].pairStatus->setText("BlackJack");
            }

            if (isPair)
            {
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
                    HighlightLabel(seat[i].tripleStatus,true,2000);

            }

        }
}

void MainWindow::NextSecond()
{

    ui->lcdTimer->display(ui->lcdTimer->value()-1);
    if (ui->lcdTimer->value()==0)
    {
        for (int i = 0;i<12;i++)
            Stand(i);
    }


}

int stage;
void MainWindow::CommitsEnd()
{
    ui->CentralLabel->hide();
    ui->InsuranceYes->hide();
    ui->InsuranceNo->hide();
    ui->lcdTimer->hide();
    TimerForCommit->stop();
    stage = 0;
    OpenDealerCardsProcess();
}


void MainWindow::OpenDealerCardsProcess()
{
    if (stage == 0)
    {
        dealerCards[1]->CardAnimation->setStartValue(dealerCards[1]->geometry());
        dealerCards[1]->CardAnimation->setEndValue(dealerCards[1]->geometry().adjusted(92*koefW,0,0,0));
        dealerCards[1]->CardAnimation->start();
        connect(dealerCards[1]->CardAnimation,SIGNAL(finished()),this,SLOT(OpenDealerCardsProcess()));
    }
    else
        if (stage == 1)
        {
            dealerCards[1]->isOpen = true;
            dealerCards[1]->CardAnimation->setStartValue(dealerCards[1]->geometry());
            dealerCards[1]->CardAnimation->setEndValue(dealerCards[1]->geometry().adjusted(0,0,92*koefW,0));
            dealerCards[1]->CardAnimation->start();
        }
        else
            if (stage == 2)
            {
                RecountSum(ui->dealerSumCounter,dealerCards[1],-1,&dealerAceCount);
                dealerCards[1]->CardAnimation->setStartValue(dealerCards[1]->geometry());
                dealerCards[1]->CardAnimation->setEndValue(dealerCards[1]->geometry().adjusted(-92*koefW,0,-92*koefW,0));
                dealerCards[1]->CardAnimation->start();
            }
            else
            {
                if (ui->dealerSumCounter->value()<17)
                {
                    if (QueueForHit.isEmpty())
                        Hit(-1);
                }
                else
                {
                    disconnect(dealerCards[1]->CardAnimation,SIGNAL(finished()),this,SLOT(OpenDealerCardsProcess()));
                    QTimer *timer = new QTimer();
                    timer->setSingleShot(true);
                    connect(timer,SIGNAL(timeout()),this,SLOT(ResultStage()));
                    timer->start(800*koefSpeed);
                }
            }
    stage++;
}
//TODO fix split and right hit crush
void MainWindow::ResultStage()   //TODO result images
{
    double TotalWin = 0;
    for (int i = 0;i<6;i++)
    {
        if (seat[i].extra.isExist)
        {
            double delta = 0;
            if (seat[i].sumCounter->value()>21)
            {
                seat[i].sumCounter->setStyleSheet("border-image: url(images/bust.png);");
            }
            else
                if (ui->dealerSumCounter->value()>21 || seat[i].sumCounter->value() > ui->dealerSumCounter->value())
                {
                    delta+=seat[i].mainBet->value();
                    seat[i].sumCounter->setStyleSheet("border-image: url(images/win.png);");
                }
                else
                    if (seat[i].sumCounter->value()==ui->dealerSumCounter->value())
                    {
                        delta+=seat[i].mainBet->value()/2;
                        seat[i].sumCounter->setStyleSheet("border-image: url(images/push.png);");
                    }
                    else
                    {
                        seat[i].sumCounter->setStyleSheet("border-image: url(images/lose.png);");
                    }


            if (seat[i].extra.sumCounter->value()>21)
            {
                seat[i].extra.sumCounter->setStyleSheet("border-image: url(images/bust.png);");
            }
            else
                if (ui->dealerSumCounter->value()>21 || seat[i].extra.sumCounter->value() > ui->dealerSumCounter->value())
                {
                    delta+=seat[i].mainBet->value();
                    seat[i].extra.sumCounter->setStyleSheet("border-image: url(images/win.png);");
                }
                else
                    if (seat[i].extra.sumCounter->value()==ui->dealerSumCounter->value())
                    {
                        delta+=seat[i].mainBet->value()/2;
                        seat[i].extra.sumCounter->setStyleSheet("border-image: url(images/push.png);");
                    }
                    else
                    {
                        seat[i].extra.sumCounter->setStyleSheet("border-image: url(images/lose.png);");
                    }

            seat[i].mainBet->setValue(delta);
            RealValueSpinBox[seat[i].mainBet] = delta;
            seat[i].extra.sumCounter->display("");
        }
        else
            if (seat[i].sumCounter->value()==0)
            {
                seat[i].mainBet->setValue(seat[i].mainBet->value()*5/2.);
                RealValueSpinBox[seat[i].mainBet] *= 5/2.;
            }
            else
                if (!isInsurance || dealerCards.count()>2 || ui->dealerSumCounter->value()!=21)
                {
                    if (isInsurance)
                    {
                        RealValueSpinBox[seat[i].mainBet] *= 2/3.;
                        seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet]);
                    }
                    if (seat[i].sumCounter->value()>21)
                    {
                        seat[i].mainBet->setValue(0);
                        RealValueSpinBox[seat[i].mainBet] = 0;
                        seat[i].sumCounter->setStyleSheet("border-image: url(images/bust.png);");
                    }
                    else
                        if (ui->dealerSumCounter->value()>21 || seat[i].sumCounter->value() > ui->dealerSumCounter->value())
                        {
                            seat[i].mainBet->setValue(seat[i].mainBet->value()*2);
                            RealValueSpinBox[seat[i].mainBet] *= 2;
                            seat[i].sumCounter->setStyleSheet("border-image: url(images/win.png);");
                        }
                        else
                            if (seat[i].sumCounter->value()==ui->dealerSumCounter->value())
                            {
                                seat[i].sumCounter->setStyleSheet("border-image: url(images/push.png);");
                            }
                            else
                            {
                                seat[i].mainBet->setValue(0);
                                RealValueSpinBox[seat[i].mainBet] = 0;
                                seat[i].sumCounter->setStyleSheet("border-image: url(images/lose.png);");
                            }
                }
                else
                {
                    seat[i].sumCounter->setStyleSheet("border-image: url(images/insurance.png);");
                }

        TotalWin+=RealValueSpinBox[seat[i].perfectPair];
        TotalWin+=RealValueSpinBox[seat[i].mainBet];
        TotalWin+=RealValueSpinBox[seat[i].triple];
        seat[i].sumCounter->display("");
    }

    isInsurance = false;

    if (TotalWin > ui->TotalBetAmount->value())
    {
        ui->CentralLabel->setText("You win: " + QString::number(TotalWin) + ui->CurrentCurrency->text());
        ui->DeltaBalanceStatus->setText("+" + QString::number(TotalWin-ui->TotalBetAmount->value()) + ui->CurrentCurrency->text());
    }
    else
    {
        if (TotalWin==0)
            ui->CentralLabel->setText("Dealer wins");
        else
            ui->CentralLabel->setText("Push: " + QString::number(TotalWin) + ui->CurrentCurrency->text());

        ui->DeltaBalanceStatus->setText(QString::number(TotalWin-ui->TotalBetAmount->value()) + ui->CurrentCurrency->text());
        if (TotalWin == ui->TotalBetAmount->value())
            ui->DeltaBalanceStatus->setText("+0" + ui->CurrentCurrency->text());
    }
    HighlightLabel(ui->CentralLabel,true,4500);
    QTimer *timer1 = new QTimer();
    timer1->setSingleShot(true);
    connect(timer1,SIGNAL(timeout()),this,SLOT(gatheringCards()));
    timer1->start(1500*koefSpeed);
}
int amountX,amountY;

int i = -1, j = 0;
double speed;
Card *prevCard = nullptr,*thisCard = nullptr;
void MainWindow::gatheringCards()
{
    i = -1;
    j = 0;
    prevCard = nullptr;
    thisCard = nullptr;
    int dx = 0,dy = 0,prevX = -1,prevY = -1;
    for (auto &card:dealerCards)
    {
        if (!(prevX == -1 && prevY == -1))
        {
            dx+=qAbs(prevX - card->pos().x());
            dy+=qAbs(prevY - card->pos().y());
        }
        prevX = card->pos().x();
        prevY = card->pos().y();
    }

    for (int i = 0;i<6;i++)
        if (seat[i].isSeat)
        {
            dx+=92*koefW;
            for (auto &card:seat[i].cards)
            {
                dx+=qAbs(prevX - card->pos().x());
                dy+=qAbs(prevY - card->pos().y());
                prevX = card->pos().x();
                prevY = card->pos().y();
            }
            if (seat[i].extra.isExist)
            {
                for (auto &card:seat[i].extra.cards)
                {
                    dx+=qAbs(prevX - card->pos().x());
                    dy+=qAbs(prevY - card->pos().y());
                    prevX = card->pos().x();
                    prevY = card->pos().y();
                }
            }
        }
    amountX = dx/koefW;
    amountY = dy/koefH;
    speed = 3500./(amountX+amountY);
    if (speed>1.5) speed = 1.5;
    speed*=koefSpeed;
    NextIterationGathering();

}
void MainWindow::NextIterationGathering()
{
    if (prevCard!=nullptr)
    {
        prevCard->hide();
        prevCard->deleteLater();
    }
    prevCard = thisCard;
    bool isOtherDeck = false,dealer = false;
    if (i==-1)
    {
        dealerBlockCardAnimation = true;
        if (j>=dealerCards.count())
        {
            dealerCards.clear();
            dealerBlockCardAnimation = false;
            i++;
            j = 0;
            isOtherDeck = true;
            dealer = true;
        }
        else
        {
            thisCard = dealerCards[j];
            j++;
            if (prevCard==nullptr)
            {
                prevCard = thisCard;
                thisCard = dealerCards[j];
                j++;
            }
        }
    }

    while (i!=-1)
    {

        while (i<6 && !seat[i].isSeat)
        {
            i++;
            j = 0;
            isOtherDeck = true;
        }

        if (i>=6)
        {
            stage = 0;
            thisCard = prevCard;
            CloseCardProcess();
            return;
        }

        if (j>=seat[i].cards.count())
        {
            if (!seat[i].extra.isExist || j-seat[i].cards.count()>=seat[i].extra.cards.count())
            {
                seat[i].cards.clear();
                seat[i].extra.cards.clear();
                seat[i].blockCardAnimation = false;
                seat[i].extra.blockCardAnimation = false;
                i++;
                j = 0;
                isOtherDeck = true;
            }
            else
            {
                seat[i].extra.blockCardAnimation = true;
                thisCard = seat[i].extra.cards[j-seat[i].cards.count()];
                j++;
                break;
            }

        }
        else
        {
            seat[i].blockCardAnimation = true;
            thisCard = seat[i].cards[j];
            j++;
            break;
        }
    }

    prevCard->CardAnimation->setStartValue(prevCard->geometry());
    prevCard->CardAnimation->setEndValue(thisCard->geometry());
//    prevCard->CardAnimation->setEasingCurve(QEasingCurve::Linear);
    if (isOtherDeck)
    {
        int dx = qAbs(thisCard->x() - prevCard->x())/koefW + 92;
        int dy = qAbs(thisCard->y() - prevCard->y())/koefH;
        prevCard->CardAnimation->setDuration(speed*(dx+dy));
        if (dealer)
        {
            double lastX = thisCard->x()/koefW - 92,lastY = thisCard->y()/koefH,time = 0;
            double n = 20,x = prevCard->x()/koefW,y = prevCard->y()/koefH, sqrA = (lastX - x) * (lastX - x), sqrB = (lastY - y) * (lastY - y);    //TODO should use polar coordinates for ellipse;
            for (int i = 1;i<n;i++)
            {
                time += (dx - 92. + dy)/(dx+dy) / n;
                x += (lastX - (double)prevCard->x()/koefW) / n;
                y = lastY - qSqrt(sqrB * (1 - (double)(x - prevCard->x()/koefW) * (x - prevCard->x()/koefW) / sqrA));
                prevCard->CardAnimation->setKeyValueAt(time,QRect(QPoint(x*koefW,y*koefH),QSize(thisCard->size())));
            }
          //  prevCard->CardAnimation->setEasingCurve(QEasingCurve::OutQuad);
        }

        prevCard->CardAnimation->setKeyValueAt((dx - 92. + dy)/(dx+dy),thisCard->geometry().adjusted(-92*koefW,0,-92*koefW,0));

    }
    else
    {
        int dx = qAbs(thisCard->x() - prevCard->x())/koefW;
        int dy = qAbs(thisCard->y() - prevCard->y())/koefH;
        prevCard->CardAnimation->setDuration(speed*(dx+dy));
    }
    connect(prevCard->CardAnimation,SIGNAL(finished()),this,SLOT(NextIterationGathering()));
    prevCard->CardAnimation->start();

}

void MainWindow::CloseCardProcess()
{
    if (stage == 0)
    {

        thisCard->CardAnimation->setStartValue(thisCard->geometry());
        thisCard->CardAnimation->setEndValue(thisCard->geometry().adjusted(0,0,-92*koefW,0));
        thisCard->CardAnimation->setDuration(300*koefSpeed);
        thisCard->CardAnimation->start();
        connect(thisCard->CardAnimation,SIGNAL(finished()),this,SLOT(CloseCardProcess()));
    }
    else
        if (stage == 1)
        {
            thisCard->isOpen = false;
            thisCard->CardAnimation->setStartValue(thisCard->geometry());
            thisCard->CardAnimation->setEndValue(thisCard->geometry().adjusted(-92*koefW,0,0,0));
            thisCard->CardAnimation->start();
        }
        else
            if (stage == 2)
            {
                HighlightLabel(ui->DeltaBalanceStatus,true,3000);
                thisCard->CardAnimation->setStartValue(thisCard->geometry());
                thisCard->CardAnimation->setEndValue(QRect(QPoint(10*koefW,10*koefH),thisCard->size()));
                thisCard->CardAnimation->setDuration(speed * (qAbs(thisCard->x()/koefW - 10) + qAbs(thisCard->y()/koefH - 10)) / 2);
                thisCard->CardAnimation->start();
            }
            else
            {
                if (stashCard!=nullptr)
                {
                    stashCard->hide();
                    stashCard->deleteLater();
                }
                stashCard = thisCard;
                disconnect(thisCard->CardAnimation,SIGNAL(finished()),this,SLOT(CloseCardProcess()));
                NewGamePreparation();
            }

    stage++;
}
void MainWindow::NewGamePreparation()
{
    for (int i = 0;i<6;i++)
    {
        for (auto &card:seat[i].cards)
        {
            card->deleteLater();
            card->hide();
        }

        for (auto &card:seat[i].extra.cards)
        {
            card->deleteLater();
            card->hide();
        }

        seat[i].perfectPair->setValue(0);
        ValueChangedByUserSlot(seat[i].perfectPair);
        seat[i].mainBet->setValue(0);
        ValueChangedByUserSlot(seat[i].mainBet);
        seat[i].triple->setValue(0);
        ValueChangedByUserSlot(seat[i].triple);

        seat[i].extra.isExist=false;
        seat[i].extra.aceCount = 0;
        seat[i].aceCount = 0;
        seat[i].extra.sumCounter->setStyleSheet("background: rgb(66, 20, 20);");
        seat[i].extra.sumCounter->display(0);
        seat[i].extra.sumCounter->hide();
        seat[i].sumCounter->setStyleSheet("background: rgb(66, 20, 20);");
        seat[i].sumCounter->display(0);
        seat[i].sumCounter->hide();
        seat[i].extra.horizontalSpacer->changeSize(0,0);
        seat[i].closeButton->show();
        seat[i].horizontalSpacerLeft->changeSize(0,0);
        seat[i].horizontalSpacerRight->changeSize(0,0);

        seat[i].perfectPair->setDisabled(false);
        seat[i].mainBet->setDisabled(false);
        seat[i].triple->setDisabled(false);

        seat[i].splitButton->setDisabled(false);
        seat[i].splitButton->setStyleSheet("QPushButton {border-image: url(images/split.png);}"
                                           "QPushButton:hover{border-image: url(images/split_hover.png);}"
                                           "QPushButton:pressed{border-image: url(images/split_pressed.png);}");
        seat[i].doubleButton->setDisabled(false);
        seat[i].doubleButton->setStyleSheet("QPushButton {border-image: url(images/double.png);}"
                                            "QPushButton:hover{border-image: url(images/double_hover.png);}"
                                            "QPushButton:pressed{border-image: url(images/double_pressed.png);}");

        seat[i].gridLayoutLeft->addWidget(seat[i].doubleButton,0,0,1,1);
        seat[i].gridLayoutLeft->addWidget(seat[i].hitButton,0,1,1,1);
        seat[i].gridLayoutRight->addWidget(seat[i].standButton,0,0,1,1);
        seat[i].gridLayoutRight->addWidget(seat[i].splitButton,0,1,1,1);
    }
    ui->TotalBetAmount->display(0);
    ui->CentralLabel->setText("TAKE A SEAT");
    for (auto &card:dealerCards)
    {
        card->deleteLater();
        card->hide();
    }
    dealerAceCount=0;
    isDealingEnd = false;
    ui->dealerSumCounter->display(0);
    ui->dealerSumCounter->hide();
    tick = 0;
    isDealingEnd = false;
    ui->comboBoxCurrency->setDisabled(false);
    ui->dealerSumCounter->setStyleSheet("background: rgb(66, 20, 20);");
    isInsurance = false;
    if (ui->BalanceAmount->value() < minimumBet*downloader->course->koef[downloader->course->ind[ui->comboBoxCurrency->currentIndex()]])
    {
        for (int i = 0;i<6;i++)
            closeFunc(i);


        for (int i = 0;i<6;i++)
        {
            seat[i].multiSeat->setStyleSheet("border-image: url(images/multi_seat_blocked.png);");
            seat[i].multiSeat->setDisabled(true);
        }
        ui->CentralLabel->setText("YOUR BALANCE IS TOO LOW TO PLAY");
        HighlightLabel(ui->CentralLabel);
    }
}

void MainWindow::on_InsuranceNo_clicked()
{
    ui->CentralLabel->hide();
    ui->InsuranceYes->hide();
    ui->InsuranceNo->hide();
    ui->lcdTimer->display(11);
}

void MainWindow::on_InsuranceYes_clicked()
{
    isInsurance = true;

    for (int i = 0;i<6;i++)
        if (seat[i].stillPlay)
        {
            changeColor(seat[i].mainBet,"QSpinBox{"
                                        "border-style: outset;"
                                        "border-color: orange;}");
            ui->TotalBetAmount->display(ui->TotalBetAmount->value() + RealValueSpinBox[seat[i].mainBet] / 2.);
            ui->BalanceAmount->display(ui->BalanceAmount->value() - RealValueSpinBox[seat[i].mainBet] / 2.);
            DeleteTrash();
            RealValueSpinBox[seat[i].mainBet] *= 3/2.;
            seat[i].mainBet->setValue(RealValueSpinBox[seat[i].mainBet] + 0.5);

            seat[i].doubleButton->setStyleSheet("border-image: url(images/double_blocked.png);");
            seat[i].doubleButton->setDisabled(true);
            seat[i].splitButton->setStyleSheet("border-image: url(images/split_blocked.png);");
            seat[i].splitButton->setDisabled(true);
        }
    ui->CentralLabel->hide();
    ui->InsuranceYes->hide();
    ui->InsuranceNo->hide();
    ui->lcdTimer->display(11);
}
void MainWindow::AfterDownloadingCurrency(bool error)
{
    if (error)
    {
        ui->AdditionalStatus->setText("FAILED TO LOAD COURSES");
        HighlightLabel(ui->AdditionalStatus,false,2500);
    }
    else
    {
        ui->AdditionalStatus->setText("COURSES LOADED");
        HighlightLabel(ui->AdditionalStatus,false,2500);
        //        for (int i = 0;)
    }
    ui->MinimumBetNumber->display(qCeil(minimumBet*downloader->course->koef[downloader->course->ind[0]]));
    for (auto &ind:downloader->course->ind)
        //        ui->comboBoxCurrency->addItem(downloader->course->symbol["RUB"]);
        ui->comboBoxCurrency->addItem(downloader->course->symbol[ind] + "     " + downloader->course->title[ind]);
    ui->CurrentCurrency->setText(downloader->course->symbol[downloader->course->ind[0]]);
    //    ui->CurrentCurrency->setText("$");

}
//TODO F1 button

void MainWindow::on_SettingsButton_clicked()
{
    if (ui->SettingsFrame->isVisible())
        ui->SettingsFrame->hide();
    else
        ui->SettingsFrame->show();
}

void MainWindow::on_AnimationSpeedSetting_valueChanged(int value)
{
    koefSpeed = 2 - (value+50)/100.;
}

void MainWindow::on_FontSizeSetting_valueChanged(int value)
{
    koefFont = (value+50)/100.;
}
