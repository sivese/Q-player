#include <QApplication>
#include <QPushButton>

#include "MainWindow.hh"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow w;
    w.resize(800, 600);
    w.show();

    return QApplication::exec();
}
