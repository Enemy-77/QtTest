#ifndef SIGNALANDSLOTS3_H
#define SIGNALANDSLOTS3_H

#include <QObject>

class SignalAndSlots3 : public QObject
{
    Q_OBJECT
public:
    explicit SignalAndSlots3(QObject* parent = 0);

signals:
    void sigPrint(const QString& text);

public slots:
    void sltPrint(const QString& text);

};



#endif // SIGNALANDSLOTS3_H
