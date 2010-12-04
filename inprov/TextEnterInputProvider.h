#ifndef TEXTENTERINPUTPROVIDER_H
#define TEXTENTERINPUTPROVIDER_H

#include <QtGui/QWidget>

#include "DataProvider.h"
#include "TextEditStreamItem.h"

#include "ui_TextEnterInputProvider.h"

class TextEnterInputProvider : public DataProvider
{
    Q_OBJECT
private:
    Ui::TextEnterInputProviderUI* ui;
    TextEditStreamItem*          stream;

public:
    StreamItem* getDefaultStream() { return stream; }

    void        SetupUI(QWidget *parent);

    TextEnterInputProvider():ui(0),stream(0) {};
    //~TextEnterInputProvider();

};

#endif // TEXTENTERINPUTPROVIDER_H
