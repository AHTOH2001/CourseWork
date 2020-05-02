#include "mainwindow.h"
#include "cards.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->showFullScreen();
    this->resize(1500,900);
    this->showMaximized();
    scene = new QGraphicsScene(this);
    ui->graphicsView->setFixedSize(3002,2005);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
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

    //connect(seat[0].mainBet,SIGNAL(editingFinished()),this,SLOT(testSlot()));

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
    scene->setSceneRect(0,0,3000,2000);
    ui->comboBoxCurrency->addItems(temp);
    auto* item = new cards(nullptr,this,ui);
    item->setFlag(QGraphicsItem::ItemIsFocusable, true);
    item->setPos(0,0);
    scene->addItem(item);
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    Q_UNUSED(event);
}

void MainWindow::closeFunc(int i)
{
    seat[i].isSeat = false;
    seat[i].underSeat->hide();
    seat[i].multiSeat->show();
    isSeat = false;
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat) isSeat = true;

    ui->TotalBetAmount->display(ui->TotalBetAmount->value()-RealValueSpinBox[seat[i].perfectPair]);
    ui->BalanceAmount->display(ui->BalanceAmount->value()+RealValueSpinBox[seat[i].perfectPair]);
    seat[i].perfectPair->setValue(0);
    RealValueSpinBox[seat[i].perfectPair] = 0;

    ui->TotalBetAmount->display(ui->TotalBetAmount->value()-RealValueSpinBox[seat[i].mainBet]);
    ui->BalanceAmount->display(ui->BalanceAmount->value()+RealValueSpinBox[seat[i].mainBet]);
    seat[i].mainBet->setValue(0);
    RealValueSpinBox[seat[i].mainBet] = 0;

    ui->TotalBetAmount->display(ui->TotalBetAmount->value()-RealValueSpinBox[seat[i].triple]);
    ui->BalanceAmount->display(ui->BalanceAmount->value()+RealValueSpinBox[seat[i].triple]);
    seat[i].triple->setValue(0);
    RealValueSpinBox[seat[i].triple] = 0;

    DeleteTrash();
    scene->update();
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
    scene->update();
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
    connect(timersForColor[SpinBox], &QTimer::timeout, [=]() {
        SpinBox->setStyleSheet("");
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
                           "border-color: red;}");
    }
    else
        if (prevValueForColor[sender]<newValue)
        {

            changeColor(sender,"QSpinBox{"
                               "border-style: outset;"
                               "border-color: rgb(0,200,0);}");
        }

    prevValueForColor[sender] = newValue;
}

void MainWindow::DeleteTrash()
{
    if (ui->TotalBetAmount->value()-(int)ui->TotalBetAmount->value()<0.0000000001) ui->TotalBetAmount->display((int)ui->TotalBetAmount->value());
    if (ui->BalanceAmount->value()-(int)ui->BalanceAmount->value()<0.0000000001) ui->BalanceAmount->display((int)ui->BalanceAmount->value());
}
void MainWindow::ValueChangedByUserSlot()
{
    auto* sender=dynamic_cast<QSpinBox*>(QObject::sender());
    if (sender->value()-RealValueSpinBox[sender]>ui->BalanceAmount->value())
    {
        QMessageBox::critical(this,"Error","Not enough money");
        return;
    }
    changeColor(sender,"QSpinBox{"
                       "border-style: outset;"
                       "border-color: orange;}");
    ui->TotalBetAmount->display(ui->TotalBetAmount->value()+(sender->value()-RealValueSpinBox[sender]));
    ui->BalanceAmount->display(ui->BalanceAmount->value()-(sender->value()-RealValueSpinBox[sender]));
    DeleteTrash();
    RealValueSpinBox[sender] = sender->value();
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










