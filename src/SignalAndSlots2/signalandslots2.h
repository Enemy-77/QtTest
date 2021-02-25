#ifndef SIGNALANDSLOTS2_H
#define SIGNALANDSLOTS2_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SignalAndSlots2; }
QT_END_NAMESPACE

class SignalAndSlots2 : public QWidget
{
    Q_OBJECT

public:
    SignalAndSlots2(QWidget *parent = nullptr);
    ~SignalAndSlots2();

private slots:
    void on_pushButton_toggled(bool checked);

private:
    Ui::SignalAndSlots2 *ui;
};
#endif // SIGNALANDSLOTS2_H
