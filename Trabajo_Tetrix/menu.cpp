#include "menu.h"
#include "ui_menu.h"
#include "tetrixwindow.h"
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    tetris2 = new TetrixWindow();
    tetris1 = new easyWindow();

}

menu::~menu()
{
    delete ui;
}

void menu::on_salir_clicked()
{
   this->setVisible(false);
}


void menu::on_facil_clicked()
{
    this->setVisible(false);
    tetris1->setVisible(true);
}


void menu::on_normal_clicked()
{
    this->setVisible(false);
    tetris2->setVisible(true);
}



void menu::on_hard_clicked()
{

}

