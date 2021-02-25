#include "modelwidget.h"
#include "ui_modelwidget.h"
#include "customdialog.h"

#include <QDialog>
#include <QDebug>

ModelWidget::ModelWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ModelWidget)
{
    ui->setupUi(this);
}

ModelWidget::~ModelWidget()
{
    delete ui;
}

void ModelWidget::on_btnWindow_clicked()
{
    QDialog* dlg = new QDialog(this);
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->setWindowModality(Qt::WindowModal);
    dlg->show();
    qDebug() << "虽然显示模态对话框，但我不需要等用户操作完就会立马执行";
}

void ModelWidget::on_btnApp_clicked()
{
    QDialog* dlg = new QDialog(this);
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->setWindowModality(Qt::ApplicationModal);
    dlg->show();
    qDebug() << "虽然显示模态对话框，但我也不需要等用户操作完就会立马执行";
}

void ModelWidget::on_btnCustom_clicked()
{
    CustomDialog* dlg = new CustomDialog(this);
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    int ret = dlg->exec();
    if(ret == QDialog::Accepted)
    {
        ui->lineEdit->setText("你点击了OK按钮");
    }
    else if(ret == QDialog::Rejected)
    {
        ui->lineEdit->setText("你点击了cancle按钮");
    }

}
