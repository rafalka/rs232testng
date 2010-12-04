#ifndef OUTPUTMODIFIERMANAGER_H
#define OUTPUTMODIFIERMANAGER_H

#include <QObject>
#include "DataProvider.h"

// Forward declaration
class QWidget;
namespace Ui {
    class OutputModifierManagerUI;
}
class StreamItem;


class OutputModifierManager : public QObject
{
    Q_OBJECT

private:
    Ui::OutputModifierManagerUI*  ui;

    DataProvider* currentProvider;
    int lastGoodProviderIdx;

    void setProvider(DataProvider* newProvider);
    void SetupProviderUI();

private slots:
    void cmbSourceSelectActivated( int index );
    void onStreamChanged(StreamItem* newStream);

public:
    void SetupUI(QWidget *parent);

    OutputModifierManager();
    ~OutputModifierManager();

signals:
    void streamChanged(StreamItem* newStream);

};

#endif // OUTPUTMODIFIERMANAGER_H

