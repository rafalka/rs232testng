#include "rs232testng.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rs232testng w;
    w.show();
    return a.exec();
}
