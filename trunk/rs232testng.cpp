#include "rs232testng.h"
#include "plugapi/vartype.h"

rs232testng::rs232testng(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);

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
