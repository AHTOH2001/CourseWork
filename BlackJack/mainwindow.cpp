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
    //this->setFixedSize(1500,900);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setFixedSize(3002,2005);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    underSeat[0] = ui->gridLayoutWidget_3;
    underSeat[1] = ui->gridLayoutWidget_14;
    underSeat[2] = ui->gridLayoutWidget_15;
    underSeat[3] = ui->gridLayoutWidget_16;
    underSeat[4] = ui->gridLayoutWidget_17;
    underSeat[5] = ui->gridLayoutWidget_18;
    seat[0].perfectPair = ui->spinBox_1;
    seat[0].mainBet = ui->spinBox_2;
    seat[0].triple = ui->spinBox_3;
    seat[0].multiSeat = ui->multiSeatButton_1;
    seat[1].perfectPair = ui->spinBox_4;
    seat[1].mainBet = ui->spinBox_5;
    seat[1].triple = ui->spinBox_6;
    seat[1].multiSeat = ui->multiSeatButton_2;
    seat[2].perfectPair = ui->spinBox_7;
    seat[2].mainBet = ui->spinBox_8;
    seat[2].triple = ui->spinBox_9;
    seat[2].multiSeat = ui->multiSeatButton_3;
    seat[3].perfectPair = ui->spinBox_10;
    seat[3].mainBet = ui->spinBox_11;
    seat[3].triple = ui->spinBox_12;
    seat[3].multiSeat = ui->multiSeatButton_4;
    seat[4].perfectPair = ui->spinBox_13;
    seat[4].mainBet = ui->spinBox_14;
    seat[4].triple = ui->spinBox_15;
    seat[4].multiSeat = ui->multiSeatButton_5;
    seat[5].perfectPair = ui->spinBox_16;
    seat[5].mainBet = ui->spinBox_17;
    seat[5].triple = ui->spinBox_18;
    seat[5].multiSeat = ui->multiSeatButton_6;
    for (int i = 0;i<6;i++)
        underSeat[i]->hide();
    for (int i = 0;i<18;i++)
    {
        timers[i] = new QTimer();
        timers[i]->setSingleShot(true);
    }
    QStringList temp = {"€","$","£","₽","Br","₪","￥"};
    scene->setSceneRect(0,0,3000,2000);
    ui->comboBoxCurrency->addItems(temp);
    auto* item = new cards(0,this,ui);
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
    underSeat[i]->hide();
    seat[i].multiSeat->show();
    isSeat = false;
    for (int i = 0;i<6;i++)
        if (seat[i].isSeat==true) isSeat = true;

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

int prevValueForColor[6][3] = {{0}};
void MainWindow::valueChangedFunc(int i,int j,int newValue)
{
    QString Color;
    if (prevValueForColor[i][j]>newValue)
    {
        Color = "QSpinBox{"
                "border-style: outset;"
                "border-color: red;}";
    }
    else
        if (prevValueForColor[i][j]<newValue)
        {
            Color = "QSpinBox{"
                    "border-style: outset;"
                    "border-color: rgb(0,200,0);}";
        }
    QSpinBox *SpinBox;
    if (j==0) SpinBox = seat[i].perfectPair;
    if (j==1) SpinBox = seat[i].mainBet;
    if (j==2) SpinBox = seat[i].triple;
    SpinBox->setStyleSheet(Color);
    connect(timers[i*3+j], &QTimer::timeout, [=]() {
        SpinBox->setStyleSheet("");
    } );
    timers[i*3+j]->start(500);
    prevValueForColor[i][j] = newValue;
}
void MainWindow::on_spinBox_1_valueChanged(int arg1)
{
    valueChangedFunc(0,0,arg1);
}
void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    valueChangedFunc(0,1,arg1);
}
void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    valueChangedFunc(0,2,arg1);
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    valueChangedFunc(1,0,arg1);
}

void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    valueChangedFunc(1,1,arg1);
}

void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    valueChangedFunc(1,2,arg1);
}

void MainWindow::on_spinBox_7_valueChanged(int arg1)
{
    valueChangedFunc(2,0,arg1);
}

void MainWindow::on_spinBox_8_valueChanged(int arg1)
{
    valueChangedFunc(2,1,arg1);
}

void MainWindow::on_spinBox_9_valueChanged(int arg1)
{
    valueChangedFunc(2,2,arg1);
}

void MainWindow::on_spinBox_10_valueChanged(int arg1)
{
    valueChangedFunc(3,0,arg1);
}

void MainWindow::on_spinBox_11_valueChanged(int arg1)
{
    valueChangedFunc(3,1,arg1);
}

void MainWindow::on_spinBox_12_valueChanged(int arg1)
{
    valueChangedFunc(3,2,arg1);
}

void MainWindow::on_spinBox_13_valueChanged(int arg1)
{
    valueChangedFunc(4,0,arg1);
}

void MainWindow::on_spinBox_14_valueChanged(int arg1)
{
    valueChangedFunc(4,1,arg1);
}

void MainWindow::on_spinBox_15_valueChanged(int arg1)
{
    valueChangedFunc(4,2,arg1);
}

void MainWindow::on_spinBox_16_valueChanged(int arg1)
{
    valueChangedFunc(5,0,arg1);
}

void MainWindow::on_spinBox_17_valueChanged(int arg1)
{
    valueChangedFunc(5,1,arg1);
}

void MainWindow::on_spinBox_18_valueChanged(int arg1)
{
    valueChangedFunc(5,2,arg1);
}
