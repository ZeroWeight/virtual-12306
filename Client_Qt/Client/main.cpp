#include "mainwindow.h"
#include <QApplication>
#include "quickquery.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuickQuery w;
    w.show();

    return a.exec();
}
