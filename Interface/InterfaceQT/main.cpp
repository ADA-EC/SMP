#include "mainwindow.h"
#include "telaprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TelaPrincipal w;
    w.show();
    MainWindow s;
    s.show();
    return a.exec();
}
