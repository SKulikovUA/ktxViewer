#include "MainWindow.h"
#include <QScreen>
#include <QApplication>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
{
   QMenu* fileMenu = menuBar()->addMenu("&File");
   if(fileMenu != nullptr)
   {
      mFileOpenAction.reset(new QAction("Open", this));
      fileMenu->addAction(mFileOpenAction.get());
      connect(mFileOpenAction.get(), &QAction::triggered, this, []()
      {
         qDebug() << "Clicked";
      }
      );
   }

   setGeometry(100, 100, WIN_WIDTH, WIN_HEIGHT);
   QScreen* screen = QGuiApplication::primaryScreen();
   if(screen != nullptr)
   {
      QRect scrRecrt = screen->geometry();
      QRect winRect = geometry();
      winRect.moveCenter(scrRecrt.center());
      setGeometry(winRect);
   }
}

MainWindow::~MainWindow()
{
}

