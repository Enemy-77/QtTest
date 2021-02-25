#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void newFile();   // 新建
    bool maybeSave(); // 判断是否需要保存
    bool save();      // 保存
    bool saveAs();    // 另存为
    bool saveFile(const QString& fileName); // 保存文件

private:
    Ui::MainWindow *ui;
    bool isUntitled;
    QString curFile;
};

#endif // MAINWINDOW_H
