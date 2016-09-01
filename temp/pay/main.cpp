#include "pay.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pay w;
    w.show();

    return a.exec();
}
