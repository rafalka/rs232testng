#include "rs232testng.h"
#include "plugapi/vartype.h"

rs232testng::rs232testng(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
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

}

rs232testng::~rs232testng()
{

}
