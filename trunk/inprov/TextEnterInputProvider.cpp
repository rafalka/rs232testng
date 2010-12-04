#include "TextEnterInputProvider.h"

void TextEnterInputProvider::SetupUI(QWidget *parent)
{
    if (stream)
    {
        emit streamChanged(0);
        delete stream;
    }

    if (ui) delete ui;
    ui = new Ui::TextEnterInputProviderUI();
    ui->setupUi(parent);
    stream = new TextEditStreamItem(ui->editIn);
    emit streamChanged(stream);

    Q_ASSERT( QObject::connect( ui->actInSend, SIGNAL( triggered() ),
            stream,   SLOT( Triggered() ) ) );

    ui->btnInSend->setDefaultAction(ui->actInSend);

    ui->btnShowInHist->setDefaultAction(ui->actShowInHist);
    ui->btnShowMacros->setDefaultAction(ui->actShowMacros);

}
