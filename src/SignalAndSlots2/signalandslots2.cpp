#include "signalandslots2.h"
#include "ui_signalandslots2.h"

SignalAndSlots2::SignalAndSlots2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignalAndSlots2)
{
    ui->setupUi(this);
}

SignalAndSlots2::~SignalAndSlots2()
{
    delete ui;
}


void SignalAndSlots2::on_pushButton_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton->setText("隐藏进度条");
    }
    else
    {
        ui->pushButton->setText("显示进度条");
    }
}
