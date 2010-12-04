#include "rs232testng.h"

#include <QtGui>
#include <QApplication>
#include <QStringList>

#include "DataProvider.h"
#include "SourceProviderManager.h"
#include "TextEnterInputProvider.h"
#include "InputModifierManager.h"
#include "InputProviderFactory.h"
#include "OutputModifierManager.h"
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

    HtmlDisplayOutputProvider   htmlOut;
    OutputModifierManager       outMgr;
    SourceProviderManager       srcMgr;
    InputModifierManager        inMgr;
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
    return a.exec();
}
