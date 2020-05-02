/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *Exit;
    QWidget *gridLayoutWidget_14;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_28;
    QGridLayout *gridLayout_15;
    QSpinBox *spinBox_6;
    QLabel *label_10;
    QGridLayout *gridLayout_13;
    QLabel *label_8;
    QSpinBox *spinBox_4;
    QPushButton *closeButton_2;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_14;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *spinBox_5;
    QSpacerItem *horizontalSpacer_10;
    QWidget *gridLayoutWidget_15;
    QGridLayout *gridLayout_3;
    QPushButton *closeButton_3;
    QGridLayout *gridLayout_18;
    QSpinBox *spinBox_9;
    QLabel *label_13;
    QGridLayout *gridLayout_16;
    QLabel *label_11;
    QSpinBox *spinBox_7;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_12;
    QSpinBox *spinBox_8;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_25;
    QWidget *gridLayoutWidget_16;
    QGridLayout *gridLayout_4;
    QPushButton *closeButton_4;
    QGridLayout *gridLayout_21;
    QSpinBox *spinBox_12;
    QLabel *label_16;
    QGridLayout *gridLayout_19;
    QLabel *label_14;
    QSpinBox *spinBox_10;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout_20;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *spinBox_11;
    QSpacerItem *horizontalSpacer_26;
    QWidget *gridLayoutWidget_17;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_23;
    QLabel *label_17;
    QSpinBox *spinBox_13;
    QGridLayout *gridLayout_25;
    QSpinBox *spinBox_15;
    QLabel *label_19;
    QGridLayout *gridLayout_24;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_19;
    QSpinBox *spinBox_14;
    QPushButton *closeButton_5;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_24;
    QWidget *gridLayoutWidget_18;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_27;
    QLabel *label_20;
    QSpinBox *spinBox_16;
    QSpacerItem *horizontalSpacer_20;
    QGridLayout *gridLayout_28;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_22;
    QSpinBox *spinBox_17;
    QGridLayout *gridLayout_29;
    QSpinBox *spinBox_18;
    QLabel *label_22;
    QPushButton *closeButton_6;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *multiSeatButton_1;
    QPushButton *multiSeatButton_2;
    QPushButton *multiSeatButton_3;
    QPushButton *multiSeatButton_4;
    QPushButton *multiSeatButton_5;
    QPushButton *multiSeatButton_6;
    QFontComboBox *fontComboBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_balance;
    QLabel *labelBalance;
    QLCDNumber *BalanceAmount;
    QComboBox *comboBoxCurrency;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_1;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_11;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QGridLayout *gridLayout_10;
    QLabel *label_5;
    QSpinBox *spinBox_1;
    QPushButton *closeButton_1;
    QGridLayout *gridLayout_49;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_balance_2;
    QLCDNumber *TotalBetAmount;
    QLabel *labelTotalBet;
    QLabel *CentralLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2132, 1549);
        MainWindow->setStyleSheet(QLatin1String(" QSpinBox {\n"
"	 background: green;\n"
"	 border-style: solid;\n"
"     border-width: 2px;\n"
"	 border-color: green;\n"
" }\n"
"\n"
" QSpinBox::up-button {\n"
"     subcontrol-origin: border;\n"
"     subcontrol-position: top right;\n"
"\n"
"     width: 16px;\n"
"     border-image: url(images/spin/spinup.png) 1;\n"
" }\n"
"\n"
" QSpinBox::up-button:hover {\n"
"     border-image: url(images/spin/spinup_hover.png) 1;\n"
" }\n"
"\n"
" QSpinBox::up-button:pressed {\n"
"     border-image: url(images/spin/spinup_pressed.png) 1;\n"
" }\n"
"\n"
" QSpinBox::down-button {\n"
"     subcontrol-origin: border;\n"
"     subcontrol-position: bottom right; \n"
"\n"
"     width: 16px;\n"
"     border-image: url(images/spin/spindown.png) 1;\n"
" }\n"
"\n"
" QSpinBox::down-button:hover {\n"
"     border-image: url(images/spin/spindown_hover.png) 1;\n"
" }\n"
"\n"
" QSpinBox::down-button:pressed {\n"
"     border-image: url(images/spin/spindown_pressed.png) 1;\n"
" }\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1500, 900));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 1150, 93, 28));
        pushButton->setMaximumSize(QSize(93, 16777215));
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"                background-color: rgb(235, 28, 28);\n"
"                border-radius: 4px transparent;\n"
"                border-bottom: 3px transparent;\n"
"                border-right: 2px transparent;\n"
"                border-left: 2px transparent;}\n"
"				QPushButton:pressed  {\n"
"                background-color: rgb(255, 255, 0);\n"
"              }\n"
"\n"
""));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(1890, 30, 25, 25));
        Exit->setStyleSheet(QLatin1String("QPushButton{\n"
"                background-color: rgb(235, 28, 28);\n"
"                border-radius: 4px transparent;\n"
"                border-bottom: 3px transparent;\n"
"                border-right: 2px transparent;\n"
"                border-left: 2px transparent;}\n"
"                QPushButton:pressed  {\n"
"                background-color: rgb(255,0,0); }"));
        gridLayoutWidget_14 = new QWidget(centralwidget);
        gridLayoutWidget_14->setObjectName(QStringLiteral("gridLayoutWidget_14"));
        gridLayoutWidget_14->setGeometry(QRect(320, 1030, 301, 161));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_14);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_28, 0, 3, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        spinBox_6 = new QSpinBox(gridLayoutWidget_14);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMaximum(999999999);
        spinBox_6->setSingleStep(10);

        gridLayout_15->addWidget(spinBox_6, 1, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_14);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_15->addWidget(label_10, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_15, 0, 4, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_8 = new QLabel(gridLayoutWidget_14);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_13->addWidget(label_8, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(gridLayoutWidget_14);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setStyleSheet(QStringLiteral(""));
        spinBox_4->setMaximum(999999999);
        spinBox_4->setSingleStep(10);

        gridLayout_13->addWidget(spinBox_4, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_13, 0, 0, 1, 1);

        closeButton_2 = new QPushButton(gridLayoutWidget_14);
        closeButton_2->setObjectName(QStringLiteral("closeButton_2"));
        closeButton_2->setMinimumSize(QSize(20, 20));
        closeButton_2->setMaximumSize(QSize(20, 20));
        closeButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_2->addWidget(closeButton_2, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_9 = new QLabel(gridLayoutWidget_14);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_14->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        spinBox_5 = new QSpinBox(gridLayoutWidget_14);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMaximum(999999999);
        spinBox_5->setSingleStep(10);

        gridLayout_14->addWidget(spinBox_5, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_10, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_14, 1, 0, 1, 5);

        gridLayoutWidget_15 = new QWidget(centralwidget);
        gridLayoutWidget_15->setObjectName(QStringLiteral("gridLayoutWidget_15"));
        gridLayoutWidget_15->setGeometry(QRect(630, 1040, 237, 154));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_15);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        closeButton_3 = new QPushButton(gridLayoutWidget_15);
        closeButton_3->setObjectName(QStringLiteral("closeButton_3"));
        closeButton_3->setMinimumSize(QSize(20, 20));
        closeButton_3->setMaximumSize(QSize(20, 20));
        closeButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_3->addWidget(closeButton_3, 0, 2, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        spinBox_9 = new QSpinBox(gridLayoutWidget_15);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setMaximum(999999999);
        spinBox_9->setSingleStep(10);

        gridLayout_18->addWidget(spinBox_9, 1, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_15);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_18->addWidget(label_13, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_18, 0, 4, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_11 = new QLabel(gridLayoutWidget_15);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_16->addWidget(label_11, 0, 0, 1, 1);

        spinBox_7 = new QSpinBox(gridLayoutWidget_15);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMaximum(999999999);
        spinBox_7->setSingleStep(10);

        gridLayout_16->addWidget(spinBox_7, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_16, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        spinBox_8 = new QSpinBox(gridLayoutWidget_15);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMaximum(999999999);
        spinBox_8->setSingleStep(10);

        gridLayout_17->addWidget(spinBox_8, 1, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_15);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_17->addWidget(label_12, 0, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_13, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_17, 1, 0, 1, 5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 0, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_25, 0, 3, 1, 1);

        gridLayoutWidget_16 = new QWidget(centralwidget);
        gridLayoutWidget_16->setObjectName(QStringLiteral("gridLayoutWidget_16"));
        gridLayoutWidget_16->setGeometry(QRect(880, 1040, 256, 154));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_16);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        closeButton_4 = new QPushButton(gridLayoutWidget_16);
        closeButton_4->setObjectName(QStringLiteral("closeButton_4"));
        closeButton_4->setMinimumSize(QSize(20, 20));
        closeButton_4->setMaximumSize(QSize(20, 20));
        closeButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_4->addWidget(closeButton_4, 0, 2, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        spinBox_12 = new QSpinBox(gridLayoutWidget_16);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));
        spinBox_12->setMaximum(999999999);
        spinBox_12->setSingleStep(10);

        gridLayout_21->addWidget(spinBox_12, 1, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_16);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_21->addWidget(label_16, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_21, 0, 4, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        label_14 = new QLabel(gridLayoutWidget_16);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_19->addWidget(label_14, 0, 0, 1, 1);

        spinBox_10 = new QSpinBox(gridLayoutWidget_16);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setMaximum(999999999);
        spinBox_10->setSingleStep(10);

        gridLayout_19->addWidget(spinBox_10, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_19, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_14, 0, 1, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_15, 1, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_16);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_20->addWidget(label_15, 0, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_16, 1, 0, 1, 1);

        spinBox_11 = new QSpinBox(gridLayoutWidget_16);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));
        spinBox_11->setMaximum(999999999);
        spinBox_11->setSingleStep(10);

        gridLayout_20->addWidget(spinBox_11, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_20, 1, 0, 1, 5);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_26, 0, 3, 1, 1);

        gridLayoutWidget_17 = new QWidget(centralwidget);
        gridLayoutWidget_17->setObjectName(QStringLiteral("gridLayoutWidget_17"));
        gridLayoutWidget_17->setGeometry(QRect(1160, 1010, 237, 154));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_17);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        label_17 = new QLabel(gridLayoutWidget_17);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_23->addWidget(label_17, 0, 0, 1, 1);

        spinBox_13 = new QSpinBox(gridLayoutWidget_17);
        spinBox_13->setObjectName(QStringLiteral("spinBox_13"));
        spinBox_13->setMaximum(999999999);
        spinBox_13->setSingleStep(10);

        gridLayout_23->addWidget(spinBox_13, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_23, 0, 0, 1, 1);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        spinBox_15 = new QSpinBox(gridLayoutWidget_17);
        spinBox_15->setObjectName(QStringLiteral("spinBox_15"));
        spinBox_15->setMaximum(999999999);
        spinBox_15->setSingleStep(10);

        gridLayout_25->addWidget(spinBox_15, 1, 1, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_17);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_25->addWidget(label_19, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_25, 0, 4, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_18, 1, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_17);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_24->addWidget(label_18, 0, 1, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        spinBox_14 = new QSpinBox(gridLayoutWidget_17);
        spinBox_14->setObjectName(QStringLiteral("spinBox_14"));
        spinBox_14->setMaximum(999999999);
        spinBox_14->setSingleStep(10);

        gridLayout_24->addWidget(spinBox_14, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_24, 1, 0, 1, 5);

        closeButton_5 = new QPushButton(gridLayoutWidget_17);
        closeButton_5->setObjectName(QStringLiteral("closeButton_5"));
        closeButton_5->setMinimumSize(QSize(20, 20));
        closeButton_5->setMaximumSize(QSize(20, 20));
        closeButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_5->addWidget(closeButton_5, 0, 2, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_17, 0, 1, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_24, 0, 3, 1, 1);

        gridLayoutWidget_18 = new QWidget(centralwidget);
        gridLayoutWidget_18->setObjectName(QStringLiteral("gridLayoutWidget_18"));
        gridLayoutWidget_18->setGeometry(QRect(1220, 1190, 249, 154));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_18);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_27 = new QGridLayout();
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        label_20 = new QLabel(gridLayoutWidget_18);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_27->addWidget(label_20, 0, 0, 1, 1);

        spinBox_16 = new QSpinBox(gridLayoutWidget_18);
        spinBox_16->setObjectName(QStringLiteral("spinBox_16"));
        spinBox_16->setMaximum(999999999);
        spinBox_16->setSingleStep(10);

        gridLayout_27->addWidget(spinBox_16, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_27, 0, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_20, 0, 1, 1, 1);

        gridLayout_28 = new QGridLayout();
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_21, 1, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_18);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_28->addWidget(label_21, 0, 1, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_22, 1, 0, 1, 1);

        spinBox_17 = new QSpinBox(gridLayoutWidget_18);
        spinBox_17->setObjectName(QStringLiteral("spinBox_17"));
        spinBox_17->setMaximum(999999999);
        spinBox_17->setSingleStep(10);

        gridLayout_28->addWidget(spinBox_17, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_28, 1, 0, 1, 5);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        spinBox_18 = new QSpinBox(gridLayoutWidget_18);
        spinBox_18->setObjectName(QStringLiteral("spinBox_18"));
        spinBox_18->setMaximum(999999999);
        spinBox_18->setSingleStep(10);

        gridLayout_29->addWidget(spinBox_18, 1, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_18);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}"));

        gridLayout_29->addWidget(label_22, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_29, 0, 4, 1, 1);

        closeButton_6 = new QPushButton(gridLayoutWidget_18);
        closeButton_6->setObjectName(QStringLiteral("closeButton_6"));
        closeButton_6->setMinimumSize(QSize(20, 20));
        closeButton_6->setMaximumSize(QSize(20, 20));
        closeButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_6->addWidget(closeButton_6, 0, 2, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_27, 0, 3, 1, 1);

        multiSeatButton_1 = new QPushButton(centralwidget);
        multiSeatButton_1->setObjectName(QStringLiteral("multiSeatButton_1"));
        multiSeatButton_1->setGeometry(QRect(1400, 1020, 141, 191));
        multiSeatButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        multiSeatButton_2 = new QPushButton(centralwidget);
        multiSeatButton_2->setObjectName(QStringLiteral("multiSeatButton_2"));
        multiSeatButton_2->setGeometry(QRect(1430, 1050, 141, 191));
        multiSeatButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        multiSeatButton_3 = new QPushButton(centralwidget);
        multiSeatButton_3->setObjectName(QStringLiteral("multiSeatButton_3"));
        multiSeatButton_3->setGeometry(QRect(1560, 1020, 141, 191));
        multiSeatButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        multiSeatButton_4 = new QPushButton(centralwidget);
        multiSeatButton_4->setObjectName(QStringLiteral("multiSeatButton_4"));
        multiSeatButton_4->setGeometry(QRect(1620, 1070, 141, 191));
        multiSeatButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        multiSeatButton_5 = new QPushButton(centralwidget);
        multiSeatButton_5->setObjectName(QStringLiteral("multiSeatButton_5"));
        multiSeatButton_5->setGeometry(QRect(1750, 1070, 141, 191));
        multiSeatButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        multiSeatButton_6 = new QPushButton(centralwidget);
        multiSeatButton_6->setObjectName(QStringLiteral("multiSeatButton_6"));
        multiSeatButton_6->setGeometry(QRect(1870, 1050, 141, 191));
        multiSeatButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"             border-image: url(images/multi_seat.png);\n"
