#include "mainquery.h"
#include <QApplication>
#include "table.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainQuery w;
    w.show();

    return a.exec();
}
