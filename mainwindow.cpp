#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <functional>
#include <QApplication>
#include <QtGlobal>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cells = {ui->cell, ui->cell_2,  ui->cell_3, ui->cell_4, ui->cell_5, ui->cell_6, ui->cell_7, ui->cell_8, ui->cell_9, ui->cell_10};
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->leftButton, &QPushButton::clicked, this, &MainWindow::leftClick);
    connect(ui->rightButton, &QPushButton::clicked, this, &MainWindow::rightClick);
    connect(ui->leftButton, &QPushButton::clicked, this, &MainWindow::clearMessage);
    connect(ui->rightButton, &QPushButton::clicked, this, &MainWindow::clearMessage);
    connect(ui->swapButton,  &QPushButton::clicked, this, &MainWindow::swapClick);
    connect(ui->exitButton,  &QPushButton::clicked, this, &MainWindow::exitClick);
    connect(ui->swapButton,  &QPushButton::clicked, this, &MainWindow::stopGameOnWin);
}
void MainWindow::leftClick() {
    cells[currentPlayerPos]->setStyleSheet("background-color: white;");
    currentPlayerPos = (currentPlayerPos+9)%10;
    cells[currentPlayerPos]->setStyleSheet("background-color: lightgreen;");
}
void MainWindow::rightClick() {
    cells[currentPlayerPos]->setStyleSheet("background-color: white;");
    currentPlayerPos = (currentPlayerPos+1)%10;
    cells[currentPlayerPos]->setStyleSheet("background-color: lightgreen;");
}
void MainWindow::clearCell(std::function<void()> f){
    cells[currentPlayerPos]->setStyleSheet("background-color: white;");
    f();
    cells[currentPlayerPos]->setStyleSheet("background-color: lightgreen;");
}
void MainWindow::exitClick() {
    QApplication::exit();
}
void MainWindow::swapClick() {
    if (abs(emptyCellPos-currentPlayerPos) <= 1 or currentPlayerPos == 9) {
        ui->message->setText("ERROR!");
        ui->message->setStyleSheet("color: red");
    }
    else {
        cells[emptyCellPos]->setText(cells[currentPlayerPos]->text());
        cells[emptyCellPos+1]->setText(cells[currentPlayerPos+1]->text());
        cells[currentPlayerPos]->setText("");
        cells[currentPlayerPos+1]->setText("");
        emptyCellPos = currentPlayerPos;
    }
    countOfSteps++;
    QString cfs = QString::number(countOfSteps);
    QString text = "COUNT OF STEPS: "+cfs;
    ui->countOfSteps->setText(text);
}
void  MainWindow::clearMessage() {
    ui->message->setText("");
    ui->message->setStyleSheet("color: black;");
}
void MainWindow::startClick() {
    std::cout<<"click";
}
void MainWindow::stopGameOnWin() {
    if  (isCompleted()) {
        ui->message->setText("YOU HAVE WON!");
        ui->message->setStyleSheet("color: green;");
        ui->leftButton->setEnabled(false);
        ui->rightButton->setEnabled(false);
        ui->swapButton->setEnabled(false);
    }
}
void MainWindow::startGame() {
    countOfSteps = 0;
    QVector<QString> values;
    QVector<int> emptyPoses;
    std::random_device rd;
    std::default_random_engine rng(rd());

    for (int i = 0; i< cells.size(); i++) {
        values.push_back(i<cells.size()/2?"1":"2");
    }


    std::shuffle(values.begin(), values.end(), rng);
    for (int i = 0; i<values.size()-1; i++) {
        if (values[i]!=values[i+1]) {
            emptyPoses.push_back(i);
        }
    }

    emptyCellPos = emptyPoses[rand() %  emptyPoses.size()];
    values[emptyCellPos] =  "";
    values[emptyCellPos+1] =  "";

    for (int i = 0; i<cells.size(); i++) {
        cells[i]->setText(values[i]);
        cells[i]->setStyleSheet("background-color: white;");
    }

    currentPlayerPos = rand()%cells.size();
    cells[currentPlayerPos]->setStyleSheet("background-color: lightgreen;");
    ui->leftButton->setEnabled(true);
    ui->rightButton->setEnabled(true);
    ui->swapButton->setEnabled(true);
    QString cfs = QString::number(countOfSteps);
    QString text = "COUNT OF STEPS: "+cfs;
    ui->countOfSteps->setText(text);
}
bool MainWindow::isCompleted() {
    int count = 0;
    for (QPushButton* cell: cells) {
        if (cell->text() == "1") {
            count++;

        }
        else if (cell->text() == "2") {
            return count == 4;
        }
    }
    return  false;
}
MainWindow::~MainWindow()
{
    delete ui;
}
