
#ifndef EASYWINDOW_H
#define EASYWINDOW_H

#include <QWidget>
#include "tetrixpiece.h"
#include "tetrixwindow.h"
QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class TetrixBoard;

//! [0]
class easyWindow : public QWidget
{
    Q_OBJECT

public:
    easyWindow(QWidget *parent = nullptr);

private:
    QLabel *createLabel(const QString &text);

    TetrixBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
    QPushButton *newPiece;
};
//! [0]

#endif
