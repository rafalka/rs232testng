#include "rs232testng.h"

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
}

rs232testng::~rs232testng()
{

}