"         }\n"
"QPushButton:hover{\n"
"		border-image: url(images/multi_seat_hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"		border-image: url(images/multi_seat_pressed.png);\n"
"}"));
        fontComboBox = new QFontComboBox(centralwidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(490, 1210, 226, 22));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 900, 251, 111));
        gridLayout_balance = new QGridLayout(gridLayoutWidget);
        gridLayout_balance->setObjectName(QStringLiteral("gridLayout_balance"));
        gridLayout_balance->setContentsMargins(0, 0, 0, 0);
        labelBalance = new QLabel(gridLayoutWidget);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy1);
        labelBalance->setStyleSheet(QLatin1String("QLabel{color: rgb(205, 200, 0);\n"
"}\n"
""));
        labelBalance->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_balance->addWidget(labelBalance, 0, 0, 1, 1);

        BalanceAmount = new QLCDNumber(gridLayoutWidget);
        BalanceAmount->setObjectName(QStringLiteral("BalanceAmount"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BalanceAmount->sizePolicy().hasHeightForWidth());
        BalanceAmount->setSizePolicy(sizePolicy2);
        BalanceAmount->setStyleSheet(QLatin1String("     border: 2px inset green;\n"
"     border-radius: 10px;\n"
"     padding: 2px;\n"
"	 color: yellow;\n"
""));
        BalanceAmount->setSmallDecimalPoint(true);
        BalanceAmount->setDigitCount(6);
        BalanceAmount->setProperty("value", QVariant(10000));
        BalanceAmount->setProperty("intValue", QVariant(10000));

        gridLayout_balance->addWidget(BalanceAmount, 1, 0, 1, 1);

        comboBoxCurrency = new QComboBox(gridLayoutWidget);
        comboBoxCurrency->setObjectName(QStringLiteral("comboBoxCurrency"));
        comboBoxCurrency->setEnabled(true);
        comboBoxCurrency->setMinimumSize(QSize(80, 65));
        comboBoxCurrency->setMaximumSize(QSize(80, 65));
        comboBoxCurrency->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"     border: 2px inset green;\n"
"     border-radius: 10px;\n"
"     padding: 0px;\n"
"	 color: rgb(205, 200, 0);\n"
" }\n"
"\n"
" QComboBox:!editable, QComboBox::drop-down:editable {\n"
"	background: rgb(0,115,57);\n"
" }\n"
"\n"
" /* QComboBox \320\277\320\276\320\273\321\203\321\207\320\260\320\265\321\202 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \"on\" \320\272\320\276\320\263\320\264\320\260 \320\262\321\213\320\277\320\260\320\264\320\260\321\216\321\211\320\270\320\271 \321\201\320\277\320\270\321\201\320\276\320\272 \321\200\320\260\321\201\320\272\321\200\321\213\321\202 */\n"
" QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"     background: green;\n"
" }\n"
"\n"
" QComboBox::drop-down {\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 1px;\n"
"     border-left-color: green;\n"
"     border-left-style: solid; /* \321\202\320\276\320\273\321\214\320\272\320\276 \320\276\320\264\320\275\320\260 \320\273\320\270\320\275\320\270\321\217"
                        " */\n"
" }\n"
"\n"
" QComboBox::down-arrow {\n"
"	width: 16;\n"
"     top: 1px;\n"
"     left: 1px;\n"
"     image: url(images/spin/spinup.png);\n"
" }\n"
"\n"
""));

        gridLayout_balance->addWidget(comboBoxCurrency, 1, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 1010, 241, 131));
        gridLayout_1 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer_23, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_1->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_11->addWidget(label_6, 0, 1, 1, 1);

        spinBox_3 = new QSpinBox(gridLayoutWidget_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setStyleSheet(QStringLiteral(""));
        spinBox_3->setMaximum(999999999);
        spinBox_3->setSingleStep(10);

        gridLayout_11->addWidget(spinBox_3, 1, 1, 1, 1);


        gridLayout_1->addLayout(gridLayout_11, 0, 4, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"}\n"
""));

        gridLayout_10->addWidget(label_5, 0, 0, 1, 1);

        spinBox_1 = new QSpinBox(gridLayoutWidget_3);
        spinBox_1->setObjectName(QStringLiteral("spinBox_1"));
        spinBox_1->setStyleSheet(QStringLiteral(""));
        spinBox_1->setMaximum(999999999);
        spinBox_1->setSingleStep(10);

        gridLayout_10->addWidget(spinBox_1, 1, 0, 1, 1);


        gridLayout_1->addLayout(gridLayout_10, 0, 0, 1, 1);

        closeButton_1 = new QPushButton(gridLayoutWidget_3);
        closeButton_1->setObjectName(QStringLiteral("closeButton_1"));
        closeButton_1->setMinimumSize(QSize(20, 20));
        closeButton_1->setMaximumSize(QSize(20, 20));
        closeButton_1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"                background-color: rgb(235, 28, 28);\n"
