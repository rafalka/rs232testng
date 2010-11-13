#include "rs232testng.h"

#include <QtGui>
#include <QApplication>

#include "QSourceManager.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rs232testng w;
    w.show();

    QSourceManager srcMgr(
    		w.getCmbSrcSel(),
    		w.getActSrcHelp(),
    		w.getActSrcConf(),
    		w.getCmbSrcAddr(),
    		w.getActSrcConn() );

    return a.exec();
}
