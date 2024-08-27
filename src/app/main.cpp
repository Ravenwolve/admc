#include "mainwindow.h"
#include "accountwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    admc::AccountWidget w;
    w.show();
    return a.exec();
}
