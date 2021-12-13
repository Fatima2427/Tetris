#include "tetrixwindow.h"
#include "menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*TetrixWindow w;
    w.show();
    return a.exec();

    */
    menu m;
    m.show();
    return a.exec();
}
