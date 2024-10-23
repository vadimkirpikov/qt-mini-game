/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *startButton;
    QPushButton *exitButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *swapButton;
    QLabel *label;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *cell;
    QPushButton *cell_2;
    QPushButton *cell_3;
    QPushButton *cell_4;
    QPushButton *cell_5;
    QPushButton *cell_6;
    QPushButton *cell_7;
    QPushButton *cell_8;
    QPushButton *cell_9;
    QPushButton *cell_10;
    QLabel *message;
    QLabel *countOfSteps;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(762, 416);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(490, 200, 261, 161));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(verticalLayoutWidget_2);
        startButton->setObjectName("startButton");
        QFont font;
        font.setBold(true);
        startButton->setFont(font);

        verticalLayout_3->addWidget(startButton);

        exitButton = new QPushButton(verticalLayoutWidget_2);
        exitButton->setObjectName("exitButton");
        exitButton->setFont(font);

        verticalLayout_3->addWidget(exitButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leftButton = new QPushButton(verticalLayoutWidget_2);
        leftButton->setObjectName("leftButton");
        leftButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy);
        leftButton->setFont(font);

        horizontalLayout_2->addWidget(leftButton);

        rightButton = new QPushButton(verticalLayoutWidget_2);
        rightButton->setObjectName("rightButton");
        rightButton->setEnabled(false);
        sizePolicy.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy);
        rightButton->setFont(font);

        horizontalLayout_2->addWidget(rightButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        swapButton = new QPushButton(verticalLayoutWidget_2);
        swapButton->setObjectName("swapButton");
        swapButton->setEnabled(false);
        swapButton->setFont(font);

        verticalLayout_3->addWidget(swapButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 10, 251, 171));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setAcceptDrops(true);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label->setWordWrap(true);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 461, 341));
        QPalette palette;
        QBrush brush(QColor(0, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(239, 240, 241, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame->setPalette(palette);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 441, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, -1, 10, -1);
        cell = new QPushButton(verticalLayoutWidget);
        cell->setObjectName("cell");
        cell->setEnabled(false);

        horizontalLayout->addWidget(cell);

        cell_2 = new QPushButton(verticalLayoutWidget);
        cell_2->setObjectName("cell_2");
        cell_2->setEnabled(false);

        horizontalLayout->addWidget(cell_2);

        cell_3 = new QPushButton(verticalLayoutWidget);
        cell_3->setObjectName("cell_3");
        cell_3->setEnabled(false);

        horizontalLayout->addWidget(cell_3);

        cell_4 = new QPushButton(verticalLayoutWidget);
        cell_4->setObjectName("cell_4");
        cell_4->setEnabled(false);

        horizontalLayout->addWidget(cell_4);

        cell_5 = new QPushButton(verticalLayoutWidget);
        cell_5->setObjectName("cell_5");
        cell_5->setEnabled(false);

        horizontalLayout->addWidget(cell_5);

        cell_6 = new QPushButton(verticalLayoutWidget);
        cell_6->setObjectName("cell_6");
        cell_6->setEnabled(false);

        horizontalLayout->addWidget(cell_6);

        cell_7 = new QPushButton(verticalLayoutWidget);
        cell_7->setObjectName("cell_7");
        cell_7->setEnabled(false);

        horizontalLayout->addWidget(cell_7);

        cell_8 = new QPushButton(verticalLayoutWidget);
        cell_8->setObjectName("cell_8");
        cell_8->setEnabled(false);

        horizontalLayout->addWidget(cell_8);

        cell_9 = new QPushButton(verticalLayoutWidget);
        cell_9->setObjectName("cell_9");
        cell_9->setEnabled(false);

        horizontalLayout->addWidget(cell_9);

        cell_10 = new QPushButton(verticalLayoutWidget);
        cell_10->setObjectName("cell_10");
        cell_10->setEnabled(false);

        horizontalLayout->addWidget(cell_10);


        verticalLayout->addLayout(horizontalLayout);

        message = new QLabel(verticalLayoutWidget);
        message->setObjectName("message");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        message->setFont(font2);
        message->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(message);

        countOfSteps = new QLabel(verticalLayoutWidget);
        countOfSteps->setObjectName("countOfSteps");
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        countOfSteps->setFont(font3);
        countOfSteps->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(countOfSteps);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 762, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "LEFT", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "RIGHT", nullptr));
        swapButton->setText(QCoreApplication::translate("MainWindow", "SWAP", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to the game! We are glad to see you! Click \"START\" to play or \"EXIT\" to leave the game. Place all ones to the left of twos to win!", nullptr));
        cell->setText(QString());
        cell_2->setText(QString());
        cell_3->setText(QString());
        cell_4->setText(QString());
        cell_5->setText(QString());
        cell_6->setText(QString());
        cell_7->setText(QString());
        cell_8->setText(QString());
        cell_9->setText(QString());
        cell_10->setText(QString());
        message->setText(QString());
        countOfSteps->setText(QCoreApplication::translate("MainWindow", "COUNT OF STEPS: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
