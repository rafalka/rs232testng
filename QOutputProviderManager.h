#ifndef QOUTPUTPROVIDERMANAGER_H
#define QOUTPUTPROVIDERMANAGER_H

#include <QtGui/QWidget>

#include <QObject>

#include "ui_QOutputProviderManager.h"

class QOutputProviderManager : public QObject
{
    Q_OBJECT

private:
    Ui::QOutputProviderManagerUI*  ui;

public:
    void        SetupUI(QWidget *parent);

    QOutputProviderManager();
    ~QOutputProviderManager();

};

#endif // QOUTPUTPROVIDERMANAGER_H
