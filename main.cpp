#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Button w(nullptr);
    w.show();
    return a.exec();
}
