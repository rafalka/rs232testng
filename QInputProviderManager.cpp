#include "QInputProviderManager.h"

QInputProviderManager::QInputProviderManager(QWidget *parent)
    : QFrame(parent)
{
	ui.setupUi(this);

	//ui.btnInHelp->setDefaultAction(ui.actInHelp);
    //ui.btnInConf->setDefaultAction(ui.actInConf);
    ui.btnInSend->setDefaultAction(ui.actInSend);

    ui.btnShowInHist->setDefaultAction(ui.actShowInHist);
    ui.btnShowMacros->setDefaultAction(ui.actShowMacros);

}

QInputProviderManager::~QInputProviderManager()
{

}
