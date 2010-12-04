#include "InputModifierManager.h"

void InputModifierManager::SetupUI(QWidget *parent)
{
    if (ui) delete ui;
    ui = new Ui::InputModifierManagerUI();
    ui->setupUi(parent);

}
