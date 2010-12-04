#ifndef INPUTMODIFIERMANAGER_H
#define INPUTMODIFIERMANAGER_H

#include <QtGui/QWidget>
#include <QtGui/QFrame>

#include "StreamItem.h"

#include "ui_InputModifierManager.h"

class InputModifierManager : public QObject
{
    Q_OBJECT
private:
    Ui::InputModifierManagerUI* ui;

public:
    void        SetupUI(QWidget *parent);
    InputModifierManager():ui(0) {};
    //~InputModifierManager();
signals:
    void streamChanged(StreamItem* newStream);

};

#endif // INPUTMODIFIERMANAGER_H
