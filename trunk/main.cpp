#include "rs232testng.h"

#include <QtGui>
#include <QApplication>

#include "QSourceManager.h"
#include "InputProviderFactory.h"

#include "QHtmlDisplayStreamItem.h"
#include "QTextEditStreamItem.h"

const char* modulename;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    modulename = a.applicationName().toAscii().constData();

    rs232testng w;
    w.show();


    QSourceManager srcMgr(
    		w.getCmbSrcSel(),
    		w.getActSrcHelp(),
    		w.getActSrcConf(),
    		w.getCmbSrcAddr(),
    		w.getActSrcConn() );

    QTextEditStreamItem     Input(w.ui.editIn);
    QHtmlDisplayStreamItem  Output(w.ui.editOut);
    Input.Connect( &Output );

    Q_ASSERT( QObject::connect( w.ui.actInSend, SIGNAL( triggered() ),
            &Input,   SLOT( Triggered() ) ) );


    return a.exec();
}
