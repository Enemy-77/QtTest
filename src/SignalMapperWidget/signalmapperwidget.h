#ifndef SIGNALMAPPERWIDGET_H
#define SIGNALMAPPERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SignalMapperWidget; }
QT_END_NAMESPACE

class SignalMapperWidget : public QWidget
{
    Q_OBJECT

public:
    SignalMapperWidget(QWidget *parent = nullptr);
    ~SignalMapperWidget();

private:
    Ui::SignalMapperWidget *ui;
};
#endif // SIGNALMAPPERWIDGET_H
