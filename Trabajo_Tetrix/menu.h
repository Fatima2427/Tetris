#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QWidget>
#include "tetrixwindow.h"
#include "easywindow.h"
namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_salir_clicked();

    void on_facil_clicked();

    void on_normal_clicked();

    void on_hard_clicked();

private:
    Ui::menu *ui;
    QPushButton *salir;
    TetrixWindow *tetris2;
    easyWindow *tetris1;
};

#endif // MENU_H
