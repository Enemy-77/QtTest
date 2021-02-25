#include "signalmapperwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalMapperWidget w;
    w.show();
    return a.exec();
}
