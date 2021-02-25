#include "signalandslots2.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalAndSlots2 w;
    w.show();
    return a.exec();
}
