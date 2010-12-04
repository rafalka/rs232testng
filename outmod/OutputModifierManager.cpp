
#include <QtGui/QWidget>

#include "OutputModifierManager.h"
#include "OutputModifierFactory.h"

#include "QConfigStorage.h"

#include "ui_OutputModifierManager.h"
#include "StreamItem.h"


void OutputModifierManager::SetupProviderUI()
{
    if (currentProvider)
    {
        Q_ASSERT( QObject::connect( currentProvider, SIGNAL( streamChanged(StreamItem*) ),
                this,   SLOT( onStreamChanged(StreamItem*) ) ) );

        if (ui) currentProvider->SetupUI(ui->outCtrlPanel);
    }
}

void OutputModifierManager::SetupUI(QWidget *parent)
{
    if (ui) delete ui;

    ui = new Ui::OutputModifierManagerUI();
    ui->setupUi(parent);

    Q_ASSERT( QObject::connect( ui->cmbOutSel, SIGNAL( activated(int) ),
            this,   SLOT( cmbSourceSelectActivated(int) ) ) );

    ui->cmbOutSel->setModel( OutModFac.getItemsModel() );

    if (lastGoodProviderIdx<0)
    {
        CONF_START_GROUP( OutputModifierManager );
        CONF_READ_VAL( lastGoodProviderIdx, 0 );
        CONF_END_GROUP( OutputModifierManager );
    }
    ui->cmbOutSel->setCurrentIndex(lastGoodProviderIdx);
    cmbSourceSelectActivated(lastGoodProviderIdx);
}

void OutputModifierManager::onStreamChanged(StreamItem* newStream)
{
    emit streamChanged( newStream );
}

void OutputModifierManager::setProvider(DataProvider* newProvider)
{
    DataProvider* tmpProvider = currentProvider;

    currentProvider = newProvider;

    // Emit signal
    //emit providerChanged(newProvider);

    emit streamChanged( (newProvider) ? newProvider->getDefaultStream() : 0 );

    if (tmpProvider) OutModFac.ReleaseProvider(tmpProvider);

    SetupProviderUI();
}

void OutputModifierManager::cmbSourceSelectActivated( int index )
{
    DataProvider* tmpProvider = OutModFac.GetProviderFromIndex(index);
    if (tmpProvider)
    {
        setProvider(tmpProvider);
        lastGoodProviderIdx = index;
    }
    else
    {
        if (!currentProvider) lastGoodProviderIdx = -1;
        if (ui) ui->cmbOutSel->setCurrentIndex(lastGoodProviderIdx);
    }

}

OutputModifierManager::OutputModifierManager():
        ui(0),
        currentProvider(0),
        lastGoodProviderIdx(-1)
{
}

OutputModifierManager::~OutputModifierManager()
{
    if (ui) delete ui;

    CONF_START_GROUP( OutputModifierManager );
    CONF_STORE_VAL( lastGoodProviderIdx );

}
