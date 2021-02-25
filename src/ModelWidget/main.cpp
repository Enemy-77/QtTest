#include "modelwidget.h"

#include <QApplication>
#include <QDialog>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelWidget w;
    w.show();

    QDialog modelLessDlg;
    modelLessDlg.setWindowTitle("非模态对话框");
    modelLessDlg.show();
    modelLessDlg.resize(200, 100);
    qDebug() << "显式完非模态对话框，不需要等用户操作就会立马执行";

    return a.exec();
}
