#ifndef QINPUTPROVIDERMANAGER_H
#define QINPUTPROVIDERMANAGER_H

#include <QtGui/QWidget>
#include <QtGui/QFrame>
#include "ui_QInputProviderManager.h"

class QInputProviderManager : public QFrame
{
    Q_OBJECT

public:
    QInputProviderManager(QWidget *parent = 0);
    ~QInputProviderManager();

private:
    Ui::QInputProviderManager ui;
};

#endif // QINPUTPROVIDERMANAGER_H