"}\n"
"QPushButton:pressed  \n"
"{\n"
"                background-color: rgb(190, 0, 0);\n"
"}\n"
"\n"
""));

        gridLayout_1->addWidget(closeButton_1, 0, 2, 1, 1);

        gridLayout_49 = new QGridLayout();
        gridLayout_49->setObjectName(QStringLiteral("gridLayout_49"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_49->addItem(horizontalSpacer_6, 1, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_49->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(999999999);
        spinBox_2->setSingleStep(10);

        gridLayout_49->addWidget(spinBox_2, 1, 3, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setStyleSheet(QLatin1String("QLabel{color:white;\n"
"	font: 87 8pt \"Arial Black\";\n"
"}\n"
""));

        gridLayout_49->addWidget(label_7, 0, 3, 1, 1);


        gridLayout_1->addLayout(gridLayout_49, 2, 0, 1, 5);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(1550, 890, 161, 111));
        gridLayout_balance_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_balance_2->setObjectName(QStringLiteral("gridLayout_balance_2"));
        gridLayout_balance_2->setContentsMargins(0, 0, 0, 0);
        TotalBetAmount = new QLCDNumber(gridLayoutWidget_2);
        TotalBetAmount->setObjectName(QStringLiteral("TotalBetAmount"));
        sizePolicy2.setHeightForWidth(TotalBetAmount->sizePolicy().hasHeightForWidth());
        TotalBetAmount->setSizePolicy(sizePolicy2);
        TotalBetAmount->setStyleSheet(QLatin1String("     border: 2px inset green;\n"
"     border-radius: 10px;\n"
"     padding: 2px;\n"
"	 color: yellow;\n"
""));
        TotalBetAmount->setDigitCount(6);
        TotalBetAmount->setProperty("value", QVariant(0));
        TotalBetAmount->setProperty("intValue", QVariant(0));

        gridLayout_balance_2->addWidget(TotalBetAmount, 1, 0, 1, 1);

        labelTotalBet = new QLabel(gridLayoutWidget_2);
        labelTotalBet->setObjectName(QStringLiteral("labelTotalBet"));
        sizePolicy1.setHeightForWidth(labelTotalBet->sizePolicy().hasHeightForWidth());
        labelTotalBet->setSizePolicy(sizePolicy1);
        labelTotalBet->setStyleSheet(QLatin1String("QLabel{color: rgb(205, 200, 0);\n"
"}\n"
""));
        labelTotalBet->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_balance_2->addWidget(labelTotalBet, 0, 0, 1, 1);

        CentralLabel = new QLabel(centralwidget);
        CentralLabel->setObjectName(QStringLiteral("CentralLabel"));
        CentralLabel->setGeometry(QRect(560, 910, 391, 55));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(30);
        CentralLabel->setFont(font);
        CentralLabel->setStyleSheet(QLatin1String("QLabel{\n"
"/*	background: rgb(0,115,57);*/\n"
"	color:  rgb(108,168,52);\n"
"	padding: 2px;\n"
"	border: 3px solid rgb(231,181,77);\n"
"	border-radius: 32px;\n"
"}"));
        CentralLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        CentralLabel->raise();
        pushButton->raise();
        Exit->raise();
        gridLayoutWidget_14->raise();
        gridLayoutWidget_15->raise();
        gridLayoutWidget_16->raise();
        gridLayoutWidget_17->raise();
        gridLayoutWidget_18->raise();
        multiSeatButton_1->raise();
        multiSeatButton_2->raise();
        multiSeatButton_3->raise();
        multiSeatButton_4->raise();
        multiSeatButton_5->raise();
        multiSeatButton_6->raise();
        fontComboBox->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_3->raise();
        gridLayoutWidget_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2132, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        closeButton_2->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        closeButton_3->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        closeButton_4->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        closeButton_5->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        closeButton_6->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        multiSeatButton_1->setText(QString());
        multiSeatButton_2->setText(QString());
        multiSeatButton_3->setText(QString());
        multiSeatButton_4->setText(QString());
        multiSeatButton_5->setText(QString());
        multiSeatButton_6->setText(QString());
        labelBalance->setText(QApplication::translate("MainWindow", "Balance", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "21+3:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Perfect pair:", Q_NULLPTR));
        closeButton_1->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Main bet:", Q_NULLPTR));
        labelTotalBet->setText(QApplication::translate("MainWindow", "Total bet", Q_NULLPTR));
        CentralLabel->setText(QApplication::translate("MainWindow", "TAKE A SEAT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
