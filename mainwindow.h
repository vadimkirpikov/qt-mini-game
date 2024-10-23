#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include<QLabel>
#include <iostream>
#include <functional>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void leftClick();
    void rightClick();
    void swapClick();
    void startClick();
    void exitClick();
    void clearMessage();
    void startGame();
private:
    Ui::MainWindow *ui;
    int currentPlayerPos;
    int emptyCellPos;
    int countOfSteps;
    QVector<QPushButton*> cells;
    void clearCell(std::function<void()>);
    void stopGameOnWin();
    bool isCompleted();

};
#endif // MAINWINDOW_H
