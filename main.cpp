#include "rs232testng.h"

#include <QtGui>
#include <QApplication>
#include <QStringList>
#include <cstdio>

#include "DataProvider.h"
#include "ProviderFactory.h"
#include "ProviderManager.h"
#include "InputProviderFactory.h"
#include "OutputModifierFactory.h"
#include "SourceProviderFactory.h"

#include "TextEnterInputProvider.h"
#include "HtmlDisplayOutputProvider.h"

#include "QConfigStorage.h"

#include "debug.h"
#include "main.h"

const char* modulename;



int main(int argc, char *argv[])
{
    int res = -1;

    fprintf(stderr,"No i dupa\n");

    try
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

    HtmlDisplayOutputProvider   htmlOut;
    ProviderManager             outMgr( OutputModifierFactory::instance() );
    ProviderManager             srcMgr( SourceProviderFactory::instance() );
    ProviderManager             inMgr(  InputProviderFactory::instance() );
    TextEnterInputProvider      textIn;

    QStreamManager              stramMgr;

    Q_ASSERT( QObject::connect( &htmlOut, SIGNAL( streamChanged(StreamItem*) ),
            &stramMgr,   SLOT( onOutStreamChanged(StreamItem*) ) ) );

    Q_ASSERT( QObject::connect( &outMgr, SIGNAL( streamChanged(StreamItem*) ),
            &stramMgr,   SLOT( onOutModStreamChanged(StreamItem*) ) ) );

    Q_ASSERT( QObject::connect( &srcMgr, SIGNAL( streamChanged(StreamItem*) ),
            &stramMgr,   SLOT( onSourceStreamChanged(StreamItem*) ) ) );

    Q_ASSERT( QObject::connect( &inMgr, SIGNAL( streamChanged(StreamItem*) ),
            &stramMgr,   SLOT( onInModStreamChanged(StreamItem*) ) ) );

    Q_ASSERT( QObject::connect( &textIn, SIGNAL( streamChanged(StreamItem*) ),
            &stramMgr,   SLOT( onInStreamChanged(StreamItem*) ) ) );

    htmlOut.SetupUI( w.getOutputArea() );
    outMgr.SetupUI(  w.getOutputManagerArea() );
    srcMgr.SetupUI(  w.getSourceManagerArea() );
    textIn.SetupUI(  w.getInputArea() );
    inMgr.SetupUI(   w.getInputManagerArea() );



    w.show();




/*
    QStreamManager stramMgr(w.ui.editIn, w.ui.editOut);



    Q_ASSERT( QObject::connect( &srcMgr, SIGNAL( providerChanged(SourceProvider*) ),
            &stramMgr,   SLOT( onSourceProviderChanged(SourceProvider*) ) ) );
*/
    res = a.exec();

    }
    /*
    catch (Error &err) {
        _ERRMSG2( "ERROR %d: %s\n", err.code() , err.msg() );
        res = err.code();
    }
    */
    catch (std::exception &err) {
        _ERRMSG1( "ERROR %s\n", err.what() );
        res = -1;
    }
    catch (...) {
        _ERRMSG("Internal error\n");
        res = -1;
    }
    return res;
}
