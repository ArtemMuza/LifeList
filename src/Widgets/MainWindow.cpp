#include "MainWindow.h"

MainWindow::MainWindow(QWidget* _parrent, Qt::WindowFlags _flags) :
    QMainWindow(_parrent, _flags) {
    this->showMaximized();
}

