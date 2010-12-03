#include "QOutputProviderManager.h"


void QOutputProviderManager::SetupUI(QWidget *parent)
{
    if (ui) delete ui;

    ui = new Ui::QOutputProviderManagerUI();
    ui->setupUi(parent);
}

QOutputProviderManager::QOutputProviderManager()
    : ui(0)
{
}

QOutputProviderManager::~QOutputProviderManager()
{
    if (ui) delete ui;
}
