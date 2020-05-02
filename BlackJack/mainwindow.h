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
    const double course[7] = {0.920387,1,0.759763,62.84,2.2055,3.6550,7.3377};
    struct TypeForSeat
    {
        QSpinBox *perfectPair, *mainBet, *triple;
        QPushButton *multiSeat;
        bool isSeat = false;        
        QWidget *underSeat;
        QPushButton *closeButton;
    };
    TypeForSeat seat[6];

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

    void ValueChangedByUserSlot();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QMap<QSpinBox*,QTimer*> timersForColor;
    void paintEvent(QPaintEvent *event);
    void closeFunc(int i);
    void multiSeatFunc(int i);
    void changeColor(QSpinBox *SpinBox,QString color);
    QMap<QSpinBox*,double> RealValueSpinBox;
    void DeleteTrash();



};
#endif // MAINWINDOW_H
