#include "SignalAndSlots3.h"
#include <QDebug>

SignalAndSlots3::SignalAndSlots3(QObject* parent) : QObject(parent)
{
    connect(this, SIGNAL(sigPrint(QString)), this, SLOT(sltPrint(QString)));
    emit sigPrint("Hello");
}

void SignalAndSlots3::sltPrint(const QString& text)
{
    qDebug() << text;
}
