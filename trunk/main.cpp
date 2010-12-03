#include "rs232testng.h"

#include <QtGui>
#include <QApplication>
#include <QStringList>

#include "DataProvider.h"
#include "QSourceManager.h"
#include "InputProviderFactory.h"
#include "QOutputProviderManager.h"
#include "HtmlDisplayOutputProvider.h"

#include "QConfigStorage.h"
#include "main.h"

const char* modulename;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    modulename = a.applicationName().toAscii().constData();

    int        valInt=123456;
    QString    valString="Ala ma kota na punkcie psa";
    QStringList valStrList;

    valStrList << "Ala" << "Ma" << "Kota" << "Na" << "Punkcie" << "Psa";

    CONF_START_GROUP( debug );
    CONF_STORE_VAL( valInt );
    CONF_STORE_VAL( valString );
    CONF_STORE_VAL( valStrList );

    CONF_READ_VAL( valInt, -1 );
    CONF_READ_VAL( valString, "No i dupa" );

    CONF_END_GROUP( debug );


    rs232testng w;

    QOutputProviderManager      outmgr;
    HtmlDisplayOutputProvider   htmlout;

    outmgr.SetupUI(w.getOutputManagerArea() );
    htmlout.SetupUI( w.getOutputArea() );



    w.show();


    QSourceManager srcMgr(
    		w.getCmbSrcSel(),
    		w.getActSrcHelp(),
    		w.getActSrcConf(),
    		w.getCmbSrcAddr(),
    		w.getActSrcConn() );


/*
    QStreamManager stramMgr(w.ui.editIn, w.ui.editOut);


    Q_ASSERT( QObject::connect( w.ui.actInSend, SIGNAL( triggered() ),
            &stramMgr,   SLOT( Triggered() ) ) );

    Q_ASSERT( QObject::connect( &srcMgr, SIGNAL( providerChanged(SourceProvider*) ),
            &stramMgr,   SLOT( onSourceProviderChanged(SourceProvider*) ) ) );
*/
    return a.exec();
}
