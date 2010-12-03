#include "rs232testng.h"
#include "plugapi/vartype.h"
#include "QConfigStorage.h"

rs232testng::rs232testng(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);

	loadSettings();
	/*
    CONF_START_GROUP( debug );
    CONF_STORE_VAL( valInt );
    CONF_STORE_VAL( valString );

    CONF_READ_VAL( valInt, -1 );
    CONF_READ_VAL( valString, "No i dupa" );

    CONF_END_GROUP( debug );
    */

	/*
	mainToolBar = new QToolBar();
	mainToolBar->addAction(ui.actionStart);
	mainToolBar->addSeparator();
	mainToolBar->addAction(ui.actionConf);
	mainToolBar->addAction(ui.actionHelp);
	mainToolBar->addAction(ui.actionExit);

	ui.mainDock->setWidget(mainToolBar);

	selCombo = new QComboBox(ui.srcSelDock);
	selCombo->addItems(QStringList() << "Ala" << "Ma" << "Kota" );
	ui.srcSelDock->setWidget(selCombo);
	*/
	ui.btnSrcHelp->setDefaultAction(ui.actSrcHelp);
	ui.btnSrcConf->setDefaultAction(ui.actSrcConf);
	ui.btnSrcConn->setDefaultAction(ui.actSrcConn);

	ui.btnInHelp->setDefaultAction(ui.actInHelp);
	ui.btnInConf->setDefaultAction(ui.actInConf);
	ui.btnInSend->setDefaultAction(ui.actInSend);

	ui.btnOutHelp->setDefaultAction(ui.actOutHelp);
	ui.btnOutConf->setDefaultAction(ui.actOutConf);

	ui.btnShowInHist->setDefaultAction(ui.actShowInHist);
	ui.btnShowMacros->setDefaultAction(ui.actShowMacros);


	ui.btnAppExit->setDefaultAction(ui.actAppExit);

}

rs232testng::~rs232testng()
{


}

void rs232testng::loadSettings()
{
    CONF_START_GROUP( MainWindow );
    restoreGeometry( QConfigStorage::getVal( "Geometry", QByteArray() ) );
    restoreState(    QConfigStorage::getVal( "State",    QByteArray() ) );

    ui.splitter->restoreState( QConfigStorage::getVal( "ContentState", QByteArray() ) );
}

void rs232testng::saveSettings()
{
    CONF_START_GROUP( MainWindow );
    QConfigStorage::setVal( "Geometry", saveGeometry() );
    QConfigStorage::setVal( "State", saveState() );

    QConfigStorage::setVal( "ContentState", ui.splitter->saveState() );

}

void rs232testng::closeEvent(QCloseEvent *event)
{
    saveSettings();
    QMainWindow::closeEvent(event);
}
