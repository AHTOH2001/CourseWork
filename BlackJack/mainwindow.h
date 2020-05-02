#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QDebug>
#include <QGraphicsItem>
#include <QGridLayout>
#include <QLabel>
#include <QTimer>
//#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QImage cardsList[52];
    bool isSeat = false,isNowPlay = false;
    const int seatX[6] = {133,357,576,815,1035,1260};
    const int seatY[6] = {513,575,624,624,575,513};
    const double course[7] = {0.920387,1,0.774524,64.96,2.2055,3.6550,7.3377};
    double totalDollars = 10000;
    QWidget *underSeat[6];
    struct grid
    {
        QSpinBox *perfectPair, *mainBet, *triple;
        QPushButton *multiSeat;
        bool isSeat = false;
    };
    grid seat[6];    

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

    void on_spinBox_1_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_9_valueChanged(int arg1);

    void on_spinBox_10_valueChanged(int arg1);

    void on_spinBox_11_valueChanged(int arg1);

    void on_spinBox_12_valueChanged(int arg1);

    void on_spinBox_13_valueChanged(int arg1);

    void on_spinBox_14_valueChanged(int arg1);

    void on_spinBox_15_valueChanged(int arg1);

    void on_spinBox_16_valueChanged(int arg1);

    void on_spinBox_17_valueChanged(int arg1);

    void on_spinBox_18_valueChanged(int arg1);

    void on_comboBoxCurrency_currentIndexChanged(int index);

    void testSlot();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timers[18];
    void paintEvent(QPaintEvent *event);
    void closeFunc(int i);
    void multiSeatFunc(int i);
    void valueChangedFunc(int i,int j,int newValue);
    void changeColor(QSpinBox *SpinBox,QString color);



};
#endif // MAINWINDOW_H
