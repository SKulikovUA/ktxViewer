#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScopedPointer>
#include <QMenuBar>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    static constexpr int WIN_WIDTH = 1280;
    static constexpr int WIN_HEIGHT = 720;

private:
    QScopedPointer<QAction> mFileOpenAction;
    QScopedPointer<QAction> mFileExitAction;
};
#endif // MAINWINDOW_H
